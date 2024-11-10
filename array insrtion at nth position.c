#include <stdio.h>

int main() {
    int a[100], size, i, value, pos;

    printf("Input the size of array: ");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the position where the value to be inserted: ");
    scanf("%d", &pos);

    for (i = size; i > pos; i--) {
        a[i] = arr[i - 1];
    }

    a[pos] = value;
    size++;

    printf("After inserting the element the new list is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
