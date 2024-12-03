#include <stdio.h>

int main() {
    int array[] = {4, 3, 2, 1, 2, 1, 9};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < n; i++) {
        int j = i;

        while (j > 0 && array[j] < array[j - 1]) {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
