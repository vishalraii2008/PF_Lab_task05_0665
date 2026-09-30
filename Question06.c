#include <stdio.h>
int main() {
    int category, subType;
    printf("Choose category (1 = Greeting, 2 = Query, 3 = Complaint, 4 = Feedback): ");
    scanf("%d", &category);

    if (category == 1) {
        printf("Choose sub-type (1 = Morning, 2 = Evening): ");
        scanf("%d", &subType);
        if (subType == 1) {
            printf("Good morning! How can I help you today?\n");
        } else if (subType == 2) {
            printf("Good evening! How can I help you today?\n");
        } else {
            printf("Invalid selection\n");
        }
    } 
    else if (category == 2) {
        printf("Choose sub-type (1 = Product, 2 = Billing, 3 = Technical): ");
        scanf("%d", &subType);
        if (subType == 1) {
            printf("Product Query: Please visit our catalog or ask about specific items.\n");
        } else if (subType == 2) {
            printf("Billing Query: Connecting you to financial support...\n");
        } else if (subType == 3) {
            printf("Technical Query: Please describe the issue you are facing.\n");
        } else {
            printf("Invalid selection\n");
        }
    } 
    else if (category == 3) { 
        printf("Choose sub-type (1 = Delivery, 2 = Quality): ");
        scanf("%d", &subType);
        if (subType == 1) {
            int delayed;
            printf("Is the order delayed? (1/0): ");
            scanf("%d", &delayed);
            if (delayed == 1) {
                printf("We sincerely apologize for the delay. Your shipment is being prioritized.\n");
            } else {
                printf("We apologize for the delivery issue. Raising a priority ticket.\n");
            }
        } else if (subType == 2) {
            printf("We apologize for the poor quality. Connecting to customer service.\n");
        } else {
            printf("Invalid selection\n");
        }
    } 
    else if (category == 4) { 
        printf("Choose sub-type (1 = Positive, 2 = Negative): ");
        scanf("%d", &subType);
        if (subType == 1) {
            printf("Thank you for your positive feedback!\n");
        } else if (subType == 2) {
            printf("We are sorry for your experience. We will use this to improve.\n");
        } else {
            printf("Invalid selection\n");
        }
    } 
    else {
        printf("Invalid selection\n");
    }
    return 0;
}