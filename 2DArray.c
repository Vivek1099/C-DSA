#include<stdio.h>
/*
*/

 int main()
 {
    //Declaration of 2D array.
    int arr[2][3],i,j;
   //  int arr[2][3]={1,2,3,4,5,6};
   //  int arr[2][3]={{1,2,3},{4,5,6}};
   //  int arr[][3]={1,2,3,4,5,6};

   //Insertion
   for(i=0 ; i<2 ; i++)
   {
      for(j=0 ; j<3 ; j++)
      {
         scanf("%d" , &arr[i][j]);
      }
   }

   //Row Major a[i][j] = base_index + ( ( i * n ) + j) * size
   //Column Major a[i][j] = base_index + [ ( ( i - 1 ) * n ) + ( j - 1 ) ] * size

   //Displaying
   for(i=0 ; i<2 ; i++)
   {
      for(j=0 ; j<3 ; j++)
      {
         printff("%d" , arr[i][j]);
      }
   }
    return 0;
 }