//IMPLEMENT 'main' IN THIS FILE

#include<iostream>
#include "Addition.cpp"
using namespace std;

class Operation{
    public:
    //Fill the code here
    int addRealPart(Addition obj1, Addition obj2){
        return obj1.real + obj2.real;
    }    
    int addImaginaryPart(Addition obj1, Addition obj2){
        return obj1.img + obj2.img;
    }
};   

int main()
{
    
    int real,img=0;
    cout<<"Enter real and imaginary part of the first complex number"<<endl;
    cin>>real;
    cin>>img;
    //Fill the code here
    Addition OBJ1 (real,img);
    cout<<"Enter real and imaginary part of the second complex number"<<endl;
    cin>>real;
    cin>>img;
    //Fill the code here
    Addition OBJ2 (real,img);
    Operation operation;
    cout << "Sum of real and imaginary part is " << operation.addRealPart(OBJ1,OBJ2) << "+i" << operation.addImaginaryPart(OBJ1,OBJ2);
    return 0;
}
