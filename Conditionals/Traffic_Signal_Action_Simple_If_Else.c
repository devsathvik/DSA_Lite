//===== Write Your Logic Here =====
# include <stdio.h>
# include <string.h>

int main(){
    char signal[7];
    fgets(signal,sizeof(signal),stdin);
    if(strcmp(signal,"red") == 0){
        printf("STOP");
    }
    else if(strcmp(signal,"yellow") == 0){
        printf("WAIT");
    }
    else{
        printf("GO");
    }
}

