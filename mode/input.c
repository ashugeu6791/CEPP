#include"sorting.h"

int input(Book b[])
{
	FILE *fp;
	int size = 0, i;
	fp=freopen("input.txt","r",stdin);
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d%f",&b[i].isbn,&b[i].price);
	}
	fclose(fp);
	return size;
}
