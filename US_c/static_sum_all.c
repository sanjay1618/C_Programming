#include<stdio.h>

int get_sum(int x,int y){
    static int total =0;
    total=total+x+y;
    printf("The sum so far is %d",total);

}
int main(){
    get_sum(10,10);
    get_sum(20,20);
    return 0;
}