#include<stdio.h>
int main(){
    intn,i=1,count=0;
    scanf("%d",&n);
    for(i;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}