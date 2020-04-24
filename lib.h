#ifndef LIB_H
#define LIB_H

#include <iostream>
#include <windows.h>
#include <string>
#include <stdbool.h>



using namespace std;

	class Book {
public:
string name, author;
int pages;
Book();
Book(const string book_name,const string book_author, int book_pages);
Book(const Book &a);

void print() const ;
void SetName(const string book_name);
void SetAuthor(const string book_author);
void SetPages(int book_pages);
string GetName() const;
string GetAuthor() const;
int GetPages() const;

Book & operator=(const Book &book);
void operator++();
void operator--();
bool operator==(const Book &book) const;
bool operator<(const Book &book) const;
bool operator>(const Book &book) const;
bool operator<=(const Book &book) const;
bool operator>=(const Book &book) const;
bool operator!=(const Book &book) const;

friend ostream & operator<<(ostream &out, Book const &book);

friend istream & operator>>(istream &in, Book &book);

};

#endif
