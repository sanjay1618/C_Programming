#include<stdio.h>
#include<stdlib.h>
int main(){
	int size_of;
	scanf("%d",&size_of);
	int * p=(int *)malloc(size_of*sizeof(int));
	int * x=p;

	for(int i=0;i<size_of;i++){
		scanf("%d",p);
		++p;
	}
	
	for(int i=0;i<size_of;i++){
		printf("%d\n",x[i]);
	}


	return 0;
}