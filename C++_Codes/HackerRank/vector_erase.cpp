#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,value;
    vector<int> v;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >>value;
        v.push_back(value);
    }

    int x,a,b,j;
    cin >> x;
    cin >> a >> b;

    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    cout << v.size() << endl;

    int z = 1;
    for( int &num :v){
        if(z<n){
        cout << num << " ";
        z++;
        }
        else{
        cout << num;
        z++;
        }
    }



    return 0;
}
