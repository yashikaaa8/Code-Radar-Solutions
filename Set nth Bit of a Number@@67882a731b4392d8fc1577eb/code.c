#include<stdio.h>
int main(){

int number,n;
scanf("%d %d",&number,&n);
int result=number|(1<<n);
printf("%d\n",result);
return 0;

}
