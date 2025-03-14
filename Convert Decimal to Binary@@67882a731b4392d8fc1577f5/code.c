#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    int binary[32];
    int i=0;
    while (n>0){
        binary[i]=n&1;
        n=n>>1;
        i++;
    }
    for (int j =i-1;j>=0;j--){

        printf("%d",binary[j]);
    }
    return 0;
}