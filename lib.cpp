#include "lib.h"

	Book::Book() {
		name = "Book";
		author = "Author";
		pages = 2;
	}
    Book::Book(string book_name, string book_author, int book_pages){
		SetName (book_name);
		SetAuthor (book_author);
		SetPages (book_pages);
	}
	Book::Book(const Book &a){
    this->name = a.name;
    this->author = a.author;
    this->pages = a.pages;
	}


	void Book::SetName(string book_name) {
    name = book_name;
    }

	void Book::SetAuthor(string book_author) {
    author = book_author;
    }

	void Book::SetPages(int book_pages) {
    if(book_pages > 0)
    pages = book_pages;
    }
    void Book::print() const {
    cout<< "Name: "<< GetName() << endl;
    cout<< "Author: "<< GetAuthor() << endl;
    cout << "Pages: " << GetPages() << endl;
    }

	string Book::GetName() const  { return name; }
	string Book::GetAuthor() const { return author; }
	int Book::GetPages() const { return pages; }

	Book & Book::operator=(const Book &book) {
		if (&book == this)
			return *this;
		this->name = book.name, this->author = book.author, this->pages = book.pages;
		return *this;
	}

	bool Book::operator==(const Book &book) const {
		return ((this->name == book.name) && (this->author == book.author) && (this->pages == book.pages));
	}

	bool Book::operator<(const Book &book) const {
		return ((this->name < book.name) && (this->author < book.author) && (this->pages < book.pages));
	}

	bool Book::operator>(const Book &book) const {
		return ((this->name > book.name) && (this->author > book.author) && (this->pages > book.pages));
	}

	bool Book::operator<=(const Book &book) const {
		return ((this->name <= book.name) && (this->author <= book.author) && (this->pages <= book.pages));
	}

	bool Book::operator>=(const Book &book) const {
		return ((this->name >= book.name) && (this->author >= book.author) && (this->pages >= book.pages));
	}

	bool Book::operator!=(const Book &book) const {
		return ((this->name != book.name) && (this->author != book.author) && (this->pages != book.pages));
	}
	void Book::operator++(){
    this->pages ++;
    }
    void Book::operator--(){
    this->pages -- ;
    }
    ostream& operator << (ostream &out, Book const &book){
    out << "pages: " << book.pages << " name: " << book.name << " author: " << book.author;
    out;
    }
    istream& operator >>(istream &in, Book &book){
    in >> book.name;
    in >> book.author;
    in >> book.pages;
    return in;
    }


