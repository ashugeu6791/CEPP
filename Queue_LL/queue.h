#include<stdio.h>
#include<stdlib.h>

struct que{
	int value;
	struct que *next;
};
typedef struct que que;


void insert(que **front,que **rear,int value);
void display(que *front);
int delete(que **front,que **rear);
