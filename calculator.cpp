#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"What do you want to find?"<<endl;
	cout<<"1-Power?"<<endl;
	cout<<"2-Sin?"<<endl;
	cout<<"3-Cos?"<<endl;
	cout<<"4-Tan?"<<endl;
	cin>>n;
	cout<<"Enter a number?"<<endl;
	int a;
	cin>>a;
	if(n==1){
		int b;
		cin>>b;
		cout<<pow(a,b)<<endl;
		return 0;
	}
	switch (n)
	{
	case 2:
		cout<<sin(a)<<endl;
		break;
	case 3:
		cout<<cos(a)<<endl;
		break;
	case 4:
		cout<<tan(a)<<endl;
	}

	return 0;


}