#include <stdio.h>
int main() {
    int permissions;
    printf("Enter permissions integer: ");
    scanf("%d", &permissions);
    int READ = 1;
    int WRITE = 2;  
    int EXECUTE = 4; 

    if (permissions & EXECUTE) {
        printf("Access granted: full control\n");
    } 
    else {
        if ((permissions & READ) && (permissions & WRITE)) {
            printf("Access granted: read and write\n");
        } 
        else if (permissions & READ) {
            printf("Access granted: read-only\n");
        } 
        else {
            printf("Access denied\n");
        }
    }
    return 0;
}