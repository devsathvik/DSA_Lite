//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    printf("\n");

    if(n % 5 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

