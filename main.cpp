#include "lib.h"

using namespace std;

int main() {
    string book_name, book_author;
    int book_pages;

	Book p;
	cout << "Dannie book: " << endl;
	p.print();
	cout << "\nVvedite novie dannie book:"<<endl;
	cout << "Nazvanie book: ";
	cin >> book_name;
	p.SetName(book_name);
	cout << "Author book: ";
	cin >> book_author;
	p.SetAuthor(book_author);
	cout << "Kolichestvo pages: ";
	a:
	cin >> book_pages;
	if (book_pages<0)
    {
    cout << "Chislo nekkorektno, vvedite korrektnoe chislo"<< endl<<endl;
    goto a;
    }
	p.SetPages(book_pages);
	cout << "\nNovie dannie book: " << endl;
	cout << "Nazvanie book: " << p.GetName() << "\nAuthor book: " << p.GetAuthor() << "\nKolichestvo pages: " << p.GetPages() << endl;
	Book p2("Gore ot uma","Vakhrushev ninja",148);
	cout << "\nDannie vtorogo book: " << endl;
	p2.print();
	cout << "\nDannie tretiei (copy) book: " << endl;
	Book p3 = p2;
	p3.print();

    cout << endl << endl;

    p.operator++();
    cout << "Operator++" << endl;
    p.print();
    cout << endl;

    p.operator--();
    cout << "Operator--" << endl;
    p.print();
    p3.SetName("Idiot");
    p3.SetAuthor("Dostoevskii");
    p3.SetPages(99999);
    cout << endl;

    cout << "Operator=" << endl;
    p3.print();
    cout << endl;
    p3 = p;
    p3.print();
    cout << endl;

    cout << "Nachalniy object: " << endl;
    p.print();
    cout << endl;
    cout << "Copy object: " << endl;
    p3.print();
    cout << endl;

    cout << "Operator==" << endl;
    bool obj = p == p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator!=" << endl;
    obj = p != p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator> (pages) " << endl;
    obj = p > p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator< (pages) " << endl;
    obj = p < p3;
    cout << "bool is " << obj << endl;
    cout << endl;

    cout << "Operator<< (Vvedenniy object) " << endl;
    cout << p << endl << endl;


	return 0;
}
