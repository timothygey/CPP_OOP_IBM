#include <iostream>
using namespace std;

class Train //Add required code
{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;
    public:
    //include required getter and setter method
    long getPassengerPhone(){
        return passengerPhone;
    } 
    string getPassengerName(){
        return passengerName;
    } 
    char getGender(){
        return gender;
    }
    int getAge(){
        return age;
    } 
    double getTicketPrice(){
        return ticketPrice;
    }
    void setPassengerPhone(long pPhone){
        passengerPhone = pPhone;
    } 
    void setPassengerName(string pName){
        passengerName = pName;
    }
    void setGender(char pGender){
        gender = pGender;
    }
    void setAge(int pAge){
        age = pAge;
    } 
    void setTicketPrice(double tPrice){
        ticketPrice = tPrice;
    }
    double calculateAmount();
};

double Train::calculateAmount(){
    if (age < 16){
        ticketPrice = ticketPrice/2;
    }
    else if (age >= 60){
        ticketPrice = ticketPrice*0.75;
    }
    else if (gender == 'F'){
        ticketPrice = ticketPrice*0.9;
    }
    else {
        ticketPrice = ticketPrice*1;
    }
    return ticketPrice;
}


int main(){   //DO NOT change the 'main' signature
    //Fill code here
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    cout<<"Enter the Passenger name : ";
    cin>>name;
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;
    //fill the code here
    Train tr;
    tr.setTicketPrice(ticketPrice);
    tr.setAge(age);
    tr.setGender(gender);
    tr.setPassengerPhone(phone);
    tr.setPassengerName(name);
    cout << "Total Amount (In dollars): " << tr.calculateAmount();
    return 0;
}
