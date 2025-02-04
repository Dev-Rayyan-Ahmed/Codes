#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string x[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin >> a;
    cin >> b;
    for(int i =a;i<=b;i++){
        if(i>=1 and i<=9){
            cout << x[i-1]<<endl;
        }
        else{
            if(i%2 == 0){
                cout <<"Even" << endl;
            }
            else{
                cout << "Odd" << endl;
            }
        }
    }
    

    return 0;
}