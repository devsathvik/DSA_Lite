#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//===== Declare Local Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //===== Write Your Logic Here =====
    int t;
    while( a!= 0){
        t = b % a;
        b = a;
        a = t;
    }
    if(t == 0){
        printf("%d",b);
    }

}