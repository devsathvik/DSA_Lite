//===== Write Your Logic Here =====
# include <stdio.h>

long long memo[100];

long long fib(long long n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(memo[n] != 0 ){
        return memo[n];
    }

    memo[n] = fib(n - 2) + fib(n - 1);

    return memo[n];
}

int main(){
    long long n;
    scanf("%lld",&n);

    long long result = fib(n);

    printf("%lld",result);
}

