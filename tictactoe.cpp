#include <iostream>
#include <string>
using namespace std; 

// global variables 
char space [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //initalizing rows and columns elements 
int row;
int end1;
int column;
char tolken = 'x';
bool tie1=false; 
string n1=""; //inializing 2 players 
string n2=""; 

void functionOne(){  //void returns no value 

    //display structure 

    cout<<"    |     |       \n";
    cout<<" "<<space[0][0]<<"  |  "<<space[0][1]<<"  | "<<space[0][2]<<"\n";
    cout<<"____|_____|____   \n";
    cout<<"    |     |       \n";
    cout<<" "<<space[1][0]<<"  |  "<<space[1][1]<<"  | "<<space[1][2]<<"\n";
    cout<<"____|_____|____   \n";
    cout<<"    |     |       \n";
    cout<<" "<<space[2][0]<<"  |  "<<space[2][1]<<"  | "<<space[2][2]<<"\n";
    cout<<"    |     |       \n";





}

void functionTwo(){  

    int digit; 
    //assigning x to player one and o to player 2 
    if (tolken=='x'){

        cout<<n1<<"please enter";
        cin>>digit; 
    }

    if (tolken=='O'){

        cout<<n2<<"please enter";
        cin>>digit; 
    }
    //each of the column slots 
    if (tolken==1){

        row=0;
        column=0; 
    }

    if (tolken==2){

        row=0;
        column=1; 
    }
    if (tolken==3){

        row=0;
        column=2; 
    }
    if (tolken==4){

        row=1;
        column=0; 
    }
    if (tolken==5){

        row=1;
        column=1; 
    }
    if (tolken==6){

        row=1;
        column=2; 
    }
    if (tolken==7){

        row=2;
        column=0; 
    }
    if (tolken==8){

        row=2;
        column=1; 
    }
    if (tolken==9){

        row=2;
        column=2; 
    }
    //invalid case 
    else if (digit<1 || digit>9)
    {
        cout<<"invalid number!!!"<<endl;


    }
    //checking unused space 
    //if value of tolken(square) is x then value of player one their will be x and value of player 2 will be 0 

    if(tolken=='x' && space[row][column] !='x' && space[row][column] !='0')
{
    space[row][column]='x';
    tolken='0';
}
else if(tolken=='0' && space[row][column] !='x' && space[row][column] !='0')
{
    space[row][column]='0';
    tolken='x';
}
else{ //call fxn again so we can play again

    cout<<"there is no empty space"<<end1;
    functionTwo();


}
    functionOne();
    
}

//CHECHING CONDITIONS FOR PLAYERS TO WIN OR LOSE 
bool functionthree()
{

    for(int i=0;i<3;i++)
    {
        //horizontal
        if(space[i][0]==space[i][1] && space [i][0]==space[i][2] || space[i][0]==space[1][i] && space[0][i]==space[2][i])
        return true; //player wins 
    }
        //diagonal 
    if (space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true;
    }
    for (int i=0;i<3;i++){ //check if game still ongoing 

        for (int j = 0; j < 3; j++)
        {
            
            if (space[i][j] != 'x'  && space[i][j] != '0')
            {
                return false;
            }
        }

    }
    tie1=true; //cats game 
    return false; 

}

int main(){  //calling all functions 

    cout<<"enter name of player 1 :\n"; //publishes to screen
    getline(cin,n1); 
    cout<<"enter name of player 2 :\n";
    getline(cin,n2); 
    cout<<n1<< "is player 1 so they go first\n";
    cout<<n2<< "is player 2 so they go second\n";

    while(!functionthree()) //fxn will keep itterating false till player wins game  
    {
        functionOne();
        functionTwo();
        functionthree();
    }

    if(tolken=='x' && tie1==false){ //player 2 wins

        cout<<n2<<"Player one is the Winner!"<<end1;

    }

    else if(tolken=='0' && tie1==false){ //player 1 wins 

        cout<<n1<<"Player two is the Winner!"<<end1;

    }

    else{ //draw 

    cout<<"DRAW"<<end1;


    }




}







   
   
            
    
    




 






