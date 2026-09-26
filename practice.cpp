#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int arr[5] = {10,20,30,40,50};
   int sum = 0;

   for (int i = 0;i < 5;i++)
    {
        cout << arr[i] << " " << endl;
        sum += arr[i];
    }
    cout << sum<< endl;

    double average = (double)sum/5;
    cout << "SUM = " << sum << endl;
    cout << "Average = " << average << endl;
       
    
    return 0;
}