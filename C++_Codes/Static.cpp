#include <iostream>
using namespace std;

class User{

    int id;
    static int next_id;

    public:
    //Methods Declaration
    static int next_user_id();
    int get_id();
    User();

};
int User::next_id = 0;

int User::next_user_id()
{
    next_id++;
    return next_id;
}

// Function/Methods of Class
User::User(){
    id = next_user_id();
}

int User::get_id(){
    return id;
}

int fib( int n); //Declaration 

int main(){

    User u;
    cout << "User u Id:" << u.get_id() << endl;
    User v;
    cout << "User v Id:" << v.get_id() << endl;

}

int fib(int n){
    static int count = 0;

    if(n == -1){
        return count;
    }

    count++

    if(n <= 1){
        return n
    }
    else{
        return fib(n-2) + fib(n-1)
    }
}