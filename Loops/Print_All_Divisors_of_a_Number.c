//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int first = 1;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            if(!first){
                printf(" ");
            }
            printf("%d",i);
            first = 0;
        }
    }
}

