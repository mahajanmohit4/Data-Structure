#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;

};

Node* top = NULL;

bool isempty(){
    return  top->prev == NULL;
}

void push(int data){

    Node* newnode;
    newnode = new Node();

    if(!newnode){
        cout << "Heap Overflow" << endl;
    }

    newnode->prev = top;
    newnode->data = data;  
    newnode->next = NULL;

    top = newnode;
}

void pop(){

    if(isempty()){
        cout << "Stack Underflow";
        exit(1);
    }

    Node* tmp;
    tmp = new Node();

    tmp->next = NULL;
    tmp->data = top->prev->data;
    tmp->prev = top->prev->prev;

    free(top);
    top = tmp;

}

void display(){

    Node* itr;
    itr = top;

    cout << itr->data << " ";
    while(itr->prev != NULL){
        cout << itr->prev->data << " ";
        itr = itr->prev;
    }
    cout << endl;
}

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
display();
    pop();
 //   display();
    pop();
 //   display();
    pop();
    display();
   

    return 0;
}