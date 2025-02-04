#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception class here */
class BadLengthException : public exception {
private:
    int length;
public:
    BadLengthException(int n) : length(n) {}
    
    const char* what() const noexcept override {
        stringstream ss;
        ss << "Too short: " << length;
        string message = ss.str();
        return message.c_str(); // Return the message as a C-string
    }
};

bool checkUsername(string username) {
    bool isValid = true;
    int n = username.length();
    if (n < 5) {
        throw BadLengthException(n);  // Throw the exception
    }
    for (int i = 0; i < n - 1; i++) {
        if (username[i] == 'w' && username[i + 1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}

int main() {
    int T; cin >> T;
    while (T--) {
        string username;
        cin >> username;
        try {
            bool isValid = checkUsername(username);
            if (isValid) {
                cout << "Valid" << '\n';
            } else {
                cout << "Invalid" << '\n';
            }
        } catch (BadLengthException& e) {  // Catch the exception by reference
            cout << e.what() << '\n';  // Display the error message
        }
    }
    return 0;
}
