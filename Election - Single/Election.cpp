#include <iostream>
using namespace std;
 
class Election 
{
  protected:
   long int totalPeople;
   long int noOfWomen;
   long int noOfMen;
  public:
  
   void setTotalPeople(long int totPeople)
   {
       this->totalPeople=totPeople;
   }
    void setNoOfWomen(long int womenCount)
   {
       this->noOfWomen=womenCount;
   }
    void setNoOfMen(long int menCount)
   {
       this->noOfMen=menCount;
   }
   long int getTotalPeople()
   {
       return this->totalPeople;
   }
long int getNoOfWomen()
   {
       return this->noOfWomen;
   }
    long int getNoOfMen()
   {
       return this->noOfMen;
   }
    
};
 
class GeneralElection : public Election
{
  public:
   double calcVotePercentage(int partyA , int partyB){
       //Implement your code
       double votepercent = ((partyA+partyB)*100)/totalPeople;
       return votepercent;
   }
   double calcWomenVotePercentage(int womenVotes){
        //Implement your code
        double womanvotepercent = ((womenVotes*100)/noOfWomen);
        return womanvotepercent;
   }
    double calcMenVotePercentage(int menVotes){
        //Implement your code
        double menvotepercent = ((menVotes*100)/noOfMen);
        return menvotepercent;
   }
};


// main function
int main()
{  
    //Implement your code
    GeneralElection obj1;
    long int totalPeople,noOfWomen,noOfMen;
   int partyA,partyB,womenVotes,menVotes;
   double votePer,womenVotePer,menVotePer;
   cout<<"Enter the number of People:";
   cin>>totalPeople;
   cout<<"Enter the number of women:";
   cin>>noOfWomen;
   cout<<"Enter the number of men:";
   cin>>noOfMen;
   cout<<"Enter the total votes by Party A:";
   cin>>partyA;
   cout<<"Enter the total votes by Party B:";
   cin>>partyB;
   cout<<"Enter the number of women votes:";
   cin>>womenVotes;
   cout<<"Enter the number of men votes:";
   cin>>menVotes;
   //fill the code here
   obj1.setTotalPeople(totalPeople);
   obj1.setNoOfWomen(noOfWomen);
   obj1.setNoOfMen(noOfMen);
   cout << "Vote Percentage: " << obj1.calcVotePercentage(partyA,partyB) << endl;
   cout << "Women Vote Percentage: " << obj1.calcWomenVotePercentage(womenVotes) << endl;
   cout << "Men Vote Percentage: " << obj1.calcMenVotePercentage(menVotes);
   return 0;
}