//===== Write Your Logic Here =====
# include <stdio.h>
# include <ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if(isalpha(ch)){
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special");
    }
}

