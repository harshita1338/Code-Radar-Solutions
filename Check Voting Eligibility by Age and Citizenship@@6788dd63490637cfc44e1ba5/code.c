// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=18 && x==1){
        printf("Eligible");
    }
    else if(x<=18 && x==0){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}