#include <iostream>
#include <string.h>
using namespace std;
class Company
{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails();
        static string getCompanyName()
        {
            return companyName;
        }
        static string getAddress()
        {
            return address;
        }
        static long int getContactNumber()
        {
            return contactNumber;
        }
        static void setCompanyName(string cname)
        {
            companyName=cname;
        }
        static void setAddress(string add)
        {
            address=add;
        }
        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }
};
class Employee
{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails();
        int calculateBonusPercentage();
        void displayEmployeeDetails();
        void setEmpName(string name)
        {
            this->empName=name;
        }
        string getEmpName(){
            return empName;
        }
        void setEmpId(int id)
        {
            this->empId=id;
        }
        int getEmpId(){
            return empId;
        }
        void setNetSalary(double net)
        {
            this->netSalary=net;
        }
        double getNetSalary(){
            return netSalary;
        }
        void setCobj(Company c)
        {
            this->cObj=c;
        }
        Company getCobj()
        {
            return this->cObj;
        }
        //include required getter methods
};

string Company::companyName = "Teksoft";
string Company::address = "LosAngeles";
long int Company::contactNumber = 422245673;

void Company::displayCompanyDetails(){
    cout << "Company Name: " << companyName << endl;
    cout << "Address: " << address << endl;
    cout << "Contact Number: " << contactNumber << endl;
}

void Employee::getEmployeeDetails(){
    cout << "Enter Employee Name: " << endl;
    cin >> empName;
    cout << "Enter Employee ID: " << endl;
    cin >> empId;
    cout << "Enter Net Salary (In dollars): " << endl;
    cin >> netSalary;
}

int Employee::calculateBonusPercentage(){
    if (netSalary > 50000 && netSalary <= 80000){
        return 5;
    }
    else if (netSalary > 30000 && netSalary <= 50000){
        return 10;
    }
    else if (netSalary > 10000 && netSalary <= 30000){
        return 15;
    }
    else {
        return 20;
    }
}

void Employee::displayEmployeeDetails(){
    cObj.displayCompanyDetails();
    cout << "Employee Name: " << empName << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Employee Net Salary (In dollars): " << netSalary << endl;
    cout << "Employee Bonus Percentage: " << calculateBonusPercentage() << "%";
}

int main()  //DO NOT change the 'main' signature
{
        //fill the code here
        Employee emp;
        emp.getEmployeeDetails();
        emp.displayEmployeeDetails();
        return 0;
}