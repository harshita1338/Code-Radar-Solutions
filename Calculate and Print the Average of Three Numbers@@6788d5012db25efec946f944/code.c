// Your code here...
#include<stdio.h>
int main(){
    int x,y,z;
    float avg;
    scanf("%d and %d and %d",&x,&y,&z);
    avg = float(x+y+z)/3;
    printf("Average: %.2f\n",avg);
    return 0;
}