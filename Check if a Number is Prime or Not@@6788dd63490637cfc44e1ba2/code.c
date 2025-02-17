// Your code here...
#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    if(x<1){
        printf("Not Prime");
    }
    else if{
        for(i>2;i<=sqrt(x);i++){
            if(x%i==0){
                print("Prime");
            }
        }
        else{
            print("Not Prime");
        }
    }
    return 0;
}