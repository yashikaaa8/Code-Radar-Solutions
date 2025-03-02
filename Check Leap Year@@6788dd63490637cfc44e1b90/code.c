// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(n%4==0 && (n%100!=0 || n%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}