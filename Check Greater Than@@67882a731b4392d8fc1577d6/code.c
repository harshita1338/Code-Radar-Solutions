// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    bool isgreater=x>y;
    if(isgreater){
    printf("True");
    }else{
        printf("False");
    }
    return 0;
}