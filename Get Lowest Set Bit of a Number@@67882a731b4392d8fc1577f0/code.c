#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int position=0;
    while((n&1)==0){
        n=n>>1;
        position++;
    }
    printf("%d",position);
    return 0;
}