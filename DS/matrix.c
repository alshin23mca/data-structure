#include <stdio.h>

 void inputMatrix(int mat[][20],int row,int col)  
 {
  printf("Enter elements of the matrix:\n");
   for (int i = 0; i<row; i++) 
   {
    for (int j = 0; j<col; j++) 
    {
     scanf("%d",&mat[i][j]);
    }
   }
 } 

  void printMatrix(int mat[][50], int row, int col) 
  {
   for (int i = 0; i<row; i++)
   {
    for (int j = 0; j<col; j++) 
    {
     printf("%d\t", mat[i][j]);
    }
     printf("\n");
   }
  }
  void addMatrices(int mat1[][20], int mat2[][20],int result[][50], int row, int col)
  {
   for (int i = 0; i<row; i++) 
   {
     for (int j = 0; j<col; j++) 
     {
      result[i][j] = mat1[i][j] + mat2[i][j];
     }
   }
  
  }
  
  void subtractMatrices(int mat1[][20], int mat2[][20],int result[][50], int row, int col)
  {
   for (int i = 0; i<row; i++) 
   {
    for (int j = 0; j<col; j++) 
    {
      result[i][j] = mat1[i][j] - mat2[i][j];
    }
   }
}

  void multiplyMatrices(int mat1[][50], int mat2[][50], int result[][50], int row1, int col1, int col2) 
  {
   for (int i = 0; i<row1; i++) 
   {
    for (int j = 0; j<col2; j++) 
    {
      result[i][j] = 0;
      for (int k = 0; k<col1; k++)
      {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
   }
  }
  
int main() 
{
  int choice;
  int row1, col1, row2, col2;
  int mat1[50][50], mat2[50][50], result[50][50];
  
 printf("Enter the number of rows and columns for the first matrix: ");
 scanf("%d %d", &row1, &col1);
 printf("Enter the number of rows and columns for the second matrix: ");
 scanf("%d %d", &row2,&col2);
  if (row1 != row2 || col1 != col2) 
  {
   printf("Matrix addition and subtraction require matrices of the same dimensions.\n");
   return 1;
  }
 
 inputMatrix(mat1, row1, col1);
 inputMatrix(mat2, row2, col2);
 
 printf("Choose an operation:\n");
 printf("1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);
 switch (choice) 
 {
  case 1:
  addMatrices(mat1, mat2, result, row1, col1);
  printf("Result of matrix addition:\n");
  printMatrix(result, row1, col1);
  break;

  case 2:
  subtractMatrices(mat1, mat2, result, row1, col1);
  printf("Result of matrix subtraction:\n");
  printMatrix(result, row1, col1);
  break;
  case 3:
  
  if (col1 != row2) 
  {
   printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix \n");
   return 1;
  }
  multiplyMatrices(mat1, mat2, result, row1, col1, col2);
  printf("Result of matrix multiplication:\n");
  printMatrix(result, row1, col2);
  break;
  default:
  printf("Invalid choice.\n");
 }
return 0;
}
