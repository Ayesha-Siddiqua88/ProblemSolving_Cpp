#include<iostream>

using namespace std;

int main(){
	int h,m;
	float deg;
	
//	taking hour and minutes as input
	cin>>h>>m;
	
	deg=m*0.5;
	
	cout<<deg<<endl;
	
//	if the minutes are 0
	if(m==00){
		deg=h*30-m*0.5;
		cout<<deg<<endl;
	}
}
