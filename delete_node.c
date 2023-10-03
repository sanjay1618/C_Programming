#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	printf("Enter the number of nodes you want\n");
	scanf("%d",&num);
	struct node{
		int data;
		struct node * next;
	};
	struct node * s=Null;
	struct node * p;

	for(int i=0;i<num;i++){
		if (s==Null){
			s=(struct node *)malloc(sizeof(struct node));
			scanf("%d",s->data);
		}
	else{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",p->data);
		s->next=p;
		


	}




	}





	return 0;

}
