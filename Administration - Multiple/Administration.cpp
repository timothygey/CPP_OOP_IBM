#include <iostream>
using namespace std;
 
class RuralManagement {
  protected:
  int acceptedSchemes;
  
  public:
    int getAcceptedSchemes(){
        return acceptedSchemes;
    }
    void setAcceptedSchemes(int noOfSchemes){
        this->acceptedSchemes=noOfSchemes;
    }
    int calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
      //Implement your code here
      acceptedSchemes = noOfSchemes - noOfSchemesRejected;
      return acceptedSchemes;
   }
    
};
 
class RevenueManagement  
{
  protected:
    double totalRevenue;
  public:
    double getTotalRevenue(){
        return totalRevenue;
    }
    void setTotalRevenue(double revenue){
        this->totalRevenue=revenue;
    }
    double calcTotalRevenue(int noOfTerritoriess,double revenue){
       //Implement your code here
       totalRevenue = noOfTerritoriess*revenue;
       return totalRevenue;
   }
};
class SchemeManagement : public RuralManagement, public RevenueManagement
{
  public:
   double allotMoneyPerScheme(){
      //Implement your code here
      return totalRevenue/acceptedSchemes;
   }
};

// main function
int main()
{ 
    int rejected,schemes,territories;
   double revenue;
   cout<<"Enter number of territories: ";
   cin>>territories;
   cout<<"Enter revenue: ";
   cin>>revenue;
   cout<<"Enter total number of schemes: ";
   cin>>schemes;
   cout<<"Enter number of schemes rejected: ";
   cin>>rejected;
  //Implement your code here
  SchemeManagement ScM;
  ScM.setTotalRevenue(ScM.calcTotalRevenue(territories,revenue));
  ScM.setAcceptedSchemes(ScM.calcNoOfSchemes(schemes,rejected));
  cout << "Money alloted per scheme: " << ScM.allotMoneyPerScheme();
  return 0;
}