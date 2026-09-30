#include <stdio.h>
int main() {
    int time, motion, lightLevel, room;
    printf("Enter time (0-23): ");
    scanf("%d", &time);
    printf("Enter motion status (1/0): ");
    scanf("%d", &motion);
    printf("Enter light level (0-100): ");
    scanf("%d", &lightLevel);

    printf("Select room (1 = Living Room, 2 = Bedroom, 3 = Kitchen): ");
    scanf("%d", &room);

    if (room < 1 || room > 3) {
        printf("Invalid room selection.\n");
    } 
    else {
        if (room == 3) {
            int cooking;
            printf("Is cooking in progress? (1/0): ");
            scanf("%d", &cooking);
            if (cooking == 1) {
                printf("Mode: Cooking mode | Action: Exhaust fan ON\n");
                return 0;
            }
        }
        if (motion == 0) {
            printf("Mode: Away mode | Action: all OFF\n");
        } 
        else if (time >= 6 && time < 18) {
            printf("Mode: Day mode | Action: lights ON\n");
        } 
        else if (time >= 18 && time < 23) {
            printf("Mode: Evening mode | Action: dim lights\n");
        } 
        else { // time between 23 and 6
            printf("Mode: Night mode | Action: lights OFF\n");
        }
    }
    return 0;
}