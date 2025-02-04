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
    int n=0,q=0;
    cin >> n >> q;
    cin.ignore();

    vector<string> tags;
    unordered_map<string,string> tag_values;
    string input;
    string item;
    vector<string> temp;
    char delimiter = ' ';
    bool is_ending_tag = false;

    for(int i=0;i<n;i++){

        getline(cin,input);
        stringstream ss(input);
        temp.clear();

        if(input[1] == '/'){
            is_ending_tag = true;
        }
        else{
            is_ending_tag = false;
        }

        if(!is_ending_tag){
            while(getline(ss,item,delimiter)){
                temp.push_back(item);
            }

            string tag_name = temp[0].substr(1,temp[0].size()-1);
            // cout << tag_name;

            string attribute = temp[1];
            // cout << attribute;

            string value = temp[3].substr(1,temp[3].size()-3);
            // cout << value;

            tags.push_back(tag_name);

            //Access_Path:
            vector<string> access_path;
            access_path.clear();
            
            int number_of_tags = tags.size();

            for (int k=0;k < number_of_tags +1;k++){
                
                if(k != 0){
                    if(!(tags[k-1][0] == '/')){
                        access_path.push_back(tags[k-1]);
                    }
                }
            }

            // jo band ho chuka he wo na ai access path me
            for(auto it = access_path.begin(); it != access_path.end();){
                bool found = false;
                for (const string& a : tags) {
                    if(("/" + *it) == a){
                        found = true;
                        break;
                    }
                }
                if (!found){
                    ++it;
                }
            }

            if(tags.back()[1] == '/'){
                tag_values[tag_name+"~"+attribute] = value;
            }
            else{
                if((access_path.size() != 0) and (access_path.size() != 1)){
                    tag_values[join(access_path,'.')+'~'+attribute] = value;
                }
                else{
                    tag_values[tag_name+"~"+attribute] = value;
                }
            }

        }

        else{
            tags.push_back(input.substr(1,5));
        }
    }

    // printing values of tags:
    // for (const string& tag : tags) {
    //     cout << tag << endl;
    // }

    // for printing keys+value of tags_value
    // for (const auto& kv : tag_values) {
    //     cout << "Key: " << kv.first << " - Value: " << kv.second << endl;
    // }

    // QUERY:
    for (int query = 0; query < q; query++) {
        string input_;
        getline(cin, input_);
        if (tag_values.find(input_) != tag_values.end()) {
            cout << tag_values[input_] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}