#include <stdio.h>

int descSorted(int a[], int n){
    
    int temp;
    
    for(int i=0; i<n; i++)
    { 
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    
    int n;
    
    printf("Enter the number the elements of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d elements:\n", n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    descSorted(a, n);
    
    printf("Elements in descending order: \n");
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
