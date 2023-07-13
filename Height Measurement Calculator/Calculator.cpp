#include<iostream>
using namespace std;
//Provide Forward Delcaration of Height Here  
class Height;

class Converter
{
    private:
    int cm;
    
    public:
    //Fill the code here 

    void toConvert(Height ht);
    int getCm(){
        return cm;
    }
    void setCm(){
        this->cm=cm;
    }
};
class Height  
{
    private:
    int feet;
    int inch;
    
    public:
    //Fill the code here
    void setFeet(int feet){
        this->feet = feet;
    }
    void setInch(int inch){
        this->inch = inch;
    }
    int getFeet(){
        return feet;
    }
    int getInch(){
        return inch;
    }
    
    friend void Converter::toConvert(Height ht);
    Height(int feet, int inch){
        this->feet = feet;
        this->inch = inch;
    }
    double calculateHeight(){
        cout <<"Height entered is "<< feet << "."<< inch<< "feet"<<endl;
        return stod(to_string(feet) + '.' + to_string(inch));;
    }   
};