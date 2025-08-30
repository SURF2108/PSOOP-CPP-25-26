#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
Aim:
To check whether the given number is an Armstrong Number, i.e., sum of digits 
raised to the number of digits is same as the orginal number. 
eg: x = 153
if Armstrong, then 1^3 + 5^3 + 3^3 = 153
*/

int main(){
	int x;
	cout<<"Enter number to check: ";
	cin>>x;
	//cout<<endl;
	int temp = x;
	int am=0;
	int ndigit = 0;
	int d = x;
	
	ndigit = to_string(temp).size();
	
	while (d > 0){
		temp=d%10;
		d /= 10;
		am+=pow(temp,ndigit);
}
	cout<<"Digits: "<<ndigit<<endl;
	
	if(x==am){
		cout<<"Yes, it is an Armstrong Number!"<<endl;
	}
	else{
		cout<<"Sorry, it's not an Aramstrong Number..."<<endl;
	}
	

}