#include <stdio.h>

struct book 
{
    char book_name[50];
    char author_name[50];
    int ISBN_No;
    int price;
};

int main() 
{
	int i;
    struct book books[5];

    for (i = 0; i < 5; i++) 
	{
        printf("Enter book details (%d/5):\n", i + 1);

        printf("Enter name of the book: ");
        getchar();
        gets(books[i].book_name);

        printf("Enter name of the author: ");
        gets(books[i].author_name);

        printf("Enter the ISBN number: ");
        scanf("%d", &books[i].ISBN_No);

        printf("Enter price of the book: ");
        scanf("%d", &books[i].price);

        getchar();
        printf("\n");
    }

    printf("Book Details:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Book Name: %s\n", books[i].book_name);
        printf("Author Name: %s\n", books[i].author_name);
        printf("ISBN: %d\n", books[i].ISBN_No);
        printf("Price: %d\n", books[i].price);
        printf("\n");
    }

    return 0;
}

