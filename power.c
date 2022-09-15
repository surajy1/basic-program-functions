#include <stdio.h>

int power(int base, int exponent){
    
    for(int i=1; i<exponent; i++)
    {
        base = base * base;
    }
    
    printf("Answer: %d", base);
    
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