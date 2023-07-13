
#include<iostream>
using namespace std;

class Player //DO NOT change the class name
{
private:
    int playerID;
    string playerName;
    int playedMatches;
    int playerScore;

public:
    int getPlayerID(){
        return playerID;
    }
    int getPlayedMatches(){
        return playedMatches;
    }
    int getPlayerScore(){
        return playerScore;
    }
    string getPlayerName(){
        return playerName;
    }
    //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
    Player(int pID, string pName, int pScore){
        playerID = pID;
        playerName = pName;
        playerScore = pScore;
    } 
    //Implement a parameterized constructor for 4 arguments - playerID, playerName,playedMatches and playerScore.
    Player(int pID, string pName, int pMatches, int pScore){
        playerID = pID;
        playerName = pName;
        playedMatches = pMatches;
        playerScore = pScore;
    }
    void displayThreeArgument()
    {       
         //Implement your code here
        cout << "Player ID. : " << getPlayerID() << endl;
        cout << "Player Name: " << getPlayerName() << endl;
        cout << "Player Score: " << getPlayerScore() << endl;
    }


    void displayFourArgument()
    {
       //Implement your code here
        cout << "Player ID. : " << getPlayerID() << endl;
        cout << "Player Name: " << getPlayerName() << endl;
        cout << "Played Matches: " << getPlayedMatches() << endl;
        cout << "Player Score: " << getPlayerScore() << endl;       
    }
    
    //Implement Destructor here
    ~Player(){
        cout << "Destructor Called" << endl;
    }
};
int main(){
    //Implement your code here
    Player p1(1001, "John", 130);
    Player p2(1002, "Raj", 100, 5000);
    p1.displayThreeArgument();
    p2.displayFourArgument();
    return 0;
}