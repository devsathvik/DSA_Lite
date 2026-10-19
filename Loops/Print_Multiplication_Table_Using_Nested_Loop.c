//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int n;
    int m;
    scanf("%d %d",&m,&n);
    for(int i = 1; i <= n;i++){
        printf("%d x %d = %d\n",m,i,m*i);
    }
}

