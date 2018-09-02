#  include <iostream>
using namespace std;
int main()
{
	float score;
	cout<<"Please enter score :";
	cin>>score;
	if(score>=80&&score<=100){
		cout<<"A"<<endl;
	}
	else if(score>=75&&score<80){
		cout<<"B+"<<endl;
	}
	else if(score>=65&&score<75){
		cout<<"B"<<endl;
	}
	else if(score>=55&&score<65){
		cout<<"C+"<<endl;
	}
	else if(score>=45&&score<55){
		cout<<"C"<<endl;
	}
	else if(score>=35&&score<45){
		cout<<"D"<<endl;
	}
	else if(score>=25&&score<35){
		cout<<"E"<<endl;	
	}
	else if(score>=15&&score<25){
		cout<<"F"<<endl;
	}

	return 0;	
}
