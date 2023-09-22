#include<iostream>
using namespace std;

class Hello{
	string name;
	
	public:
		
	Hello();
	Hello(string);
		
	void display();
	
	~Hello(){
	cout<<"Destructor is called: " <<name<<endl;}
};

Hello::Hello(){
	name=" ";}

Hello::Hello(string n){
	name= n;}

void Hello::display(){
 cout<<"constructor is called and initialized the variable to: "<<name<<endl;}

int main()
{
  Hello H1, H2("My Name");
  
 Hello H3=H2;
  
  H1.display();
  H2.display();
  H3.display();
  H2.display();
  }
