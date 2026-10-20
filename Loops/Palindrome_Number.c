#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int reversed_n = 0;
    int original_n = n;
    int remainder;

    //===== Write Your Logic Here =====
    while(n > 0){
       int last_digit = n % 10;
       reversed_n = reversed_n * 10 + last_digit;
       n /= 10; 
    }
    if(original_n == reversed_n){
        printf("Yes");
    }
    else{
        printf("No");
    }

}