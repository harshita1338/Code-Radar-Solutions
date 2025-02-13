// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    bool isgreaterthanzero=x!>0;
    if (isgreaterthanzero){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}