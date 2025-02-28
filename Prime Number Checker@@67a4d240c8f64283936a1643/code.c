#include <stdio.h>
int isPrime(int a){
    int c=0;
for(int i=2; i<=a; i++){
    if(a%i==0){
        c++;
    }
}
if (c==1){
    return 1;
}
else{
    return 0;
}
}

