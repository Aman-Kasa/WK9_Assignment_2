#include <stdio.h>

// Function to calculate tax based on salary range
void calculateTax(double *gross, double *tax) {
    if (*gross <= 100) {
        *tax = 0;
    } else if (*gross <= 300) {
        *tax = *gross * 0.20;
    } else {
        *tax = *gross * 0.28;
    }
}

// Function to calculate medical insurance (5%)
void calculateMedicalInsurance(double *gross, double *medical) {
    *medical = *gross * 0.05;
}

// Function to calculate maternity leave (0.3%)
void calculateMaternityLeave(double *gross, double *maternity) {
    *maternity = *gross * 0.003;
}

// Function to calculate social security fund (3%)
void calculateSocialSecurity(double *gross, double *social) {
    *social = *gross * 0.03;
}

// Function to calculate net salary
void calculateNetSalary(double *gross, double *net) {
    double tax, medical, maternity, social;
    
    calculateTax(gross, &tax);
    calculateMedicalInsurance(gross, &medical);
    calculateMaternityLeave(gross, &maternity);
    calculateSocialSecurity(gross, &social);
    
    *net = *gross - (tax + medical + maternity + social);
}

int main() {
    double grossSalary, netSalary;
    
    printf("Enter gross salary (USD): ");
    scanf("%lf", &grossSalary);
    
    calculateNetSalary(&grossSalary, &netSalary);
    
    printf("Gross Salary: $%.2f\n", grossSalary);
    printf("Net Salary: $%.2f\n", netSalary);
    
    return 0;
}