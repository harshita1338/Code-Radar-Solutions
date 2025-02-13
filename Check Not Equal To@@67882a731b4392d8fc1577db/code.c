// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    bool isnotequal=x!=y;
    if(isnotequal){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}