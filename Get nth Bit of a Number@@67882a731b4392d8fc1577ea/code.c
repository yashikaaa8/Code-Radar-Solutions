#include <stdio.h>
int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    if (n < 0 || n >= 32) {
        printf("Invalid bit position\n");
        return 1;
    }
    int mask = ~(1 << n);
    int result = number & mask;
    printf("%d\n", result);
    return 0;
}
