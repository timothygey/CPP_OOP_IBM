#include<iostream>
using namespace std;

class Person {
    
protected:
    string socialSecurityNumber;
public:
    //include getter and setter
    void setSocialSecurityNumber(string ssno){
        socialSecurityNumber = ssno;
    }
    string getSocialSecurityNumber(){
        return socialSecurityNumber;
    }

    
};

class Student : virtual public Person
{
protected:
    int studentId;
  public:  
      //include getter and setter
	void setStudentId(int Id){
        studentId = Id;
    }  	  		  	  
    int getStudentId(){
        return studentId;
    }   	     	       	 	
};

class Employee : virtual public Person
{
protected:
    int employeeId;
public:
   //include getter and setter
   void setEmployeeId(int empId){
    employeeId = empId;
   }
   int getEmployeeId(){
        return employeeId;
   }
};

class Trainee : public Student, public Employee
{
private:
    int traineeId;
public:
   //include getter and setter
   void setTraineeId(int tId){
    traineeId = tId;
   }
   int getTraineeId(){
        return traineeId;
   }
};

int main() {
    
    string ssn;
    int id;
    cout<<"Enter Trainee ID:";
    cin>>id;
    cout<<"Enter SSN Number:";
    cin>>ssn;
   
    //fill the code here
    Trainee tr;
    tr.setTraineeId(id);
    tr.setSocialSecurityNumber(ssn);
    cout << "Trainee ID: " << tr.getTraineeId() << endl;
    cout << "Social Security Number: " << tr.getSocialSecurityNumber();
    return 0;
}	 	  	  		  	     	     	       	 	