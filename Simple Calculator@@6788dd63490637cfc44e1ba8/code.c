// Your code here...
#include<stdio.h>
int main(){
    float x,y;
    char ch;
    scanf("%f %f %c",&x,&y,&ch);
    if(ch=='+'){
        printf("%.0f",x+y);
    }
    else if(ch=='-'){
        printf("%.0f",x-y);
    }
    else if(ch=='*''){
        printf("%.0f",x*y);
    }
    else if(y!=0 && ch=='/'){
        printf("%.0f",x/y);
    }
    else if(y==0 && ch=='/'){
        printf("Error");
    }
    else{
        printf("Error");
    }
    return 0;
}