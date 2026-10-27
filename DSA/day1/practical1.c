#include <stdio.h>
int main ()
{
    int A[3][4];
    int i,j;
    int rows = 3;
    int columns = 4;
    int element_size = sizeof(A[0][0]);
    int *base_address = &A[0][0];

    printf("==========ARRAY STORAGE AND ADDRESS CALCULATION======\n\n");
    printf("size of int : %zu bytes\n", sizeof(int));
    printf("element size : %d bytes\n", element_size);
    printf("number of rows : %d\n", rows);
    printf("number of columns : %d\n", columns);
    printf("\nBase address = %p\n", (void *)base_address);
    printf("\n---Actual Adress in C (Row-Major)---\n");

    for (i = 0; i <rows; i++)
    {
    for (j = 0; j < columns; j++)
    {
    printf("address of A[%d][%d] = %p\n", i, j, (void *)&A[i][j]);
    }
    }
    // Elements selected for verification
    i = 1;
    j = 2;
    
    unsigned long row_major = (unsigned long)base_address + ((i * columns) + j)*element_size;

    /* Theoretical Column-Major Address */

    unsigned long column_major = (unsigned long) base_address+ ((j * rows) + i) * element_size;
    printf("\n===== ADDRESS VERIFICATION =====\n");
    printf("Element: A[%d] [%d]\n", i, j);
    printf("Actual Address: %p\n",(void *)&A[i][j]);
    printf("Row-Major Address: %p\n",(void *) row_major);
    printf("Column-Major Address: %p\n",(void*) column_major);

    if ((unsigned long) &A [i][j] == row_major)
    {
    printf("\nRow-Major Address Verified Successfully.\n");
    }
    else
    {
    printf("\nAddress Verification Failed.\n");
    }
    return 0;
    }
