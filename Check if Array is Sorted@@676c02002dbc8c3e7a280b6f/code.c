#include <stdio.h>
int main() {
     int a;
     scanf("%d" , &a);
     for(int i= 0 ; i<a-1 ; i++){
         if(ar[i] > ar[i+1]){
             printf("Not Sorted");
             c=1;
             break;
               
         }  
     }
     if(c==0){
         printf("Sorted");
     }
     return 0;
}
     