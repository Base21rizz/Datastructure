#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int queue_[N];
int n;
int front = -1;
int rear = -1;
void enque_()
{
    if(front == -1 && rear == -1)
    {
        int x;
        cout << "Number you want to enque: ";
        cin >> x;
        queue_[rear] = x;
        front++;
        rear++;
    }
    else 
    {
        int x;
        cout << "Number you want to enque: ";
        cin >> x;
        queue_[rear] = x;
        rear++;
    }
}
void deque_()
{
    if(front == -1 && rear == -1)
    {
        cout << "Underflow!" << endl;
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
}
void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << queue_[i] << ' ';
    }
    cout << endl;
}
int main()
{
    cout << "Size of queue: ";
    cin >> n;
    cout << "How many functions you want to do: ";
    int times;
    cin >> times;
    while(times--)
    {
        cout << "Type the following function you want to use : \n1.enque\n2.dequeue\n3.peek\n4.display";
        string s;
        cin >> s;
        if(s == "enque") enque_();
        else if(s == "dequeue") deque_();
        else if (s == "display") display();
        else if (s == "peek") cout << queue_[front] << endl;
    }
    return 0;
}