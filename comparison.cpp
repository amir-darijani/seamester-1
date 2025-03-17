#include <iostream>
using namespace std;
int main()
{
    int a ,b , c ,max ;
    cout<<"Enter a number please =";
    cin>>a>>b>>c;
    max=a;
    if ( b > max )
       max=b;
    if ( c > max )
       max=c;
    cout<<max;
    return 0;
}