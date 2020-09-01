#include <iostream>
#include <cstring>
using namespace std;

struct book
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main ()
{
    struct book book1;
    struct book book2;

    strcpy (book1.title, "learn c++");
    strcpy (book1.author, "ABC" );
    strcpy (book1.author, "c++ programming");
    book1.book_id = 23455;

    strcpy (book2.title, "learn java");
    strcpy (book2.author, "BCN");
    strcpy (book2. subject, "java programming");
    book2.book_id = 98475;

    cout << book2.author;
}
