// Input: n = 3
// Output: 6
// Explanation: 1 + 2 + 3 = 6

// Input: n = 5
// Output: 15 
// Explanation:  1 + 2 + 3 + 4 + 5 = 15


#include<iostream>
using namespace std;




int sum(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + i;
    }


    return sum;
}

int main()
{

    int n;
    cin>>n;


    cout<<"Sum is: "<<sum(n);













    return 0;
}