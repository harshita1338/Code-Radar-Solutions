// Your code here...
#include<stdio.h>
int main(){
    float x,y;
    char ch;
    scanf("%f %f %c",&x,&y,&ch);
    if(ch=='+'){
        printf("%.0f",x+y);
    }
    else if(ch=="-"){
        printf("%.0f",x-y);
    }
    else if(ch=="*"){
        printf("%.0f",x*y);
    }
    else if(ch=="/"){
        printf("%.0f",x/y);
    }
    else{
        printf("Error");
    }
    return 0;
}