#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_of_eratosthenes(int n)
{
    vector<bool> number_array(n+1,true);
    number_array[0] =number_array[1] = false;
    for(int i =2; i*i <= n; i++)
    {
        if(number_array[i])
        {
            //is prime
            for(int j =i*i; j<=n; j=j+i)
            {
                number_array[j] = false;
            }
        }
    }
    
    //ans array consisting primes only
    vector<int> ans;
    for(int i=0; i<=n; i++)
    {
        if(number_array[i])
        {
            ans.push_back(i);
        }
    }
    
    return ans;
}

int main() {
    int n;
    cout <<"Enter number to calculate prime numbers upto N"<<endl;
    cin >> n;
    vector<int> primes = sieve_of_eratosthenes(n);
    cout<< "Primes upto N are: "<<endl;
    for(int prime_no : primes)
    {
        cout << prime_no<<" ";
    }
    cout<<endl;
    return 0;
}