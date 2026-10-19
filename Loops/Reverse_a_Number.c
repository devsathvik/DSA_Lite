#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int reverse = 0;
    while(n > 0){
        int last_digit = n % 10;
        reverse = reverse*10 + last_digit;
        n /= 10;
    }

    printf("%d",reverse);

    //===== Write Your Logic Here =====


}