#include"sorting.h"
void sortBook(Book b[], int size){
	int i,j;
	Book temp;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(b[i].isbn>b[j].isbn){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
