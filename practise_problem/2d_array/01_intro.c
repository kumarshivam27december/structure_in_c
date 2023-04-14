#include <stdio.h>
void main()
{
    int arr[2][2]={   {10,20},
                      {10,20}
                  };


                  /*
printf("\n%d",arr[0][0]);
printf("\t%d",arr[0][1]);
printf("\t%d",arr[1][0]);
printf("\t%d",arr[1][1]);
*/
// another way to print the file 

int row,col; // initialise row , col

for(row=0;row<2;row++)
{
    for(col=0;col<2;col++)
    {
        printf("%d\t",arr[row][col]);
    }
    printf("\n");
}
}