#include<iostream>
using namespace std;


int sum(int n)
{   
    if(n==0 || n==1){
        return n;
    }


    return n+sum(n-1);

}
int main()
{

    int n =0;

    cin>>n;

    cout<<sum(n); //should print 6

    return 0;
}