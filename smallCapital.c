#include <stdio.h>
int main(){
    printf("Enter any character \n");
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("\nSmall Number\n");
    }
    else if(ch>='A'&&ch<='B'){
        printf("\n Capital word\n");
    }
}