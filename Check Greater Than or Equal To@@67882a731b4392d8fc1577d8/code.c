// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    bool isgreaterequal=x>=y;
    if(isgreaterequal){
        printf("True");
    }
    else{
        printf("False");
    }
}