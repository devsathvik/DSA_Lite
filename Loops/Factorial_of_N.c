#include <stdio.h>

//===== Declare Imports here if required =====


int main() {
    int n;
    scanf("%d", &n);
    //===== Write Your Logic Here =====
    long long product = 1;
    if(n == 0){
        printf("1");
    }
    else{
        for(int i = n; i >= 1; i--){
            product *= i;
        }
        printf("%lld",product);
    } 

}