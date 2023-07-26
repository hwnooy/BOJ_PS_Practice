#include <stdio.h>

int main(){
    int hour, min;
    scanf("%d %d", &hour, &min);
    if (min>=45) printf("%d %d", hour, min-45);
    else {
        min=min+15;
        if(hour==0) hour=24;
        hour=hour-1;
        printf("%d %d", hour, min);
    }
    
}