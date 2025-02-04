#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <string>
using namespace std;

string join(vector<string> vec,char sep){
    string result = "";

    for(const string& tag: vec){
        result += tag+sep;
    }
    result = result.substr(0,result.size()-1);
    return result;
}

int main(){

    vector<string> tags = {"tag1","tag2","tag3"};
    cout << join(tags,'.');

    return 0;
}

// for(int r =0;r<4;r++){
//                 getline(ss, item, delimiter);
//                 temp.push_back(item);
//             }