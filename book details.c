#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    char isbn[20];
    char publisher[100];
    int year;
    char genre[50];
    int pages;
};
void display Book(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("ISBN: %s\n", b.isbn);
    printf("Publisher: %s\n", b.publisher);
    printf("Year: %d\n", b.year);
    printf("Genre: %s\n", b.genre);
    printf("Pages: %d\n", b.pages);
}
