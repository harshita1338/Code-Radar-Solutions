// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int x,i,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }else{
            continue;
        }
    }
    if(count==2){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}