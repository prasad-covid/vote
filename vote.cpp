#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Please Enter yor age based on aadar: ";
	cin>>age;
	if( age>0){
		if(age>=18){
			cout<<"YOUR ELIGIBLE TO VOTE ENTER THE ROOM :)"<<endl;
		}
		else{
			cout<<"SORRY your not eligible to vote "<<endl;
		}
	}
	else{
		cout<<"Please Go to your home and utilize your vote when you become 18"<<endl;
	}
	
}
