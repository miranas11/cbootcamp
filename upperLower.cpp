#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="Hello My Name Is Anas";
    int upper=0;
    int lower=0;
    for(char c : a){
        if(c>=97 && c<=122)
            lower++;
        else if(c>=65 && c<=90)
            upper++;

    }
    cout<<"Number of Upper Characters are:"<<upper<<endl;
    cout<<"Number of lower Characters are:"<<lower<<endl;
    
}