#include <stdio.h>

int main() {
    int values[5] = {2, 4, 6, 8, 10};
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum = sum + values[i];
    }

    printf("The sum of the array is: %d\n", sum);

    return 0;
}