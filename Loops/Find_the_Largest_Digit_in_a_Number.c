//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int max = 0;
    long long num;
    scanf("%lld",&num);

    while(num > 0){
        int last_digit = num % 10;
        if(last_digit > max){
            max = last_digit;
        }
        num /= 10;
    }

    printf("%d",max);
}

