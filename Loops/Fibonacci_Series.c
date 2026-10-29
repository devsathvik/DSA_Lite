#include <stdio.h>

//===== Declare Imports here if required =====
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    for(int i = 0; i < n ; i++ ){
        printf("%d",fib(i));
        if(i < n - 1){
            printf(" ");
        }
    }

    //===== Write Your Logic Here =====


}