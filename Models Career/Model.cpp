#include <iostream>
using namespace std;
 
class Heroine 
{
   protected:
        double earningsPerDay;
  public:
    void setEarningsPerDay(double earnings)
    {
        earningsPerDay=earnings;
    }
    double getEarningsPerDay()
    {
        return earningsPerDay;
    }
   long calcEarnings(int noOfDays){
       //Implement your code
        
        long totalEarnings = earningsPerDay*noOfDays;
        return totalEarnings;
   }    
};
 
class MovieHeroine : public Heroine
{
  private:
   int daysRun; //number of days the movie run
  public:
    void setDaysRun(int daysRunning){
        daysRun = daysRunning;
    }
    int getDaysRun(){
        return daysRun;
    }
   long calcEarnings(int noOfDays){
       //Implement your code
       int extraPercentage;
        long totalEarnings = earningsPerDay*noOfDays;
        if (daysRun > 100){
            extraPercentage = 10;
        }
        else if (daysRun > 50 && daysRun <= 100){
            extraPercentage = 5;
        }
        else {
            extraPercentage = 0;
        }
        totalEarnings=totalEarnings+(totalEarnings*extraPercentage/100);
        return totalEarnings;
   }
};

class AdvertisementModel : public Heroine
{
  private:
   int rating; //rating for advertisement
  public:
    void setRating(int rate){
        rating = rate;
    }
    int getRating(){
        return rating;
    }    
   long calcEarnings(int noOfDays){
      //Implement your code
      int extraAmount;
      if (rating > 5){
        extraAmount = 10000;
      }
      else if (rating < 5 && rating > 2){
        extraAmount = 5000;
      }
      else {
            extraAmount = 0;
        }      
   long totalEarnings = (earningsPerDay*noOfDays)+extraAmount;
   return totalEarnings;
   }
};
// main function
int main()
{  
    int movie,ad,rating,daysRun;
   double earningsPerDay;
   cout<<"Enter the earnings per day: ";
   cin>>earningsPerDay;
   
    cout<<"Enter the number of days for movie: ";
    cin>>movie;
    cout<<"Enter the number of days movie run:";
    cin>>daysRun;
   //Implement your code
    MovieHeroine mov;
    mov.setEarningsPerDay(earningsPerDay);
    mov.setDaysRun(daysRun);
    cout<<"Enter the number of days for advertisement: ";
    cin>>ad;
    AdvertisementModel adm;
    adm.setEarningsPerDay(earningsPerDay);
    cout<<"Enter the Advertisement rating: ";
    cin>>rating;
    adm.setRating(rating);
    cout << "Earnings for Movie: " << mov.calcEarnings(movie) << endl;
    cout << "Earnings for Advertisement: " << adm.calcEarnings(ad);
   return 0;
}