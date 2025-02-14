#include<stdio.h>
int main(){
    char a[100];
    int b;
    char c1[100];
    scanf("%s%d%s",&a,&b,&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}