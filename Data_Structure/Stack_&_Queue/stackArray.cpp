#include <iostream>
using namespace std;

class Stack{
    int n, top;
    int *s;

    public:
        Stack() {
            n = 4;
            top = -1;
            s = new int[n];
        }

        Stack(int n) {
            this->n = n;
            top = -1;
            s = new int[n];
        }

        int isEmpty() {
            if(top == -1) {
                // cout << "Stack is empty" << endl;
                return 1;
            }
            else {
                return 0;
            }
        }

        int isFull() {
            if(top == (n-1)) {
                // cout << "Stack is full" << endl;
                return 1;
            }
            else {
                return 0;
            }
        }

        void push(int x) {
            if(isFull()) {
                cout << "Stack is full" << endl;
            }
            else {
                top++;
                s[top] = x;
            }
        }

        int pop() {
            if(isEmpty()) {
                cout << "Stack is empty" << endl;
                return INT_MAX;
            }
            else {
                int y = s[top];
                top--;
                return y;
            }
        }
};

int main() {
    Stack s1;
    Stack s2(3);

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    while(!s1.isEmpty()) {
        cout << s1.pop() << endl;
    }

    return 0;
}