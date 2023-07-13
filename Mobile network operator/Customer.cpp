#include <iostream>
#include<string>
using namespace std;

class Customer{   //DO NOT change the class name
protected:
	string name;
	int units;
	string email;
public:
	void setName(string n){
		name = n;
	}
	string getName(){
		return name;
	}
	void setEmail(string e){
		email = e;
	}
	string getEmail(){
		return email;
	}
	void setUnits(int unit){
		units = unit;
	}
	int getUnits(){
		return units;
	}
	public:
		int calculateTariff();
};

class NormalCustomer  : public Customer
{
	//Add required code
	public:
	int calculateTariff(){
		return 0;
	}
};
class BrandCustomer : public Customer
{
    //Add required code 
	public:
	int calculateTariff(){
		return 100 + units*2;
	}
};
class ExecutiveCustomer : public Customer
{
    //Add required code 
	public:
	int calculateTariff(){
		return units*5;
	}
};

int main()
{ 
    //DO NOT change the 'main' signature
    string name;
   string email;
   int units;
   int type;
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the emailId:"<<endl;
    cin>>email;
    cout<<"Enter the units:"<<endl;
    cin>>units;
    cout<<"Enter customer type:"<<endl;
    cin>>type;
    if(type==1){
        NormalCustomer obj;
        obj.setUnits(units);
		obj.setEmail(email);
		obj.setName(name);
        //fill code here
		obj.setUnits(units);
		cout << "Calculated Tariff (In US dollars): " << obj.calculateTariff();
    }
    //Fill code here
	else if (type==2){
		BrandCustomer objB;
		objB.setUnits(units);
		objB.setEmail(email);
		objB.setName(name);
		cout << "Calculated Tariff (In US dollars): " << objB.calculateTariff();
	}
	else if (type==3){
		ExecutiveCustomer objE;
		objE.setUnits(units);
		objE.setEmail(email);
		objE.setName(name);
		cout << "Calculated Tariff (In US dollars): " << objE.calculateTariff();
	}
    return 0;

}
