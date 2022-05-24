/*
Here i a going to define how to find the maximum and minimum element element 
of an array in two methods .
*/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The element in an array are:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    //Here is the first method.
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    //here is the second method.
    // for (int i = 0; i < n; i++)
    // {

    //     maxi = max(maxi, arr[i]);
    //     mini = min(mini, arr[i]);
    // }
    cout << "The maximum element in an array are: " << maxi<<endl;
    cout << "The minimum element in an array are: " << mini<<endl;
    
}