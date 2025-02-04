#include <iostream>
using namespace std;

class Complex{

    private:
    int real,imag;

    public:
    Complex(int r =0, int i =0){
        real = r;
        imag = i;
    }

    void print(){
        cout << real << "+" << imag << "i" << endl;
    }

    Complex operator + (Complex C){
        Complex temp;
        temp.real = real + C.real;
        temp.imag = imag + C.imag;

        return temp;
    }
};

int main(){

    Complex c1(2,2);
    Complex c2(2,2);
    Complex c3;

    c3 = c1+c2;

    c3.print();


    return 0;
}