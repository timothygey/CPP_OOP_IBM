#include <iostream>
using namespace std;

double eligibility_ForAdmission(int a,int b,int c) 
{
    //Implement your code here
    double totalscore = a+b+c;
    if ((a + b + c >= 180) && (a >= 60) && (b>= 60) && (c>= 60)){
        return totalscore;
    }
    else {
        throw "Not eligible for Admission";
    }
 return 0;
}

int main()
{
    float phyMarks;
    float chemMarks;
    float mathMarks;
    cout<<"Enter the Physics Marks"<<endl;
    cin>>phyMarks;
    cout<<"Enter the Chemistry Marks"<<endl;
    cin>>chemMarks;
    cout<<"Enter the Maths Marks"<<endl;
    cin>>mathMarks;
    //fill the code here
   try
   {
        //Implement your code here
        cout << "Total score is " << eligibility_ForAdmission(phyMarks,chemMarks,mathMarks);
    } catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
}

