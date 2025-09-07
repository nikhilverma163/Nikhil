#include<stdio.h>

int main() {
    int n, sum =0;

    printf("Enetr the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are: ", n);

    for (int i=1, count = 0; count < n; i+=2){
        printf("%d", i);
        sum += i;
        count++;

    }
    printf("\nSum of first %d odd numbers = %d\n", n, sum );
    
    return 0;
    
}