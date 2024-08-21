#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n/5; i++) {
        sum += i;
    }
    
    printf("The sum of the series 1+2+3+...+n/5 is: %d\n", sum);
    
    return 0;
}