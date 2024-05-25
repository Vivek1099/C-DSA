
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

    //Inserting an element at specific location.
    if(n>=50)
    {
        printf("Array Overflow");
    }
    else
    {
        printf("Enter the psoition and number you want to insert: \n");
        scanf("%d %d" , &pos , &num);

        if (pos<=0 || pos>n+1)
        {
            printf("Invalid Position");
        }
        else
        {
            for(int i=n-1 ; i>=pos-1 ; i--)
            {
                arr[i+1]=arr[i];
            }
            arr[pos-1]=num;
            n++;
    
            //Traversing
            printf("Array elements are: \n");
            for(int i=0 ; i<n ; i++)
            printf("%d" , arr[i]);
        }
    }

    //Inserting an element at beginning.
    for(int i=n-1 ; i>=0 ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    n++;
    return 0;
}