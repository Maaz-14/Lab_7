#include <stdio.h>

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;    
    int num_to_find; // Target element

	printf("Enter Number to find: ");
	scanf("%d",&num_to_find);
    for (i = 0; i < 9; i++) {
        if (arr[i] == num_to_find) {
            printf("Element Found at Position: %d", i + 1);
            break;
        }
    }

    if (i == 9) {
        printf("Element not found");
    }

    return 0;
}