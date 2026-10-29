//===== Write Your Logic Here =====
# include <stdio.h>

long long factorial(long long n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);

}

int main(){
    long long n;
    scanf("%lld",&n);

    long long result = factorial(n);
    printf("%lld",result);

}

