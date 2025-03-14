#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    if(n==0){
        printf("0";);
    }
    while((n&1)==0){
        count++;
        n>>=1;
    }
    printf("%d",count);
    return 0;
}