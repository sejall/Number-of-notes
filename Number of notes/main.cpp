#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int n,notes=0;
        cin>>n;
        notes=notes+n/100;
        n=n%100;
        notes=notes+n/50;
        n=n%50;
        notes=notes+n/10;
        n=n%10;
        notes=notes+n/5;
        n=n%5;
        notes=notes+n/2;
        n=n%2;
        notes=notes+n/1;
        n=n%1;
        cout<<notes<<endl;




    }
    return 0;
}
