#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_number_generate(){
    static int no_of_calls=0;
    int rande;
    srand(time(NULL));
    rande=rand();
    return ++no_of_calls;

}
int main(){
    printf("The value is %d",random_number_generate());
    printf("The value is %d",random_number_generate());
    return 0;
}