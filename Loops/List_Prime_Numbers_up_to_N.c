#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    bool is_prime[n + 1];
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    //===== Write Your Logic Here =====
    int found = 0;
    for(int i = 2; i <= n ; i++ ){
        int prime = 1;
        for(int j = 2; j * j <= i ; j++ ){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }

        if(prime){
            printf("%d\n",i);
            found = 1;
        }
    }

    if(!found){
        printf("NULL");
    }

}