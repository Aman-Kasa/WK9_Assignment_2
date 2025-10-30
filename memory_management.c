#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 10
#define FINAL_SIZE 6
#define EMAIL_LENGTH 100

// Function to display email addresses
void displayEmails(char **emails, int size) {
    printf("\nEmail addresses:\n");
    for (int i = 0; i < size; i++) {
        if (emails[i] != NULL) {
            printf("%d. %s\n", i + 1, emails[i]);
        }
    }
}

// Function to remove duplicate email addresses
void removeDuplicates(char ***emails, int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size; j++) {
            if ((*emails)[i] != NULL && (*emails)[j] != NULL && 
                strcmp((*emails)[i], (*emails)[j]) == 0) {
                free((*emails)[j]);
                (*emails)[j] = NULL;
            }
        }
    }
    
    // Compact the array by removing NULL entries
    int writeIndex = 0;
    for (int i = 0; i < *size; i++) {
        if ((*emails)[i] != NULL) {
            (*emails)[writeIndex] = (*emails)[i];
            writeIndex++;
        }
    }
    
    // Update size and reallocate memory
    *size = writeIndex;
    *emails = (char**)realloc(*emails, (*size) * sizeof(char*));
}

int main() {
    // Allocate memory for array of string pointers
    char **emails = (char**)malloc(INITIAL_SIZE * sizeof(char*));
    if (emails == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Sample email addresses for 2023M cohort
    char sampleEmails[INITIAL_SIZE][EMAIL_LENGTH] = {
        "david.johnson@alustudent.com",
        "mary.williams@alustudent.com", 
        "michael.brown@alustudent.com",
        "sarah.davis@alustudent.com",
        "james.wilson@alustudent.com",
        "rebecca.miller@alustudent.com",
        "daniel.garcia@alustudent.com",
        "mary.williams@alustudent.com",  // Duplicate
        "joshua.martinez@alustudent.com",
        "rachel.anderson@alustudent.com"
    };
    
    // Allocate memory for each email string and copy data
    for (int i = 0; i < INITIAL_SIZE; i++) {
        emails[i] = (char*)malloc(EMAIL_LENGTH * sizeof(char));
        if (emails[i] == NULL) {
            printf("Memory allocation failed for email %d!\n", i);
            return 1;
        }
        strcpy(emails[i], sampleEmails[i]);
    }
    
    int currentSize = INITIAL_SIZE;
    
    // Function pointers
    void (*displayFunc)(char**, int) = displayEmails;
    void (*removeDupFunc)(char***, int*) = removeDuplicates;
    
    printf("Initial email addresses (10 students):");
    displayFunc(emails, currentSize);
    
    // Remove duplicates using function pointer
    removeDupFunc(&emails, &currentSize);
    
    printf("\nAfter removing duplicates:");
    displayFunc(emails, currentSize);
    
    // Shrink to 6 students using realloc
    if (currentSize > FINAL_SIZE) {
        // Free memory for emails beyond FINAL_SIZE
        for (int i = FINAL_SIZE; i < currentSize; i++) {
            free(emails[i]);
        }
        
        // Reallocate memory to shrink the array
        emails = (char**)realloc(emails, FINAL_SIZE * sizeof(char*));
        currentSize = FINAL_SIZE;
        
        printf("\nAfter shrinking to 6 students:");
        displayFunc(emails, currentSize);
    }
    
    // Free all allocated memory
    for (int i = 0; i < currentSize; i++) {
        free(emails[i]);
    }
    free(emails);
    
    printf("\nMemory successfully deallocated.\n");
    
    return 0;
}