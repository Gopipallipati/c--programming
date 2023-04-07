#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[50];
    int year;
};

int num_books = 0;
struct Book books[MAX_BOOKS];

void add_book() {
    if (num_books >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter details of the book:\n");
    printf("Title: ");
    scanf("%s", books[num_books].title);
    printf("Author: ");
    scanf("%s", books[num_books].author);
    printf("Year of Publication: ");
    scanf("%d", &books[num_books].year);

    num_books++;
    printf("Book added successfully.\n");
}

void display_books() {
    if (num_books == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("List of Books:\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d. Title: %s, Author: %s, Year: %d\n", i+1, books[i].title, books[i].author, books[i].year);
    }
}

void list_books_by_author() {
    char author[50];
    int count = 0;

    printf("Enter the name of the author: ");
    scanf("%s", author);

    printf("Books by author %s:\n", author);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("%d. %s\n", count+1, books[i].title);
            count++;
        }
    }

    if (count == 0) {
        printf("No books found by author %s.\n", author);
    }
}

void count_books() {
    printf("Total number of books in the library: %d\n", num_books);
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. List Books by Author\n");
        printf("4. Count Books\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                count_books();
                break;
            case 5:
                printf("Exiting Library System.\n");
                return 0;
            default:
                printf("Invalid Choice. Please try again.\n");
        }
    }

    return 0;
}

