#include <stdio.h>
int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d", matrix[1][2]); //this line enables us to retrieve an element from the array
  matrix [1][2] = 32; //the element of an array has been changed
  printf("\n%d\n", matrix[1][2]);
//To print all elements of an array we use the for loop
int i, j;
for (i=0; i<2; i++)
{
    printf("\n\t");
    for (j=0; j<3; j++)
    {
        printf("%d\n", matrix[i][j]);
    }
}
  return 0;
}
