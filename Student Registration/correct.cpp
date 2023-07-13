#include <iostream>
using namespace std;

class Student {    //DO NOT change the class name
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
  public:    
    //Include Getters and setters for above variables.
    void setStudentId(int id){
        studentId = id;
    }
    int getStudentId(){
        return studentId;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setDepartmentId(int deptId){
        departmentId = deptId;
    }
    int getDepartmentId(){
        return departmentId;
    }
    void setGender(string gender){
        this->gender=gender;
    }
    string getGender(){
        return gender;
    }
    void setPhoneNumber(string phNo){
        phoneNumber = phNo;
    }
    string getPhoneNumber(){
        return phoneNumber;
    }
};
int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of the code skeleton
    int id,deptId;
    string name,gender,phNo;
    cout<<"Enter the details:"<<endl;
    cout<<"Student Id"<<endl;
    cin>>id;
    cout<<"Student Name"<<endl;
    cin>>name;
    cout<<"Department Id"<<endl;
    cin>>deptId;
    cout<<"Gender"<<endl;
    cin>>gender;
    cout<<"Phone Number"<<endl;
    cin>>phNo;
    
    //Fill the code here
    Student std;
    std.setStudentId(id);
    std.setPhoneNumber(phNo);
    std.setGender(gender);
    std.setDepartmentId(deptId);
    std.setName(name);
    cout << "Student details entered:\n" << std.getStudentId() << " " 
    << std.getName() << " " << std.getDepartmentId() << " " << std.getGender() << " " << std.getPhoneNumber();
       return 0;
}