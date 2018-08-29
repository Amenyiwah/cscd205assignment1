# include <iostream>
using namespace std;
int main()
{
	int num;
	int prime;
	
	cout <<"Please enter number" << endl;
	cin >> num;
	
if(num==2||num==3||num==5||num==7||num==11){
	cout<<"Number is a prime number"<<endl;
}else{
	if(num%2!=0){
		if(num%3!=0){
			if(num%5!=0){
				if(num%7!=0){
					if(num%11!=0){
						cout<<"Number is a prime number";
					} else cout<<"Not prime";
				}else cout<<"Not prime";
			}else cout<<"Not prime";
		}else cout<<"Not prime";
	}else cout<<"Not prime";
}
	return 0;
	
}
