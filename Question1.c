#include<stdio.h>
int main() {
    int vehicleType, hours, membership;

    printf("Enter vehicle type (1 = bike, 2 = car, 3 = truck): ");
    scanf("%d", &vehicleType);
    printf("Enter hours parked: ");
    scanf("%d", &hours);
    printf("Enter membership status (1 = member, 0 = non-member): ");
    scanf("%d", &membership);

    if (vehicleType < 1 || vehicleType > 3) {
        printf("Invalid vehicle\n");
    } 
    else {
        if (hours <= 0) {
            printf("Invalid duration\n");
        } 
        else {
            double fee = 0.0;

            if (vehicleType == 1) { // Bike
                fee = 20.0 * hours;
            } 
            else if (vehicleType == 2) {
                if (hours <= 2) {
                    fee = 50.0;
                } else {
                    fee = 50.0 + 30.0 * (hours - 2);
                }1
            } 
            else if (vehicleType == 3) { 
                if (hours <= 3) {
                    fee = 100.0;
                } else {
                    fee = 100.0 + 50.0 * (hours - 3);
                }
            }

            if (membership == 1) {
                if (fee > 200.0) {
                    fee = fee * 0.85;
                }
            }

            printf("Final Fee: $%.2f\n", fee);
        }
    }
    return 0;
}