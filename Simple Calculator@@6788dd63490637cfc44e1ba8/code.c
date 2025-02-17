// Your code here...
#include<stdio.h>
int main(){
    int x;
    char ch;
    scanf("%d %d %c",&x,&ch);
    if(ch=='+'){
        printf("%d",x+y);
    }
    else if(ch=="-"){
        printf("%d",x-y);
    }
    else if(ch=="*"){
        printf("%d",x*y);
    }
    else if(ch=="/"){
        printf("%d",x/y);
    }
    else{
        printf("Error");
    }
    return 0;
}