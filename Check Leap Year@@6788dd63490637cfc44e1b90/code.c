// Your code here...
#include<stdio.h>
int main(){
    double x;
    scanf("%lf",x);
    if((x%4==0 && x%4==100) || x%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}