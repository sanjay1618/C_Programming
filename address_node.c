#include<stdio.h>
#include<stdlib.h>
#define Null 0
struct node{
	int data;
	struct node * next;
};


int main(){
	struct node a={10,Null};
    struct node b={34,Null};
	struct node c={12,Null};
	struct node d={89,Null};
	struct node e={38,Null};
	a.next=&b;
	b.next=&c;
	c.next=&d;
	
	d.next=&e;
	e.next=Null;
	struct node k;
	struct node * s=&a;
	struct node * aa;
	int x;
	int y;
	struct node * yy=&k;
	printf("Enter the x that you would like to add before ");
	printf("enter y" );
	scanf("%d",&x);
	scanf("%d",&y);
	/*
	//finding the address of node whose data member is x.
	while(s->data!=x && s->next!=Null){
		s=s->next;

	};
	if(s->data==x ){
		printf("The address of x is %p",s);
	}
	else{
		printf("No element found");
	};
	*/

	while(s->data!=y && s->next!=Null){
		aa=s;
		s=s->next;

	}
	if(s->data==y){
		aa->next=yy;
		yy->next=s;
		yy->data=x;


	}
	else{
		printf("errror");

	}
    s=&a;
    while(s->next!=Null){
    	printf("%d",s->data);  
    	s=s->next;
    }



	return 0;
}