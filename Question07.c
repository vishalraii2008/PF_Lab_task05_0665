#include <stdio.h>
int main() {
    int stream, interest;
    printf("Choose stream (1 = Science, 2 = Commerce, 3 = Arts): ");
    scanf("%d", &stream);

    if (stream == 1) { 
        printf("Choose interest (1 = Biology, 2 = Physics, 3 = Chemistry): ");
        scanf("%d", &interest);
        if (interest == 1) {
            int medicine;
            printf("Are you interested in medicine? (1/0): ");
            scanf("%d", &medicine);
            if (medicine == 1) {
                printf("Recommended Course: MBBS\n");
            } else if (medicine == 0) {
                printf("Recommended Course: Biotechnology\n");
            } else {
                printf("Invalid choice\n");
            }
        } else if (interest == 2) {
            printf("Recommended Course: B.Sc Physics\n");
        } else if (interest == 3) {
            printf("Recommended Course: B.Sc Chemistry\n");
        } else {
            printf("Invalid choice\n");
        }
    } 
    else if (stream == 2) { 
        printf("Choose interest (1 = Accounting, 2 = Marketing): ");
        scanf("%d", &interest);
        if (interest == 1) {
            printf("Recommended Course: B.Com Accounting\n");
        } else if (interest == 2) {
            printf("Recommended Course: BBA Marketing\n");
        } else {
            printf("Invalid choice\n");
        }
    } 
    else if (stream == 3) { 
        printf("Choose interest (1 = Literature, 2 = History, 3 = Psychology): ");
        scanf("%d", &interest);
        if (interest == 1) {
            printf("Recommended Course: BA English Literature\n");
        } else if (interest == 2) {
            printf("Recommended Course: BA History\n");
        } else if (interest == 3) {
            printf("Recommended Course: BA Psychology\n");
        } else {
            printf("Invalid choice\n");
        }
    } 
    else {
        printf("Invalid choice\n");
    }
    return 0;
}