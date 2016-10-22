#include<stdio.h>
#include<stdlib.h>

struct que{
	int front,rear,size,*q;
};
typedef struct que que;


void createQue(que *que,int size);
void insert(que *que,int value);
void display(que que);
int delete(que *que);
