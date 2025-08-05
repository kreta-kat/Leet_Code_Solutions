#include <iostream>
#include <vector>
#include <random>

using namespace std;

int rearrangeSubArr(vector<int> &arr, int s, int e)
{
    random_device rd;              // non-deterministic seed
    mt19937 gen(rd());             // Mersenne Twister RNG
    uniform_int_distribution<> dist(s, e); // inclusive range

    int randomNum = dist(gen);          // pick random number in range
    cout << randomNum << std::endl;
    
    int p1 = s+1;
    int p2 = e;
    
    while(p1 <= p2)
    {
        if(arr[p1] <= arr[s])
        {
            p1++;
        }
        else if(arr[p2] > arr[s])
        {
            p2--;
        }
        else
        {
            //swap
            swap(arr[p1], arr[p2]);
        }
    }
    //fix arr[s] positions
    swap(arr[s],arr[p2]);
    return p2;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if(s >= e)
    {return;}
    
    //fix one element
    int p = rearrangeSubArr(arr,s,e);
    
    //sort first half
    quickSort(arr,s,p-1);
    //sort second half
    quickSort(arr,p+1,e);
}

int main() {
    int n;
    cout << "Enter Size of Array"<<endl;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    quickSort(arr,0,n-1);
    
    cout << "Sorting Array using QuickSort "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}