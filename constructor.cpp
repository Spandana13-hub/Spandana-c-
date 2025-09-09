#include<iostream>
#include<string>
using namespace std;
class Book {
    private:
    string title;
    string author;
    int publicationYear;

public:
    Book(){
        title = "Untitled";
        author = "Unknown";
        publicationYear = 0;
    cout << "Default constructor called for 'untitled' book."<<endl;
}
    Book(string t, string a, int y){
        title = t;
        author = a;
        publicationYear = y;
        cout<<"Parameterized constructor called for book: '"<<title<<"',"<<endl;
    }

    void displayInfo(){
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Year:"<<publicationYear<<endl;
        cout<<"------------------------"<<endl;
    }
};

int main(){
    Book book1;
    cout<<"Book 1 Info:"<<endl;
    book1.displayInfo();
    Book book2("The Hitchhikar's Guide to the Galaxy", "Douglas Adams",1979);
    cout<<"Book 2 Info:"<<endl;
    book2.displayInfo();
    Book book3("The Lord of the Kings","J.R.R. Tolien",1954);
    cout<<"Book 3 Info:"<<endl;
    book3.displayInfo();
    return 0;

}
