// Input: n = 15
// Output: false
// Explanation: 15 % 2 = 1, so 15 is odd .

// Input: n = 44
// Output: true
// Explanation: 44 % 2 = 0, so 44 is even.

#include<iostream>
using namespace std;



bool even(int n)
{
    if(n%2==0)
    {
        return true;
    }
  
        return false;
}
int main()
{

    int n;
    cin>>n;


    cout<<bool(even(n));

    return 0;
    
    

}