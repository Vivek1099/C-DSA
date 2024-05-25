#include <stdio.h>
int main()
{
    int arr[50] , n , num , pos;
    printf("Enter the size of an array:\n ");
    scanf("%d" , &n);

    //Insertion
    printf("Enter the elements: ");
    for(int i=0 ; i<n ; i++)
    scanf("%d" , &arr[i]);

    //Deletion of an element at any specific location.
    printf("Enter the position of the element: ");
    scanf("%d" , &pos);
    if (pos<=0 || pos>n)
    {
        printf("Invalid Position");
    }
    else
    {
        for(int i=pos-1 ; i<=n-1 ; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;

        printf("Updated Array is:\n");
        for(int i=0 ; i<n ; i++)
            printf("arr[%d]=%d\n",i,arr[i]);
    }

    //Deletion of an element at beginning.
    for(int i=0 ; i<n-1 ; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    
    return 0;
}