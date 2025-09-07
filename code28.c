#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int evens[n];  
    char expression[500] = "";  

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evens[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("No even numbers in the range 1 to %d.\n", n);
        return 0;
    }

    
    for (int i = 0; i < count; i++) {
        char temp[20];
        sprintf(temp, "%d", evens[i]);   
        strcat(expression, temp);       
        product *= evens[i];            

        if (i != count - 1) {
            strcat(expression, " * ");  
        }
    }

    
    char result[50];
    sprintf(result, " = %lld", product);
    strcat(expression, result);

    printf("Expression: %s\n", expression);

    return 0;
}
