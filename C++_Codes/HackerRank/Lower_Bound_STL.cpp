#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> list;

    int z;
    for(int i=0; i<n;i++){
        cin >> z;
        list.push_back(z);
    }

    int query;
    cin >> query;

    int q;
    bool is_found;
    for(int i=0; i<query;i++){
        cin >> q;
        int index =0;
        for(const auto& val : list){
            if(q == val){
                is_found = true;
                break;
            }
            else{
                is_found = false;
                index++;
            }
        }

        if(is_found){
            cout << "Yes " << index+1 << endl;
        }
        else{
            vector<int> list_copy = list;
            int index2 = 0;
            // cout << "Did something bruh" << endl;
            while(true){
                auto minIt = min_element(list_copy.begin(),list_copy.end());
                if((*minIt > q)){
                    auto findIt = find(list.begin(),list.end(),*minIt);
                    index2 = distance(list.begin(),findIt);

                    cout << "No " << index2+1<< endl;
                    break;
                }
                else{
                    list_copy.erase(minIt);
                }
            }
        }
    }

    return 0;
}
