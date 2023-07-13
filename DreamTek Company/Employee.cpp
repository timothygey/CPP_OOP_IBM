#include <iostream>
using namespace std;

class Employee {    //DO NOT change the class name
    private:
        int associateId;
        string associateName;
        string workStatus;
    public:
    //Include necessary methods 
    void setAssociateId(int id){
        associateId = id;
    }
    int getAssociateId(){
        return associateId;
    }
    void setAssociateName(string name){
        associateName = name;
    }
    string getAssociateName(){
        return associateName;
    }
    void setWorkStatus(string workStatus){
        this->workStatus = workStatus;
    }
    string getWorkStatus(){
        return workStatus;
    }
    void updateStatusDetails(int days){
        if (days <= 20){
            workStatus = "Core skills";
        }
        else if (days > 20 && days <=40){
            workStatus = "Advanced skills";
        }
        else if (days > 40){
            workStatus = "Project phase";
        }
    }
};


int main(){   //DO NOT change the 'main' signature

    //Input statements are included as a part of code skeleton 
    int id;
	string name;
	int days;
	cout<<"Enter the associate id:";
	cin>>id;
	cout<<"Enter the associate name:";
	cin>>name;
	cout<<"Enter the number of days:";
	cin>>days;
    
    //Fill the code here 
    Employee emp;
    emp.setAssociateId(id);
    emp.setAssociateName(name);
    emp.updateStatusDetails(days);
    cout << "The associate " << emp.getAssociateName() << " " << "work status: " << emp.getWorkStatus();

    return 0;
}
