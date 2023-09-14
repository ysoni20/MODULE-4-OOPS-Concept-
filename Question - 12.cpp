/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include<iostream>
using namespace std;
class calc{
public:
int add(int a , int b){
	return a+b;
}
int sub(int a , int b){
	return a-b;
}
int mul(int a , int b){
	return a*b;
}
int div(int a , int b){
	return a/b;
}
};

int main()
{
	calc c1;
	int n1,n2;
	char op;
	cout<<"enter two numbers :";
	cin>>n1>>n2;
	//cin>>n2;
	cout<<"choose your operator(+,-,*,/) : ";
	cin>>op;
	
	if(op=='+'){
		cout<<"addition is = "<<c1.add(n1,n2)<<endl;
	}
	else if(op=='-'){
		cout<<"substraction is = "<<c1.sub(n1,n2)<<endl;
	}
	else if(op=='*'){
		cout<<"multiplication is = "<<c1.mul(n1,n2)<<endl;
	}
	else if(op=='/'){
		cout<<"divisiom is = "<<c1.div(n1,n2)<<endl;
	}
	else{
		cout<<"you choose wrong operator";
	}
	return 0;
}
