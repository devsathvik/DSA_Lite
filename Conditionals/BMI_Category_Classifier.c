//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int w;
    float h;
    scanf("%d %f",&w,&h);

    double BMI = (double)(w/(h*h));

    if(BMI >= 30){
        printf("Obese");
    }
    else if(BMI < 18.5){
        printf("Underweight");
    }
    else if((BMI >= 18.5) && (BMI < 25)){
        printf("Normal");
    }
    else{
        printf("Overweight");
    }
}

