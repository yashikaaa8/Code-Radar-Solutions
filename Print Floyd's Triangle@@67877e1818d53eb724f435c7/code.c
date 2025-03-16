#include<stdio.h>
int main(){
    int n, i, j, num = 1;
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= 1; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}