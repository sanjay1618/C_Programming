#include<stdio.h>
int hello(int * x){
    *(x+2)=27;
    return 0;

}
int main(){
    int a[4]={1,2,3,4};
    hello(a);
    printf("the third elememt is %d",a[2]);
    return 0;
}