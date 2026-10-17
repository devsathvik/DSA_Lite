//===== Write Your Logic Here =====
# include <stdio.h>

int main(){
    int current_water_level,low,high,capacity;
    scanf("%d %d %d %d",&current_water_level,&low,&high,&capacity);
    if(current_water_level > capacity){
        printf("Overflow");
    }
    else if(current_water_level > high){
        printf("High");
    }
    else if(current_water_level >= low){
        printf("Normal");
    }
    else{
        printf("Low");
    }
}

