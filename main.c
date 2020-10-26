/*
1) Write and name a function max(), that returns the max value between two arguments.
*/
#include <stdio.h>
int max( int a, int b);

int main() {
    int x,y;
    int resp;

    do{
        printf("ENTER A NUMBER : ");
        scanf("%d",&x);
        printf("ENTER A NUMBER : ");
        scanf("%d",&y);
        printf("%s %d \n", "THE MAX VALUE IS : ", max(x,y));

        printf("DO YOU WANT TO DO A NEW OPERATION  1) -> YES 0) -> NO :");
        scanf("%d", &resp);
        if(resp != 1 && resp != 0){
            printf("%s\n", "INVALID VALUE");
        }

    }while(resp != 0);

    return 0;
}

//max () function.
int max(int a, int b){
    int maxValue;
    if(a>=b){
        maxValue = a;
        return  maxValue;
    } else if (b>=a){
        maxValue = b;
        return maxValue;
    }else{
        return 0;
    }
}
