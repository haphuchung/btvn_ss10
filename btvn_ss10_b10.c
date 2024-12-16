#include <stdio.h>

int main() {
    int matrix[10][10]; 
    int rows, cols;

    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    printf("Nhap gia tri cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran ban dau:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int n = rows < cols ? rows : cols; 
    int diagonal[n];

    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][cols - i - 1];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] < diagonal[j]) {
                int temp = diagonal[i];
                diagonal[i] = diagonal[j];
                diagonal[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        matrix[i][cols - i - 1] = diagonal[i];
    }

    printf("\nMa tran sau khi sap xep duong cheo phu:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
