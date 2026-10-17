//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    char *line[100];
    while (fgets(line,sizeof(line),stdin) != NULL){
        printf("%s",line);
    }
}

