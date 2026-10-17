//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d",&num);
        sum += num;

    }

    printf("%lld",sum);
}

