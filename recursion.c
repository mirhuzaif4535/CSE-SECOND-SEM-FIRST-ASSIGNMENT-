#include<stdio.h>

//Factorial
long int fact(long int n){
    if( n== 0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    printf("%ld",fact(5));
    return 0;
}

