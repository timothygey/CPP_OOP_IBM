#include <iostream>
using namespace std;
class College
{
    private:
        static string principal_name;  // principal_name is common for all the students
    public:
        static void setPrincipalName(string name)
        {
            principal_name=name;
        }
       static string getPrincipalName()
        {
            return principal_name;
        }
};
class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
    //initialize member function prototypes
        void getStudentDetails();
        float calculateAverage();
        char findGrade();
        void displayStudentDetails();

        void setId(int student_id)
        {
            id=student_id;
        }
        int getId()
        {
            return id;
        }
        void setAverage(float average)
        {
            this->average=average;
        }
        int getAverage()
        {
            return average;
        }
        void setName(string n)
        {
            name=n;
        }
        string getName()
        {
            return name;
        }
        void setMarks(float m[])
        {
            for(int i=0; i<5;i++)
                marks[i]=m[i];
        }
        float* getMarks()
        {
            return marks;
        }
        void setGrade(char g)
        {
            grade=g;
        }
        char getGrade()
        {
            return grade;
        }
        College getCollegeObject()
        {
            return cObj;
        }
};

string College::principal_name = "John";

void Student::getStudentDetails(){
    cout << "Enter Student ID:" << endl;
    cin >> id;
    cout << "Enter Student Name: " << endl;
    cin >> name;
    cout << "Enter the five subject marks:" << endl;
    for (int i=0; i<5; i++){
        cin >> marks[i];
    }
};

float Student::calculateAverage(){
    int sum = 0;
    for (int j=0; j<5; j++){
        sum = sum + marks[j];
    }
    average = sum/5;
    return average;
}

char Student::findGrade(){
    if (average <= 100 && average >= 80){
        grade = 'O';
    }
    else if (average < 80 && average >= 50){
        grade = 'A';
    }
    else {
        grade = 'F';
    }
    return grade;
}

void Student::displayStudentDetails(){
    cout << "Student Name: " << getName() << endl;
    cout << "Student ID: " << getId() << endl;
    cout << "Principal Name:" << cObj.getPrincipalName() << endl; //cannot be directly accessed because it is a private data member of the college class
    cout << "Average: " << calculateAverage() << endl;
    cout << "Grade: " << findGrade();
}
int main()  //DO NOT change the 'main' signature
{
    //Fill code here
    Student stu;
    stu.getStudentDetails();
    stu.displayStudentDetails();
    return 0;
}