#include <stdio.h>
int main(){
	char a[]="Sanjay";

	
	
	char * tolower(char * b){
    while((*b)!='\0'){
    	if (*b>=65&& *b<=91){
    		*b=*b+32;
      	}   	
    	++b; 	
    };
    return a;
};

    printf("%s",tolower(a));
    

    char * toupper(char * x){
    	while(*x!='\0'){
    		if (*x>=97 && *x<=123){
    			*x=*x-32;
    		}
    		++x;
    	};
    	return a;
    };
    printf("%s",toupper(a));





	
	return 0;
}