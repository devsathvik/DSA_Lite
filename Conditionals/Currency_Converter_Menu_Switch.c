//===== Write Your Logic Here =====
# include <stdio.h>
# include <string.h>

int main(){
    char currency[4];
    scanf("%s",currency);
    double amount;
    scanf("%lf",&amount);

    if(strcmp(currency,"USD") == 0){
        printf("%.2f",amount/80);
    }
    else if(strcmp(currency,"EUR") == 0){
        printf("%.2f",amount/90);
    }
    else{
        printf("%.2f",amount/100);
    }
} 

