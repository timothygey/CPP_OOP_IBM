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
    //Fill the code here 
    // void setReservationId(int Id){
    //     reservationId = Id;
    // }
    // int getReservationId(){
    //     return reservationId;
    // }
    // void setReservationName(string name){
    //     reservationName = name;
    // }
    // string getReservationName(){
    //     return reservationName;
    // }
    void setNoOfTickets(int noOfTickets){
        this->noOfTickets = noOfTickets;
    }
    int getNoOfTickets(){
        return noOfTickets;
    }
    void setPerTicketRate(double perTicketRate){
        this->perTicketRate = perTicketRate;
    }
    double getPerTicketRate(){
        return perTicketRate;
    }
    void setFoodType(string foodType){
        this->foodType = foodType;
    }
    string getFoodType(){
        return foodType;
    }
    void setDiscountPercentage(string discountPercentage){
        this->discountPercentage = discountPercentage;
    }
    string getDiscountPercentage(){
        return discountPercentage;
    }
    double getTicketCost(){
        return ticketCost;
    }
    void calculateTicketCost(){
        if (foodType == "VEG"){
            double FoodRate = 150*noOfTickets;
            double TicketCharge = noOfTickets*perTicketRate;
            ticketCost = FoodRate + TicketCharge;
        }        
        else if (foodType == "NONVEG"){
            double FoodRate = 200*noOfTickets;
            double TicketCharge = noOfTickets*perTicketRate;
            ticketCost = FoodRate + TicketCharge;              
        }
        cout << "Total ticket cost is " << ticketCost << " US Dollars" << endl;
    }
    friend void calculateReimbursement(Reservation &res);
};
