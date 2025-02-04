#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input = "apple,banana,grape,orange";
    char delimiter = ',';

    vector<string> result;
    stringstream ss(input);
    string item;

    while (getline(ss, item, delimiter)) {
        result.push_back(item);
    }

    // Output the result

    //const auto& str → Read-only access (no modifications allowed)
//    auto& str → Modifications allowed
//   auto str → Creates a copy (modifications don’t affect original elements)

    for (const auto& str : result) {
        cout << str << endl;
    }

    return 0;
}
