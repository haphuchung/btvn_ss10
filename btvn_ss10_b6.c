#include <stdio.h>

int main() {
    int array[] = {4, 3, 2, 1, 7, 9, 0, 6};
    int n = sizeof(array) / sizeof(array[0]);
    int input;


    printf("Nhap phan tu can tim: ");
    scanf("%d", &input);

    int found = 0;  
    printf("Phan tu %d duoc tim thay tai cac vi tri: ", input);
    for (int i = 0; i < n; i++) {
        if (array[i] == input) {
            printf("%d ", i);  
            found = 1;  
        }
    }

    if (!found) {
        printf("\nPhan tu %d khong ton tai trong mang.\n", input);
    } else {
        printf("\n");
    }

    return 0;
}
