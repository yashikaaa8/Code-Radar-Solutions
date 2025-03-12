#include<stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha>='0'&&alpha<='9'){
        printf("Digit");
    }
    else if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'){
        printf("Vowel");
    }
    else if(alpha>='a'&&alpha<='z'||alpha>='B'&&alpha<='Z'){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}