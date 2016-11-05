#include<stdio.h>

struct Book{
	int isbn;
	float price;
};
typedef struct Book Book;

void sortBook(Book [],int);
void display(Book [],int);
int input(Book []);
