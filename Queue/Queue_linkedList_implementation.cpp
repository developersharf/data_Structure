#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};


class Queue
{
private:
    Node *front;
    Node *rear;

public:
    // Constructor to initialize the queue
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue operation to add an element to the end of the queue
    void enqueue(int value)
    {
        Node *newNode = new Node(value);

        if (rear == nullptr)
        { // Queue is empty
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << value << endl;
    }

    // Dequeue operation to remove an element from the front of the queue
    void dequeue()
    {
        if (front == nullptr)
        { // Queue is empty
            cout << "Queue is empty, nothing to dequeue." << endl;
            return;
        }

        Node *temp = front; // Store front node temporarily
        front = front->next;

        if (front == nullptr)
        { // Queue became empty after dequeue
            rear = nullptr;
        }

        cout << "Dequeued: " << temp->data << endl;
        delete temp; // Free the memory of the removed node
    }

    // Peek operation to get the front element without removing it
    int peek()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return front == nullptr;
    }

    // Destructor to free memory when the queue is destroyed
    ~Queue()
    {
        while (front != nullptr)
        {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeuing is: " << q.peek() << endl;

    q.dequeue();
    q.dequeue(); // Queue is now empty

    return 0;
}
