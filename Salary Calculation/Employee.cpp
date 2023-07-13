#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
                //Include necessary methods 
        int getEmployeeId(){
            return employeeId;
        }
        string getEmployeeName(){
            return employeeName;
        }   
        int getSalary(){
            return salary;
        }
        int getNetSalary(){
            return netSalary;
        }
        void setEmployeeId(int id){
            employeeId = id;
        }
        void setEmployeeName(string name){
            employeeName = name;
        }
        void setSalary(double salary){
            this->salary = salary;
        }
        void calculateNetSalary(int pfpercentage){
            netSalary = salary - (salary*pfpercentage)/100;
        }
        void setNetSalary(double netSalary){
            this->netSalary = netSalary;
        }

};


int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of the code skeleton
    int id;
	string name;
	double sal;
	float pf;
	cout<<"Enter Id:"<<endl;
	cin>>id;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter salary:"<<endl;
	cin>>sal;
	cout<<"Enter PF percentage:"<<endl;
	cin>>pf;
    
    //Fill code here
    Employee emp;
    emp.setEmployeeId(id);
    emp.setEmployeeName(name);
    emp.setSalary(sal);
    emp.calculateNetSalary(pf);
    cout << "Id:" << emp.getEmployeeId() << endl;
    cout << "Name:" << emp.getEmployeeName() << endl;
    cout << "Salary:" << emp.getSalary() << endl;
    cout << "Net Salary:" << emp.getNetSalary() << endl;
    return 0;
}
