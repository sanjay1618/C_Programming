#include<stdio.h>
int v_count=0;
int c_count=0;
int main(){
	char str[]="aeiousanjay";
	int *count_vowels(char * x){
		
		while(*x!='\0'){
		if (*x=='a' || *x=='e' || *x=='i'||*x=='o'||*x=='u'){
			++v_count;
		}
		else{
			++c_count;

		};
		++x;
	};
	return &c_count;

	};
	printf("%d",*count_vowels(str));




	return 0;
}