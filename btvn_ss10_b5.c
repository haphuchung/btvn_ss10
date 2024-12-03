#include <stdio.h>

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    int input;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &input);

    int left = 0, right = n - 1;
    while (left <= right) {
        if (array[left] == input) {
            printf("Phan tu %d duoc tim thay tai chi so %d.\n", input, left);
            return 0;
        }
        if (array[right] == input) {
            printf("Phan tu %d duoc tim thay tai chi so %d.\n", input, right);
            return 0;
        }
        left++;
        right--;
    }

    printf("Phan tu %d khong ton tai trong mang.\n", input);
    return 0;
}
