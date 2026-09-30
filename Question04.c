#include <stdio.h>

int main() {
    int cardStatus, pinStatus;
    double balance, withdrawal;
    printf("Enter card status (1 = valid, 0 = blocked): ");
    scanf("%d", &cardStatus);
    printf("Enter PIN correctness (1 = correct, 0 = wrong): ");
    scanf("%d", &pinStatus);
    printf("Enter account balance: ");
    scanf("%lf", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%lf", &withdrawal);
    if (cardStatus == 0) {
        printf("Card blocked. Contact bank.\n");
    } 
    else if (pinStatus == 0) {
        printf("Incorrect PIN.\n");
    } 
    else if (withdrawal <= 0) {
        printf("Invalid amount.\n");
    } 
    else if (withdrawal > balance) {
        printf("Insufficient balance.\n");
    } 
    else if (withdrawal > 25000) {
        printf("Daily limit exceeded.\n");
    } 
    else if ((balance - withdrawal) < 1000) {
        printf("Minimum balance must be maintained.\n");
    } 
    else {
        double newBalance = balance - withdrawal;
        int remainingAmount = (int)withdrawal;

        int notes2000 = remainingAmount / 2000;
        remainingAmount = remainingAmount % 2000;

        int notes500 = remainingAmount / 500;
        remainingAmount = remainingAmount % 500;

        int notes100 = remainingAmount / 100;

        printf("New balance = %.2f\n", newBalance);
        printf("2000 notes: %d\n", notes2000);
        printf("500 notes: %d\n", notes500);
        printf("100 notes: %d\n", notes100);
        printf("Please collect your cash.\n");
    }

    return 0;
}