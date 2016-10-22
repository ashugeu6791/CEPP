#include"queue.h"

void createQue(que *que,int size){
	que->size=size;
	que->rear=-1;
	que->front=-1;
	que->q=(int *)malloc(sizeof(int)*size);
}

void insert(que *que,int value){
	if(que->rear==que->size-1){
		printf("Queue is Full\n");
	}
	else{
		que->q[++(que->rear)]=value;
		if(que->front==-1)
			que->front=0;
	}
}


void display(que que){
	int i;
	printf("Queue is: ");
	for(i=que.front;i<=que.rear;i++){
		printf("%d ",que.q[i]);
	}
	printf("\n");
}

int delete(que *que){
	int temp;
	if(que->front==-1)
		printf("Queue is Empty");
	else{
		temp=que->q[(que->front)++];
	}
	return temp;
}
