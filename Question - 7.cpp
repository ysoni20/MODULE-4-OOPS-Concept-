
#include<iostream>
using namespace std;
class calc{
public:
	 calc(int n1, int n2)
	{
		//int n1,n2;
		char op;
		
	
	cout<<"choose your operator(+,-,*,/) : ";
	cin>>op;
	
	if(op=='+'){
		cout<<"addition is = "<<n1+n2<<endl;
	}
	else if(op=='-'){
		cout<<"substraction is = "<<n1-n2<<endl;
	}
	else if(op=='*'){
		cout<<"multiplication is = "<<n1*n2<<endl;
	}
	else if(op=='/'){
		cout<<"divisiom is = "<<n1/n2<<endl;
	}
	else{
		cout<<"you choose wrong operator";
	}		
	}
};
int main()
{
	int n1,n2; 
	cout<<"enter two numbers :";
	cin>>n1>>n2;
	calc c1(n1,n2);
	
	
	
	return 0;
}
