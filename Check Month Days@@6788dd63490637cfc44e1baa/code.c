// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x<=6){
        if(x%2==0 && x!=2){
            printf("30");
        }
        else if(x==2){
            printf("28");
            }
        else{
            printf("31");
        }    
    }
    else if(x>=6 && x<=12){
        if(x%2==0){
            printf("31");
        }
        else if(x%2!=0){
            printf("30");
        }
        else{
            printf("31");
        }
    }
    else{
        printf("Invalid month");
    }
    return 0;
}