//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    char d;
    int n;
    scanf("%c",&d);
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        int val;
        scanf("%d",&val);
        printf("%d",val);

        if(i < n - 1){
            printf("%c",d);
        }
    }
}

