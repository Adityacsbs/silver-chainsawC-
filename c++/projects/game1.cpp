#include <iostream>

using namespace std;

int main()
{
    bool ships[4][4]={
        {0,1,1,0},
        {1,0,1,0},
        {1,1,0,0},
        {1,0,0,1}
    };

    int hits=0;
    int NumberofTurn=0;

    // Keep track of how many hits the player has and how many turns they have played in these variables
    
      while (hits<4)
      {
        int row, column;

        cout<<"entering the co ordinates:-"<<endl;

        cout<<"choose a number between 0 to 3"<<endl;
        cin >> row;

        cout<<"choose a number between 0 to 3"<<endl;
        cin>>column;

        if(ships[row][column]){

            ships[row][column]=0;

            hits++;

            cout<<"Hits:"<<(4-hits)<<"-left.\n\n"<<endl;
        }else{
            cout<<"miss.\n\n";
        }

        NumberofTurn++;

      }
        cout<<"victory.\n\n";
        cout<<"numberof turns is"<<NumberofTurn<<endl;

      
      


    return 0;
}