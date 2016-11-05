#include"sorting.h"

int main(){
	int size;
	Book b[10];
	size = input(b);
	sortBook(b,size);
	display(b,size);
	return 0;
}
