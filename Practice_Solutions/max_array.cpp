#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout<< "Enter N";
    cin >> n;
    int* arr = new int[5];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int max =INT_MIN;
    for(int i =0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Max is: "<<max;
    delete[] arr;
    return 0;
}