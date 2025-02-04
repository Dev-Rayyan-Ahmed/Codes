#include <iostream>
using namespace std;

class Box{
    public:
    int l,b,h;

    //Constructors

    Box(){
        l =0;
        b=0;
        h=0;
    }

    Box(int lenght,int breadth , int height){
        l = lenght;
        b = breadth;
        h = height;
    }

    Box (const Box& B){
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;

    }

    //Getters
    int getlength(){
        return this->l;
    }

    int getbreadth(){
        return this->b;
    }

    int getheight(){
        return this->h;
    }

    long long CalculateVolume(){
        return (long long)l*b*h;
    }

    friend ostream &operator << ( ostream &output, Box B);

    bool operator < (const Box& B) const {
        if (l < B.l) {
            return true;
        } else if (l == B.l && b < B.b) {
            return true;
        } else if (l == B.l && b == B.b && h < B.h) {
            return true;
        }
        return false;
    }

};

ostream &operator << ( ostream &output, Box B){
    output << B.l << " " << B.b << " " << B.h;
    return output;
}

int main(){

    Box B1(2,2,2);
    cout << B1.CalculateVolume() << endl;

    Box B2(3,2,2);
    cout << B2.CalculateVolume() << endl;

    cout << B1;

    cout << (B1<B2);

    return 0;
}

