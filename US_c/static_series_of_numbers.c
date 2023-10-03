#include<stdio.h>
int series_sum(int x,int y){
    static int sum=0;
    sum=sum+x+y;
    return sum;
};
int main(){
    //series_sum(10,21);
    //printf("Trying to access the value of static variable%d",sum);
    int x=10;
    printf("The value of sum after first iteration is %d \n",series_sum(20,39));
    printf("%d \n",x++);
    printf("%d \n",x);
    return 0;
};