#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ,q;
    cin >> n >> q;
    // Variable arrays
    vector<int> numbers;  // A vector of integers
    vector<vector<int>> main; // A vector of vectors

    for(int i=0;i<n;i++){
        int No_elements = 0;
        cin >> No_elements;
        int x;
        for(int j=0;j<No_elements;j++){
            cin >> x;
            numbers.push_back(x);
        }
        main.push_back(numbers);
        numbers.clear();
    }
    int a,b;
    for(int k=0;k<q;k++){
        cin >> a >> b;
        cout << main[a][b] << endl;
    }
    return 0;
}