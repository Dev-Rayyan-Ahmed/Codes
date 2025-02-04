#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n = 10;
    string a[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    if(n>=1 and n<=9 ){
        cout << a[n-1] << endl;
    }
    else if (n > 9){
        cout << "Greater than 9";
    }
    return 0;
}