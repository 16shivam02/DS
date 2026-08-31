#include <iostream>
using namespace std;

int main()
{
    int book [5];
    int searchID;

    cout << "Enter 5 Book IDs:";
    for (int i=0;i<5;i++)
    {
        cin >> book[i];
    }

    cout << "Enter Book IDs to search:";
    cin >> searchID;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<5-i-1;j++)
        {
            if (book[j]> book[j+1])
            {
                int temp = book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }
    cout<<"ORDER=";
    for (int i=0;i<5;i++)
    {
        cout << book[i] << "";
    }
    return 0;
}