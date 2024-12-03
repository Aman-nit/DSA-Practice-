#include <iostream>
#include <vector>
using namespace std;

void reverseAnArray(vector<int> &arr)
{
    int s = 0;
    int n = arr.size() - 1;
    while (s < n)
    {
        int temp;
        temp = arr[s];
        arr[s] = arr[n];
        arr[n] = temp;
        s++;
        n--;
    }
}

int main()
{
    vector<int> arr = {1, 8, 7, 2, 5};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    reverseAnArray(arr);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
