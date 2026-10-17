//===== Write Your Logic Here =====
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int val;
    for(int i = 0; i < n; i++){
        scanf("%d",&val);
        printf("%d",val);
        if(i < n - 1){
            printf(" ");
        }
    }
}

