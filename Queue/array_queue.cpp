#include <bits/stdc++.h>
using namespace std;

int arr[100];
int front = 0, rear = 0, MS = 5;

void enQ(int item){
    if((front == rear + 1 ) || (front == 1 && rear == MS)) return;

    if(rear == MS)
        rear = 1;
    
    else    
        rear++;
    
    arr[rear] = item;
    if(front == 0)
        front++; 
}
void deQ(){

    if(front == 0 && rear == 0) return;

    else if(front == rear){
        front = 0; rear = 0;
    }
    else if (front == MS) {
        front = 1;
    }

    else front++;
}
void Print(){

    if(front == 0 && rear == 0){
        cout << "MTQ" << endl;
    }
    else if(front == rear){
        cout << arr[front];
    }
    else if(front < rear){
        for(int i = front; i <=rear; i++){
            cout << arr[i] <<" ";
        }
    }

    else if(front > rear){
        for(int i = 1; i <=rear; i++){
            cout << arr[i] <<" ";
        }

        for(int i = front; i <=MS; i++){
            cout << arr[i] <<" ";
        }
    }
}

int main(){

    Print();
    enQ(1);
    enQ(2);
    enQ(3);
    enQ(4);
    enQ(5);
    Print();
    deQ();
    deQ();
    
    Print();

    enQ(6);
    enQ(7);
    cout << endl;
    Print();
    




    return 0;
}