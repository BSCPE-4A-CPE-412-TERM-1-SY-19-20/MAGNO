//375718

#include<cstring>
#include<iostream>

using namespace std;
int main (int argc, char * argv[])
{
    int x,z;
    char str[100];
    
    cout<<"Input:";
    cin>>str;
    x=0;
    z=0;
        
    cout<<"Output:";
    while(str[x]!='\0')
    {
        if(str[x]=='b')
          { 
            z++;
          }
            x++;
    }  
       if(z<6)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"Not";
    }
    cout<<endl;
    
}
