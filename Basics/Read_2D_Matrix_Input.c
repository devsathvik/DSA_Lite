//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int num[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&num[i][j]);
            printf("%d",num[i][j]);
            if(j < b - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
}

