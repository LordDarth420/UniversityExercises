#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "book.h"

void createAndAddBooks(Book *books, int *booksCount)
{
    int n;
    printf("\nHow many books do you want to add?\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        Book book;
        printf("Author: ");
        scanf(" %[^\n]s", book.author);
        printf("Title: ");
        scanf(" %[^\n]s", book.title);
        printf("Year of Publication: ");
        scanf("%d", &book.yearPublished);
        printf("Price: ");
        scanf("%lf", &book.price);
        books[(*booksCount)++] = book;
        books = (Book*)realloc(books, ((*booksCount) + 1)*sizeof(Book));
        if(bookCompare(books[(*booksCount) - 1], book))
        {
            printf("Book %d added!\n\n", *booksCount);
        }
        else
        {
            printf("Adding book %d failed!\n\n", *booksCount);
        }
    }
}
void printBooksAfter2005(Book *books, int booksCount)
{
    printf("\nBooks, published after 2005:\n");
    bool executedOnce = false;
    printf("\n");
    for(int i = 0; i < booksCount; i++)
    {
        if(books[i].yearPublished > 2005)
        {
            printBook(books[i]);
            if(!executedOnce){executedOnce = true;}
        }
    }
    if(!executedOnce){printf("Sorry! No books after 2005 have been found! :(\n\n");}
}
void searchBooksByAuthor(Book *books, int booksCount)
{
    char author[40];
    printf("\nWhat author do you want to search?\n");
    scanf(" %[^\n]s", author);
    printf("\nBooks, published by %s:\n", author);
    bool executedOnce = false;
    printf("\n");
    for(int i = 0; i < booksCount; i++)
    {
        if(strcmp(books[i].author, author) == 0)
        {
            printBook(books[i]);
            if(!executedOnce){executedOnce = true;}
        }
    }
    if(!executedOnce){printf("Sorry! No books by %s have been found! :(\n\n", author);}
}
bool bookCompare(Book book1, Book book2)
{
    return (strcmp(book1.author, book2.author)) == 0 &&
    (strcmp(book1.title, book2.title) == 0) && (book1.price == book2.price)
    && (book1.yearPublished == book2.yearPublished) ? true : false;
}
void printBook(Book book)
{
    printf("Author: %s\nTitle: %s\nYear of Publication: %d\nPrice: %0.2lf\n\n",
           book.author, book.title, book.yearPublished, book.price);
}

