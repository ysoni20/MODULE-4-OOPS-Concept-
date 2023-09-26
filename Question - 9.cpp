//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		public:
			void get_data()
			{
				cout<<"Enter Name :"<<endl;
				cin>>name;
				cout<<"Enter Age :"<<endl;
				cin>>age;
			}
};
class student
{
	protected:
		float persentage;
		public:
			void read_data()
			{
				cout<<"Enter Persentage :"<<endl;
				cin>>persentage;
			}
};
class teacher:public person,public student
{
	protected:
		float salary;
		public:
			void write_data()
			{
				cout<<"Enter salary :"<<endl;
				cin>>salary;
			}
			void display()
			{
				cout<<"name is :"<<name<<endl;
				cout<<"age is : "<<age<<endl;
				cout<<"Persentage is :"<<persentage<<endl;
				cout<<"salary is :"<<salary<<endl;
			}
};
int main()
{
	teacher obj;
	obj.get_data();
	obj.read_data();
	obj.write_data();
	obj.display();
	return 0;
}

