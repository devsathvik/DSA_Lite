//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num < 0){
        printf("Negative");
        printf("\n");
        if(num % 2 == 0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
    }
    else if(num > 0){
        printf("Positive");
        printf("\n");
        if(num % 2 == 0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
    }else{
        printf("Zero");
        printf("\nEven");
    }
}

