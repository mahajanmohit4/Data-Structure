#include<iostream>

#include<stdlib.h>

using namespace std;

void insert_element(int input);

void pop_element();

int q[4];
int rear=0;
int front_end=0;

int main()
{
    insert_element(10);
    insert_element(20);
    insert_element(30);

    pop_element();
    pop_element();

    return 0;
}

void insert_element(int input)
{
    q[rear]=input;
    rear++;

}

void pop_element()
{
    cout<<q[front_end]<<endl;
    front_end++;
}
