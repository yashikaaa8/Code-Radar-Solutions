#include <stdio.h>
 #include <stdint.h>
 
 int main() {
     uint32_t n;
         scanf("%u", &n);
 
             int count = 0;
                 if (n == 0) {
                         count = 32;
                             } else {
                                     while ((n & 0x80000000) == 0) {
                                                 n <<= 1;
                                                             count++;
                                                                     }
                                                                         }
 
                                                                             printf("%d\n", count);
                                                                                 return 0;
                                                                                 }
 