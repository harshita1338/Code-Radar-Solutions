// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int x,i;
    scanf("%d",&x);
    if(x<=1){
        printf("Not Prime");
    }
    else{
        for(i=2;i<=sqrt(x);i++){
            if(x%i==0){
                printf("Prime");
            }
        }
        else{
            print("Not Prime");
        }
    }
    return 0;
}