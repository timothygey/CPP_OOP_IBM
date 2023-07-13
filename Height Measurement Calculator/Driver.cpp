//Implement the method 'toConvert' and main in this class
#include<iostream>
#include "Calculator.cpp"
using namespace std;

void Converter::toConvert(Height ht){
    cm = (ht.getFeet()*30) + (ht.getInch()*3);
}
//Fill the code here
int main()
{
    int feet1,inch1;
    cout<<"Enter feet"<<endl;
    cin>>feet1;
    cout<<"Enter inch"<<endl;
    cin>>inch1;
    //Fill the code here
    Height ht(feet1,inch1);
    ht.calculateHeight();

    Converter c1;
    c1.toConvert(ht);
    cout << "Height in cm is " << c1.getCm() << "cm";
    return 0;
}