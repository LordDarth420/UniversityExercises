#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

typedef struct Book
{
    char title[40], author[40];
    int yearPublished;
    double price;
}Book;
void createAndAddBooks(Book*, int*);
void printBooksAfter2005(Book*, int);
void searchBooksByAuthor(Book *, int);
bool bookCompare(Book book1, Book book2);
void printBook(Book);
#endif // BOOK_H_INCLUDED
