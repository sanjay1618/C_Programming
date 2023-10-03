#include<stdio.h>
int main(){
    int x=10;
    int *xp=&x;
    printf("the address is %p\n",(void *)&
    xp);
    // to print the address of a variable use the % p as format specifier and then convert it to the void pointer...
    printf("the next address is %p\n",(void *)&xp+1);
    printf("%d ",sizeof(x));
        return 0;
}