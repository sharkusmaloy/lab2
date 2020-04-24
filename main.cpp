#include "lib.h"

using namespace std;


int main() {

Book k1;

k1.SetName("PishemNaC++");
k1.SetAuthor("Romanchuk");
k1.SetPages(1337);
k1.print();
cout << "Name first: " << k1.GetName() << endl;
cout << "Author first: "<< k1.GetAuthor() << endl;
cout << "Pages: " << k1.GetPages() << endl;

Book k;
k.SetName("SpisivaemLabi");
k.SetAuthor("Vahrushev");
k.SetPages(1488);
k.print();

cout << " ----------getters" << endl;
cout << "Name: " << k.GetName() << endl;
cout << "Author: " << k.GetAuthor() << endl;
cout <<"Pages: " << k.GetPages() << endl;

k.print();
cout << " ----------copyConstruct" << endl;

k.print();

cout << "=" << endl;
cout << "Input\n" << "Name\nAuthor\nPages\n" << endl;
cin >>k;
k.print();

cout << "k " << endl;
k1.print();
cout << "k1 " <<endl;

k.operator++();
cout << "++" << endl;
k.print();

k.operator--();
cout << "--" << endl;
k.print();

k.SetName("name2");
k.SetAuthor("author2");
k.SetPages(1);

cout << "==" << endl;
bool t = k == k1;
cout << "bool is " << t << endl;

cout << "!=" << endl;
t = k != k1;
cout << "bool is " << t << endl;

cout << "> (pages) " << endl;
t = k > k1;
cout << "bool is " << t << endl;

cout << "< (pages) " << endl;
t = k < k1;
cout << "bool is " << t << endl;

cout << "Vivod copy (k1) " << endl;
cout << k << endl;

cout << "Vvod (k1) " << endl;
cout << "bool is " <<  k1 << endl;

k.print();
return 0;
}
