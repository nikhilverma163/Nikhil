#include<stdio.h>

int main () {
    int dayslate;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &dayslate);

    if (dayslate <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (dayslate <= 5) {
        fine = dayslate * 2;
        printf("Fine = ₹%d\n", fine);
    }
     else if (dayslate <= 10) {
        fine = (5*2) + (dayslate - 5)*4;
        printf("Fine = ₹%d\n", fine);
    }
    else if (dayslate <= 30) {
        fine = (5 * 2) + (5 * 4) + (dayslate - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    }
     else {
        printf("Membership Cancelled.\n");
    }
    return 0;


}