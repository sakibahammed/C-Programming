#include <stdio.h>
int main(){
    int n ,m;
    printf("Enter the value of n , m\t");
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("Great number is = %d\t",n);
    }
    else{
        printf("Great number is = %d\t",m);
    }
}