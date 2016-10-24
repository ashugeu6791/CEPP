#include"queue.h"

int main(){
	que *front=NULL,*rear=NULL;
	insert(&front,&rear,10);
	insert(&front,&rear,11);
	insert(&front,&rear,12);
	insert(&front,&rear,13);
	insert(&front,&rear,14);
	display(front);
	printf("Deleted item is: %d\n",delete(&front,&rear));
	display(front);
	return 0;
}
