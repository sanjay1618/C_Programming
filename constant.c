#include<stdio.h>
#include<stdlib.h>
int main(){
	const int x=10;
	int hell=18;
	const int * y=&x;
	printf("%d",*y);
	int *const ptr=&hell;
	






	return 0;
}