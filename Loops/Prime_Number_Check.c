#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    bool isPrime = true;


    //===== Write Your Logic Here =====
    if(n == 1){
        isPrime = false;
    }
    else{
        for(int i = 2; i <= sqrt(n) ; i++ ){
            if(n % i == 0){
                isPrime = false;
            }
        }
    }

    if(isPrime){
        printf("Yes");
    }
    else{
        printf("No");
    }

}