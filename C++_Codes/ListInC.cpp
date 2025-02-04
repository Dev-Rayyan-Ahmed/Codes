#include <iostream>
using namespace std;

//Global Struct of Node
struct node{
    int val;
    node *next;
};

node* Create_node(node*Current,int value){
    node*n = new node;
    n->val = value;
    n->next = NULL;

    Current->next = n;

    return n;
}

void output_list(node*Current){ //starts outputing from the given node [Inclusive]
    cout << "[ " ;
    while(Current != NULL){
        cout << Current->val << " ";
        Current = Current->next;
    }
    cout << "]" << endl;
}

void delete_after(node*current){
    node*temp = current->next;
    current->next = current->next->next;
    delete temp;
}

int main(){
    //Defining the head
    node *head = new node;
    head->val = 1;
    head->next = NULL;

    //Defining current
    node *current = head;

    for(int i=2; i<10;i++){
        current = Create_node(current,i);
    }
    current = head; //Reset Current Pointer to the Start, i.e: Head
    output_list(head);
    delete_after(head);
    output_list(head);
    return 0;
}