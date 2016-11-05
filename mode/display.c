#include"sorting.h"

void display(Book b[],int size){
	int i;
	for(i=0;i<size;i++){
			printf("ISBN: %d Price: %.1f\n",b[i].isbn,b[i].price);
		}
}
