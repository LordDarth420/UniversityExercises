#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "book.h"
void printAfterCommand(char *);
int main()
{
    Book *books;
    char command[60];
    int booksCount = 0;
    books = (Book*)calloc(booksCount + 1, sizeof(Book));
    printf("Welcome to the Library!\nWhat do you want to do?\n");
    scanf("%s", command);
    while(strcmp(command, "end") != 0)
    {
        if(strcmp(command, "add") == 0)
        {
            createAndAddBooks(books, &booksCount);
            printAfterCommand(command);


        }
        else if(strcmp(command, "after2005") == 0)
        {
            printBooksAfter2005(books, booksCount);
            printAfterCommand(command);

        }
        else if(strcmp(command, "searchAuthor") == 0)
        {
            searchBooksByAuthor(books, booksCount);
            printAfterCommand(command);
        }
        else
        {
            printf("Wrong command!\n");
            printAfterCommand(command);
        }
    }
}
void printAfterCommand(char *command)
{
    printf("What do you want to do?\n");
    scanf("%s", command);
}

