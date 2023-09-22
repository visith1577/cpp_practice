#include<iostream>
using namespace std;

class Engine{
	private: 
     int cylinders; // Number of cylinders 
     double litres; // Capacity in litres
	 
	 public: 
    // Constructor 
    explicit Engine(int c = 4, double l = 1.3);
	
	void displayEngine() const;
};

Engine::Engine(int c, double l) : cylinders(c), litres(l) 
{ 
 cout<<"Constructor Engine finished initializing the variables "<<endl;
 cout<<"Cylinders: "<<cylinders<<endl;
 cout<<"Liters: "<<litres<<endl;
} 

void Engine::displayEngine() const
{
	cout<<"Engine Number of cylinders: "<<cylinders<<endl;
	cout<<"Engine Capacity in liters: "<<litres<<endl;
}

class Car 
{ 
private: 
      int modelNumber;    // Model number 
      Engine motor;         // Car's engine
	  
	  public: 
     // Constructor 
     Car(int m, int c, double l);
}; 

Car::Car(int m, int c, double l):modelNumber(m),motor(c,l)
{
	cout<<"Constructor Car finished initializing the variables"<<endl;
	cout<<"Model No: "<<modelNumber<<endl;
}


int main(){
	
	Car c(2,3,2.3);
		
}
