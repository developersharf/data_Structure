``  /// https://i...content-available-to-author-only...e.com/Ncpbi7


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = 0;
int SIZE = 0;
/// 7 3 1 5
void addFirst(int item)
{
    /// Node nn;
    Node *nn = new Node;
    (*nn).data = item;

    nn->next = head;

    head = nn;
    SIZE++;
}
void addLast(int item)
{
    Node* nn = new Node;
    nn->data = item;
    nn->next = 0;
    SIZE++;
    if(head == NULL) {
        head = nn;
        return;
    }

    Node* ptr = head;
    while(ptr->next != 0)
    {
        ptr = ptr->next;
    }
    ptr->next = nn;
}

void Insert(int pos, int item)
{
    if(pos == 1) {
        addFirst(item);
    }
    else if(pos == SIZE + 1) {
        addLast(item);
    }
    else {
        Node* nn = new Node;
        nn->data = item;
        Node* prev = head;

        for(int i = 1; i <= pos - 2; i++)
            prev = prev->next;

        Node* cur = prev->next;

        prev->next = nn;
        nn->next = cur;
        SIZE++;
    }
}

void Delete(int pos) 

{
    if(head == NULL) return;
    SIZE--;
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* prev = head;
    for(int i = 1; i <= pos - 2; i++)
        prev = prev->next;

    Node* cur = prev->next;
    Node* nn = cur->next;

    prev->next = nn;
    delete cur;
}



void Print()
{
    Node* ptr = head;
    while(ptr){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
/// 13 5 100 10
/// x = &a
/// y = &b

void Swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{


    Insert(1, 10);
    Insert(2, 100);
    Insert(3, 1000);
    Insert(4, 20);
    Insert(2, 25);
    Print();
    // Delete(3);
    
    // 1Print();
    return 0;
}
