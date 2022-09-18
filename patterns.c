#include <stdio.h>

int main() {
    
    /* Pattern 1
    A 
    B B 
    C C C 
    D D D D 
    */
  
    for(int i=0; i<4; i++)
    {
        for(int j=i; j>=0; j--)
        {
            printf("%c ", 65+i);
        }
        printf("\n");
    }

    return 0;
}
