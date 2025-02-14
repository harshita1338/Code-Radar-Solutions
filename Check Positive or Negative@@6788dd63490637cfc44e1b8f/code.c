// Your code here...
#include<stdio.h>
int main(){
    int x,y{
        scanf("%d %d",&x,&y);
        if(x>y){
            printf("Positive\n");
        }
        else if(x<y){
            printf("Negative\n");
        }
        else{
            printf("Zero");
        }
    }
    return 0;
}