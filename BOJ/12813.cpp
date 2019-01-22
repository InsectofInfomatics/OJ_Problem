#include <iostream>
#include <string>
using namespace std;
string a,b;
int main()
{
    cin>>a>>b;
    for(int x=0; x<a.length(); x++)
    {
        if(a[x]=='1'&&b[x]=='1') cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
    
    for(int x=0; x<a.length(); x++)
    {
        if(a[x]=='1'||b[x]=='1') cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
    
    for(int x=0; x<a.length(); x++)
    {
        if((a[x]=='1'&&b[x]=='0')||(a[x]=='0'&&b[x]=='1')) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;

    for(int x=0; x<a.length(); x++)
    {
        if(a[x]=='1') cout<<"0";
        else cout<<"1";
    }
    cout<<endl;
    
    for(int x=0; x<b.length(); x++)
    {
        if(b[x]=='1') cout<<"0";
        else cout<<"1";
    }
}