#include <iostream>
#define MAX 100
using namespace std;

class ArrayStack {
    public:
    int arr[MAX];
    int top = -1;

    bool isEmpty() {return top == -1;}
    bool isFull() {return top == MAX -1;}

    void push(int x) {
        if (isFull()) {
            cout << "Overflow";return;
        }
        arr[++top]=x;
    }
    int pop(){
        if (isEmpty() ) {
            cout<<"Underflow";return -1;
        }
        return arr[top --];
    }
    int peak(){return arr[top];}
};
int main() {
    ArrayStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top: " << s.peak() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Top now: " << s.peak() << endl;
    return 0;
}
