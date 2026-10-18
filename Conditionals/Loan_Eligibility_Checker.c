//===== Write Your Logic Here =====
# include <stdio.h>
# include <string.h>

int main(){
    char employment_type[10];
    int monthly_income,credit_score;
    scanf("%d %d %s",&monthly_income,&credit_score,&employment_type);
    if(strcmp(employment_type,"salaried") == 0){
        if(monthly_income >= 30000 && credit_score >= 700){
            printf("Approved 8");
        }
        else{
            printf("Rejected");
        }
    }
    else{
        if(monthly_income >= 30000 && credit_score >= 700){
            printf("Approved 10");
        }
        else{
            printf("Rejected");
        }
    }

}

