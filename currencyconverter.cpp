#include<iostream>
using namespace std;
int main()
{      
    int rs;
    float Do,Ye,Di;
    cout<<"Enter currency in Indian Rupees"<<endl;
    cin>>rs;
    Do=rs/77.83;
    Ye=rs/0.58;
    Di=rs/253.87;
    
      
       
    
    cout<<rs<<" Indian Rupees are equal to "<<Do<<" Dollars"<<endl;
    cout<<rs<<" Indian Rupees are equal to "<<Ye<<" Japanese yen"<<endl;
    cout<<rs<<" Indian Rupees are equal to "<<Di<<" Dinars"<<endl;

      
}