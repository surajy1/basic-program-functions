#include <stdio.h>

int power(int base, int exponent){
    
    int base1 = 1;
    
    for(int i=1; i<=exponent; i++)
    {
        base1 = base1 * base;
    }
    
    printf("Answer: %d", base1);
}

int main() {
    
    int base, exponent;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    power(base, exponent);

    return 0;
}
