#include <stdio.h>

void readMatrixElements(int arr[][10],int rows,int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter the element for row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printElementsOfMatrix(int arr[][10],int rows, int columns)
{
    printf("The entered matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
int main() {
    int size1, size2;
    printf("Enter the number of rows (maximum): ");
    scanf("%d", &size1);
    printf("Enter the number of columns (maximum): ");
    scanf("%d", &size2);
    int arr[size1][size2];
    readMatrixElements(arr,size1,size2);
    printElementsOfMatrix(arr,size1,size2);
    return 0; 
}
