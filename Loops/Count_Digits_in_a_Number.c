#include <stdio.h>

//===== Declare Imports here if required =====



//===== Declare Global Variables / Functions here if required =====



int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====



    int count = 0;

    //===== Write Your Logic Here =====
    if(n == 0){
        count = 1;
    }
    else{while(n > 0){
        count++;
        n /= 10;
    }
    }

    printf("%d",count);


}