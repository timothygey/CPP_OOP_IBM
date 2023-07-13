#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    private:
        static int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:       
        void setEmployeeId(int id)
        {
            employeeId=id;
        }
        int getEmployeeId()
        {
            return employeeId;
        }
        void setEmployeeName(string name)
        {
            employeeName=name;
        }
         string getEmployeeName()
        {
            return this->employeeName;
        }
        void setSalary(double sal)
        {
            salary=sal;
        }
        double getSalary()
        {
            return this->salary;
        }
        void setNetSalary(double netSal)
        {
            netSalary=netSal;
        }
        double getNetSalary()
        {
           return this->netSalary;
        }
        double calculateNetSalary(int pfpercentage);
        void display();
        void getEmployeeDetails();
        static int generateEmployeeId(); 
        //fill the code here
};

int Employee::count = 99;

double Employee::calculateNetSalary(int pfpercentage){
    netSalary = salary - (salary*pfpercentage/100);
    return netSalary;
}

void Employee::getEmployeeDetails(){
    cout << "Enter Name: " << endl;
    cin >> employeeName;
    cout << "Enter salary (In dollars): " << endl;
    cin >> salary;
}

int Employee::generateEmployeeId(){
    count ++;
    return count;
    }


void Employee::display(){
    cout << "Id: " << getEmployeeId() << endl;
    cout << "Name:" << employeeName << endl;
    cout << "Net Salary (In dollars): " << netSalary << endl;
}

int main() //DO NOT change the 'main' signature
{
    //create object for Employee class
    int i = 0;
    Employee emp;
    while (i< 3){
        emp.getEmployeeDetails();
        emp.setEmployeeId(emp.generateEmployeeId());
        int pfpercentage;
        cout<<"Enter PF percentage:"<<endl;
        cin>>pfpercentage;
        //fill the code here
        emp.calculateNetSalary(pfpercentage);
        emp.display();
        i++;
    }
    return 0;
}