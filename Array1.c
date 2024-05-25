//ARRAY

#include <stdio.h>
int main()
{
    int arr[50],n;
    printf("Enter the size of an array:\n ");
    scanf("%d" , n);

    //Insertion
    printf("Enter the elements: ");
    for(int i=0 ; i<n ; i++)
    scanf("%d" , &arr[i]);

    //Traversing
    printf("Array elements are: \n");
    for(int i=0 ; i<n ; i++)
    printf("%d" , arr[i]);

    return 0;
}