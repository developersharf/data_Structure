#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* next;
};
Node* head = 0;
int SIZE = 0;

void addFirst(int item){
    Node* nn = new Node;
    nn->data = item;
    nn->next = head;

    head = nn;

    SIZE++;
}
void Print(){
    Node* ptr = head;
    while(ptr){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void addLast(int item){
    Node* nn = new Node;
    nn->data = item;
    nn->next = 0;
    SIZE++;

    if(head == NULL){
        head = nn;
        return;
    }
    Node* ptr = head;
    while(ptr->next){
        ptr = ptr->next;
    }
    ptr->next = nn;
}

void insert(int pos, int item){
    if(pos == 1)
        addFirst(item);
    
    else if(pos == SIZE + 1)
        addLast(item);

    else{
        Node* nn = new Node;
        nn->data = item;
        
        Node* prev = head;

        for(int i = 1; i <= pos - 2; i++){
            prev = prev->next;
        }

        Node* cur = prev->next;
        prev->next = nn;
        nn->next = cur;
        SIZE++;
    }
}

// main function
int main()
{
    // Insert(1, 5);
    // Insert(2, 10);
    // Insert(1, 13);
    // Insert(3, 100);
    // Insert(5, 5);
    // Insert(4, 100);
    // Insert(1, 500);

    addFirst(5);
    addFirst(4);
    addFirst(3);
    addFirst(2);
    addFirst(1);
    
    addLast(6);
    addLast(7);
    addLast(8);
    addLast(9);
    addLast(10);

    insert(1, 3);
    insert(3, 15);
    insert(4, 13);
    insert(5, 17);
    insert(15, 12);

    Print();

    return 0;
}