#include"queue.h"

int main(){
	que que;
	int size=10;
	createQue(&que,size);
	insert(&que,10);
	insert(&que,11);
	insert(&que,12);
	insert(&que,13);
	insert(&que,14);
	display(que);
	printf("Deleted item is: %d\n",delete(&que));
	display(que);
	return 0;
}
