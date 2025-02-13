// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    bool isless=x<y;
    if(isless){
        printf("True");
    }else{
        printf("False");
    }
}