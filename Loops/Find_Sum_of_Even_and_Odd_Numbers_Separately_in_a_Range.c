//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    long long lower,upper;
    scanf("%lld %lld",&lower,&upper);
    long long even_sum = 0, odd_sum = 0;

    for(long long i = lower ; i <= upper ; i++){
        if(i % 2 == 0){
            even_sum += i;
        }
        else{
            odd_sum += i;
        }
    }

    printf("%lld %lld",even_sum,odd_sum);
}

