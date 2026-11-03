//===== Write Your Logic Here =====
# include <stdio.h>

int check(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int result = check(n);

    if(result){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

