// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("enter a string");
scanf("%99s",&str);
printf("reversed string: %s\n",strsep(str));
return 0;
}
