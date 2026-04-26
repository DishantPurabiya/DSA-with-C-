#include <iostream>
using namespace std;
int main()
{
    // 1. Print Pattern 
    // 1234
    // 1234
    // 1234
    // 1234
    int n;
    cout << "Enter the number of rows and columns: ";
    cin >> n;
    // for (int i = 1; i <= n; i ++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 2. Print Pattern
    // ****
    // ****
    // ****
    // ****
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 3. Print Pattern
    // ABCD
    // ABCD
    // ABCD
    // ABCD
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}