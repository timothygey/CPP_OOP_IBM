//IMPLEMENT CLASS RESERVATION ONLY IN THIS FILE
#include<iostream>
using namespace std;

class Reservation
{
    private:
    int reservationId;
    string reservationName;
    int noOfTickets;
    double perTicketRate;
    string foodType;
    double ticketCost;
    string discountPercentage;
    public:
    Reservation(){};
    Reservation(int reservationId, string reservationName, int noOfTickets, double perTicketRate, string foodType){
        this->reservationName=reservationName;
        this->reservationId=reservationId;
        this->noOfTickets=noOfTickets;
        this->foodType=foodType;
        this->perTicketRate=perTicketRate;
    }
    // int getReservationId(){return reservationId;}
    // void setReservation(int reservationId){this->reservationId=reservationId;}
    // string getReservationName(){return reservationName;}
    // void setReservationName(string reservationName){this->reservationName=reservationName;}
    void setNoOfTickets(int noOfTickets){this->noOfTickets=noOfTickets;}
    void setPerTicketRate(double perTicketRate){this->perTicketRate=perTicketRate;}
    void setFoodType(string foodType){this->foodType=foodType;}
    string getFoodType(){return foodType;}
    double getTicketCost(){return ticketCost;}
    void setDiscountPercentage(string discountPercentage){this->discountPercentage=discountPercentage;}
    string getDiscountPercentage(){return discountPercentage;}
    void calculateTicketCost(){
        double foodRate,foodTypeRate;
        if(foodType=="VEG"){foodTypeRate=150;}
        else if(foodType=="NONVEG"){foodTypeRate=200;}
        foodRate = foodTypeRate*noOfTickets;
        // cout<<foodTypeRate<<" ";
        double ticketCharge=noOfTickets*perTicketRate;
        // cout << ticketCharge << " ";
        ticketCost=ticketCharge+foodRate;
        // cout << ticketCost << " \n"; 
        cout<< "Total ticket cost is " << ticketCost << " US Dollars" << endl;
    }
    int getNoOfTickets(){
        return noOfTickets;
    }
    friend void calculateReimbursement(Reservation &res);
};