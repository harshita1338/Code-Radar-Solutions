// Your code here...
#include<stdio.h>
int main(){
    int x,y,x;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z){
        printf("Equilateral");
    }
    else if(x==y) && (x!=z && y!=z){
        printf("Isosceles");
    }
    else if(x!=y && y!=z){
        printf("Scalene");
    }
    return 0;
}