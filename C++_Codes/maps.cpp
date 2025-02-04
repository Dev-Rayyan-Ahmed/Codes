#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string,int> MarksMap;
    MarksMap["Rayyan"] = 100;
    MarksMap["Irtiza"] = 92;
    MarksMap["Umair"] = 56;

    MarksMap.insert({{"Rohan",120},{"Rafay",230}});

    //Making a Iterator
    map<string , int> :: iterator iter;

    //map sorts them in alphabetic order 

    for(iter = MarksMap.begin(); iter!= MarksMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << MarksMap.size() << endl;
    cout << MarksMap.max_size()<< endl;
    cout << MarksMap.empty()<< endl;

    
    return 0;
}