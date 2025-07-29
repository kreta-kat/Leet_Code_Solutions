#include <iostream>
using namespace std;

void incr_order(int n)
{
   if(n==1)
   {
       cout << n<<" ";
       return;
   }
   incr_order(n-1);
   cout<<n << " ";
   return;
}
int main() {
    int n;
    cout << "Enter number to print 1 to n"<<endl;
    cin >> n;
    incr_order(n);
    return 0;
}