#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    vector<int> v;
    int n,x;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int a=1;

    for( int &num :v){
        if(a<n){
        cout << num << " ";
        a++;
        }
        else{
        cout << num;
        a++;
        }
    }

    return 0;
}
