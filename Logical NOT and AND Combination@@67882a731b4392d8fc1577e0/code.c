// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    // bool isgreaterzero=!(x>o && y>0);
    // if (isgreaterzero){
    //     printf(" True");
    // }
    // else{
    //     printf("False");
    // }
    if(!(x>0 && y>0)){
        printf("True");
    }
    else if(x>=0 && y<0){
        printf("False");
    }
    else if(y>=0 && x<0){
        printf("False");
    }
    else{
        printf("False");
    }
    return 0;
}