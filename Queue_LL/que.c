#include"queue.h"


void insert(que **front,que **rear,int value){
	que *temp;
	temp=(que*)malloc(sizeof(que));
	temp->next=NULL;
	temp->value=value;
	//printf("in if insert\n");
	if((*front)==NULL&&(*rear)==NULL){
		(*front)=temp;
		(*rear)=temp;
	}
	else{
		(*rear)->next=temp;
		(*rear)=temp;
	}
}


void display(que *front){
	printf("Queue is: ");
	while(front!=NULL){
		printf("%d ",front->value);
		front=front->next;
	}
	printf("\n");
}

int delete(que **front, que **rear){
	int temp;
	que *t=(*front)->next;
	if((*front)==NULL)
		printf("Queue is Empty\n");
	else{
		if((*rear)==(*front)){
			temp=(*front)->value;
			(*rear)=NULL;
			(*front)=NULL;
		}
		else{
			temp=(*front)->value;
			(*front)->next=NULL;
			(*front)=t;
		}
	}
	return temp;
}
