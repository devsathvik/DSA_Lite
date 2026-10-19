#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//===== Declare Imports here if required =====
#include <ctype.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char password[101];
    scanf("%s", password);

    //===== Declare Local Variables / Functions here if required =====


    int length = strlen(password);
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool isComplex = false;



    //===== Write Your Logic Here =====
    for(int i = 0; i < length; i++ ){
        if(isupper(password[i])){
            hasUpper = true;
        }
        else if(islower(password[i])){
            hasLower = true;
        }
        else if(isdigit(password[i])){
            hasDigit = true;
        }
    }

    if(length >= 5 && hasDigit && hasLower && hasUpper){
        isComplex = true;
    }

    if(isComplex){
        printf("Correct");
    }
    else{
        printf("Too weak");
    }

}