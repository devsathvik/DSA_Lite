#include <stdio.h>
#include <math.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int original = n;
    long long sum = 0;
    int count = 0;

    if(n == 0){
        count = 1;
    }

    int temp = n;
    while(temp > 0){
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0){
        int last_digit = temp % 10;
        long long p = 1;
        for(int i = 1; i <= count; i++){
            p *= last_digit;
        }
        sum += p;
        temp /= 10;
    }

    if(sum == original){
        printf("Yes");
    }
    else{
        printf("No");
    }

    //===== Write Your Logic Here =====


}