#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
    for(int j=0;j<=(i+1);j++){
        printf("* \n");
    }
    printf("\n");
}
return 0;
}