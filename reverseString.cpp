#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="Hello My Name Is Anas";
    int s=0;
    int e=strlen(a)-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    cout<<a;
    
}