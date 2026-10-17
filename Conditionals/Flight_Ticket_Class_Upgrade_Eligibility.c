//===== Write Your Logic Here =====
# include <stdio.h>
# include <string.h>

int main(){
    char tier[7];
    int fare,seat;
    scanf("%s %d %d",&tier,&fare,&seat);
    if(seat > 0){
        if((strcmp(tier,"gold") == 0) || (fare >= 10000)){
            printf("Upgrade");
        }
        else{
            printf("No Upgrade");
        }
    }
    else{
        printf("No Upgrade");
    }
}

