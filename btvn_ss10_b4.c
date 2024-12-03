#include <stdio.h>

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
