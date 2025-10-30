#include <stdio.h>
#include <string.h>

#define MAX_NAMES 20
#define MAX_LENGTH 100

// Function to sort names in ascending order
void sortAscending(char names[][MAX_LENGTH], int *count) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < *count - 1; i++) {
        for (int j = 0; j < *count - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

// Function to sort names in descending order
void sortDescending(char names[][MAX_LENGTH], int *count) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < *count - 1; i++) {
        for (int j = 0; j < *count - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) < 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

// Function to display names
void displayNames(char names[][MAX_LENGTH], int *count) {
    printf("\nSorted names:\n");
    for (int i = 0; i < *count; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}

int main() {
    char names[MAX_NAMES][MAX_LENGTH] = {
        "Abraham Lincoln", "Mary Magdalene", "David Johnson", "Sarah Williams", "Michael Brown",
        "Rebecca Davis", "Daniel Wilson", "Rachel Miller", "Joshua Garcia", "Ruth Martinez",
        "Samuel Anderson", "Esther Taylor", "Benjamin Thomas", "Hannah Jackson", "Matthew White",
        "Miriam Harris", "Luke Martin", "Deborah Thompson", "Mark Garcia", "Elizabeth Lee"
    };
    
    int count = MAX_NAMES;
    char choice[10];
    
    // Function pointer declaration
    void (*sortFunction)(char[][MAX_LENGTH], int*);
    
    printf("Enter 'asc' for ascending or 'desc' for descending order: ");
    scanf("%s", choice);
    
    if (strcmp(choice, "asc") == 0) {
        sortFunction = sortAscending;
    } else if (strcmp(choice, "desc") == 0) {
        sortFunction = sortDescending;
    } else {
        printf("Invalid choice. Using ascending order.\n");
        sortFunction = sortAscending;
    }
    
    // Call the function using function pointer
    sortFunction(names, &count);
    
    // Display sorted names
    displayNames(names, &count);
    
    return 0;
}
