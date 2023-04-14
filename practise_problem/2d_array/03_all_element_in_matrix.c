#include <stdio.h>
void main()
{
    int arr[2][2]={   {10,20},
                      {10,20}
                  };

    int arr2[2][2]={{100,200},{300,400}};



int row,col; // initialise row , col
int sum;
for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
    {
        
        
     sum = sum + arr[row][col]+arr2[row][col] ;
    }
    
}
printf("%d",sum);
}