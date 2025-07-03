#include <iostream>
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
    int sum =0;
    for(int i =0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum is: "<<sum;
    return 0;
}