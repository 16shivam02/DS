<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int searchID;

    cout << "Enter 5 Book IDs:\n";

    for (int i=0;i<5;i++)
    {
        cin >> book[i];
    }

    cout << "\nEnter Book ID to search:";
    cin >> searchID;

    for (int i=0;i<5;i++)
    {
    if (book[i] == searchID)
        {
         cout << "Book found";
         return 0;
         }
    }

cout << "Book not found";
return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int searchID;

    cout << "Enter 5 Book IDs:\n";

    for (int i=0;i<5;i++)
    {
        cin >> book[i];
    }

    cout << "\nEnter Book ID to search:";
    cin >> searchID;

    for (int i=0;i<5;i++)
    {
    if (book[i] == searchID)
        {
         cout << "Book found";
         return 0;
         }
    }

cout << "Book not found";
return 0;
>>>>>>> e6cf0aa1f8ab991eacb17da5350fc36c82276750
}