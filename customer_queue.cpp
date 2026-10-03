#include <iostream>
using namespace std;

int main() {
    int queue[5];
    int front = 0;
    int rear = 0;

   // cout << "\nProcessing Orders:\n";

    for (int i = 0;i < 5;i++)
    {
        cin >> queue[rear];
        rear++;
    }

    //Process orders
    cout << "\nProcessing order: ";

    while(front < rear)
    {
        cout << "Processing order: " << queue[front] << "\n";
        front++;
    }
    return 0;
}