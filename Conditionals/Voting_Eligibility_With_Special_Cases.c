//===== Write Your Logic Here =====
# include <stdio.h>
# include <string.h>

int main(){
    char citizenship_status[15],criminal_record[10];
    int age;
    scanf("%d %s %s",&age,&citizenship_status,&criminal_record);
    if((age >= 18) && (strcmp(citizenship_status,"citizen") == 0) && (strcmp(criminal_record,"clean") == 0)){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}

