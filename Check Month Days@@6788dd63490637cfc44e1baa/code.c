#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("28");
    }
    else if(a==4 || a==6 || a==9 || a==11){
        printf("30");
    }
    else if(a>12 || a<1){
        printf("Invalid month");
    }
    else{
        printf("31");
    }
    return 0;
}