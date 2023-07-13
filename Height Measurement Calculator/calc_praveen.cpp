#include<iostream>
using namespace std;
#include <string> 
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
    void setCm(int cm){
        this->cm=cm;
    }
    // Converter(){
    //     this->cm = 0;
    // }  
    
    
};


    
class Height  
{
    private:
    int feet;
    int inch;
    
    public:
        friend void Converter::toConvert(Height ht);
        //Fill the code here
        Height(int feet, int inch){
            this->feet=feet;
            this->inch=inch;
        }
        int getFeet(){
            return feet;
        }
        int getInch(){
            return inch;
        }
        void setFeet(int feet){
            this->feet=feet;
        }
        void setInch(int inch){
            this->inch=inch;
        }
          
        double calculateHeight(){
            cout <<"Height entered is "<< feet << "."<< inch<< "feet"<<endl;
            return stod(to_string(feet) + '.' + to_string(inch));;
        }    
    
};