
#include <iostream>
using namespace std; 
int main()
{
    int i , n;
    long int FACT=1;
    cout<<"enter n:";
    cin>>n;
    for (i=1 ; i<=n ; i++)
        FACT*=i;
        cout<<"\n factorial is :"<<FACT;
        return 0;
}