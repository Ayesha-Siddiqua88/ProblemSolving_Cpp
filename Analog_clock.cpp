// An analog clock which consists of two hands one for hour and another for minute.
// We have to calculate the shorter angle formed between hour and minute hand at any given time.

#include <iostream>
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
