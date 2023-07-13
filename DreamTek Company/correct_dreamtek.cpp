#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
    int empId;
    string name;
    static string compName;
    public:
    //Include necessary methods 
    static string getCompName(){
        return compName;
    }
};
    //compName can be initalized outside the class by redeclaring the static variable using the scope resolution operator
string Employee::compName="IBM";

int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of code skeleton 
    cout << "Company Name:" << Employee::getCompName();
    return 0;
}