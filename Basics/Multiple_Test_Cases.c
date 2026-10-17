//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int numbers[t];
    for(int i = 0; i < t; i++){
        scanf("%d",&numbers[i]);
    }

    for(int i = 0; i < t; i++){
        printf("%d\n",numbers[i]);
    }
}

