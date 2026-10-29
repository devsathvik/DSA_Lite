//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int count;

    do{
        long long temp = n;
        long long sum = 0;
        count = 0;

        while(temp > 0){
            count++;
            temp /= 10;
        }

        if(count <= 1){
            printf("%lld",n);
            break;
        }

        temp = n;
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        n = sum;

    }while(count > 1);

    return 0;
}

