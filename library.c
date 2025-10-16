#include <stdio.h>
#include <string.h>

typedef enum{
    Available , Borrowed , Reserved
}status;

const char* status_names[] = {"Available", "Borrowed", "Reserved"};


typedef struct{
    char book_name[100];
    char author[50];
    status status;
}Book;



#define MAX_BOOKS 100
Book books[MAX_BOOKS] = {0};
int book_count = 0;

Book book_adder();
void book_displayer(void);
void book_borrow(void);
void book_finder(void);
void book_reserver(void);

int main(){
    char current[3] = {0};
    int response = 0;
    while (response!=6){
        printf("\n-----Welcome to library managment system-----\n");
        printf("1. Add a new book\n"); 
        printf("2. Dispaly Books\n");
        printf("3. Find a  Book\n"); 
        printf("4. Borrow\n");
        printf("5. Reserve a book\n");
        printf("6. End the program\n");
        printf("Enter your response ");//Take response
        scanf("%d",&response);
        switch (response){
            case 1:
                Book new_book = book_adder();
                books[book_count++] = new_book ;
                printf("Added #%d book , %s", book_count , books[book_count-1].book_name);
                printf("\n");
                break;
            case 2:
                book_displayer(); //displays the book
                printf("\n");
                break;
            case 3:
                book_finder(); //finds the book
                printf("\n");
                break; 
            case 4:
                book_borrow(); 
                printf("\n");
                break;
            case 5:
                book_reserver();
                printf("\n");
                break;
        }

    }

    return 0;
}

Book book_adder() {
    Book new_book;
    printf("\n");
    printf("Enter Book Name: ");
    scanf(" %[^\n]", new_book.book_name);
    printf("\n");  // Read full line
    printf("Enter Author Name: ");
    scanf(" %[^\n]", new_book.author);
    printf("\n");
    new_book.status = Available;
    return new_book;
}

void book_finder(void){
    char book_name_finder[100] = "";
    printf("\n");
    printf("Enter book name: ");
    scanf(" %[^\n]",book_name_finder);
    printf("\n");
    for (int i= 0;i<book_count;i++){
        if(strcmp(books[i].book_name, book_name_finder)==0){
            printf("Book Found!\n");
            printf("Staus: %s\n", status_names[books[i].status]);
            break;
        }
    }
}

void book_displayer(void){
    printf("\n");
    if (book_count!= 0){
        for (int i=0;i<book_count;i++){
            printf("#%d. Book: %s -- Author: %s -- Status: %s \n",i+1, books[i].book_name, books[i].author, status_names[books[i].status]);
        }
    }
    else{
        printf("Sorry! There are no books\n");
    }
    
}

void book_borrow(void){
    char book_name_borrow[100] = "";
    printf("Enter book name: ");
    scanf(" %[^\n]", book_name_borrow);
    for (int i = 0; i<book_count;i++){
        if (strcmp(books[i].book_name, book_name_borrow)==0){
            books[i].status = Borrowed;
            printf("Book status sucessfully updated for %s\n", books[i].book_name);
            break;
        }
    }
}

void book_reserver(void){
    char book_name_borrow[100] = "";
    printf("Enter book name: ");
    scanf(" %[^\n]", book_name_borrow);
    for (int i = 0; i<book_count;i++){
        if (strcmp(books[i].book_name, book_name_borrow)==0){
            books[i].status = Reserved;
            printf("Book status sucessfully updated for %s\n", books[i].book_name);
            break;
        }
    }
}

