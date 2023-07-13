#include <iostream>
using namespace std;

string voltageTracker(float v1, float v2,float v3) 
{
      //Implement your code here
      if ((v1 <= 250 && v1 >= 240) && (v2 <= 250 && v2 >= 240) && (v3 <= 250 && v3 >= 240)){
         return "Safe voltage limit";
      }
      else if ((v1 <= 275 && v1 >= 251) || (v2 <= 275 && v2 >= 251) || (v3 <= 275 && v3 >= 251)){
         return "Warning voltage limit";
      }
      else if ((v1 > 275) || (v2 > 275) || (v3 > 275)){
         throw "Danger Detected Over Voltage";
      }
}

int main()
{
    float v1;
    float v2;
    float v3;
    cout<<"Enter Line Voltage value"<<endl;
    cin>>v1;
    cin>>v2;
    cin>>v3;
 try 
 {
    //Implement your code here
    cout << voltageTracker(v1,v2,v3);
 } catch (const char* msg) 
 {
  cerr << msg << endl;
 }
}
