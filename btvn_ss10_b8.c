#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    int array[n][m];

    printf("Nhap gia tri cho mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (array[i][j] > array[k][j]) {
                    int temp = array[i][j];
                    array[i][j] = array[k][j];
                    array[k][j] = temp;
                }
            }
        }
    }

    printf("\nMa tran sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
