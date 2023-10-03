#include<stdio.h>
int hello_knowing(){
        static int vari=10;
        vari=vari-1;
        printf("The value of vari is %d",vari);
    }
int main(){
    hello_knowing();
    hello_knowing();
    hello_knowing();
    return 0;
}