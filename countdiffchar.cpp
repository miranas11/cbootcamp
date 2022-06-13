#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="daf82@&5AS78(DS";
    int special=0;
    int cha=0;
    int num=0;

    for(char c : a){
        if(c>=48 && c<=57)
            num++;
        else if((c>=32 && c<=64)  || (c>=91 && c<=96) || (c>=123 && c<=127))
            special++;
        else if(c>=65 && c<=122)
            cha++;
    };

    cout<<"Number of characters are:"<<cha<<endl;
    cout<<"Number of special characters are:"<<special<<endl;
    cout<<"Number of numerical characters are:"<<num<<endl;
}