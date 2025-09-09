#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;

public:
 Complex(int r = 0, int i = 0):real(r),imaginary(i){}

 Complex operator+(const Complex& other) const {
    return Complex(real + other.real,imaginary + other.imaginary);
 }
 void read(){
    cin >> real>>imaginary;
 }
void print()const{
    cout << real <<" ";
    if(imaginary>=0)
      cout<<"plus i"<<imaginary;
    else
       cout<<"minus i"<<imaginary;
}
};

int main(){
    Complex c1,c2,sum;
    c1.read();
    c2.read();
    sum = c1 + c2;
    sum.print();

    return 0;
}