#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int input, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &input);

    for (int i = 0; i < n; i++) {
        if (array[i] == input) {
            printf("Phan tu %d duoc tim thay tai vi tri %d (chi so %d).\n", input, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", input);
    }

    return 0;
}
