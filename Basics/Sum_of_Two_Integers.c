#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int t;
    scanf("%d", &t);

    //===== Declare Local Variables / Functions here if required =====


    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        //===== Write Your Logic Here =====
        printf("%d\n", a + b);

    }
    return 0;
}