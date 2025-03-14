#include <stdio.h>
int main() {
    int number, bit_position;
    scanf("%d %d", &number, &bit_position);
    
    int bit_value = (number >>bit_position)&1;
    
    printf("%d\n", bit_value);
    return 0;
}
