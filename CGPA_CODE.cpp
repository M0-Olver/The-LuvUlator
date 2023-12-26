#include <iostream>

using namespace std; // using namespace std; simplifys writing stuff 
//you have taken 29 courses atm 
int main(int argc, char *argv[])  //holds arguments and characters 
{
 const double A_PLUS = 4.33;  //grades 
        const double A = 4.0;
    const double A_MINUS = 3.67;
        const double B_PLUS = 3.33;
        const double B = 3.0;
        const double B_MINUS = 2.67;
        const double C_PLUS = 2.33;
        const double C = 2.0;
        const double C_MINUS = 1.67;
        const double D_PLUS = 1.33;
        const double D = 1.00;
        const double D_MINUS = 0.67;
        const double F = 0.0;
        const double S = 3.42;    //Change when ready 


        string lettergrade;  //can hold characters 
        double credit;      //can hold numbers 
        double caltimes = 0;  //counts number of calculations 
    double totalcal = 0;
    double totalcredit = 0;
    double finalgpa = 0;
    const double MAX_GPA = 4.33; // Adjust this to your maximum possible GPA
    const double MAX_PERCENTAGE = 100.0;

    int option;          //stores user option and values 
    
        for(;;)  //infinte loop that will continue to ask user for imput 
    {
            cout<<"\nEnter letter grade: ";
            cin>>lettergrade;
            cin.ignore();
            cout<<"Enter the course credit: ";
            cin>>credit;

                if(lettergrade == "S" || lettergrade == "S")
                {
                    caltimes = credit * S;
                }
                else if(lettergrade == "a+" || lettergrade == "A+")
                {
                    caltimes = credit * A_PLUS;
                }
                else if(lettergrade == "a" || lettergrade == "A")
                {
                    caltimes = credit * A;
                }
                else if(lettergrade == "a-" || lettergrade == "A-")
                {
                    caltimes = credit * A_MINUS;
                }
                else if(lettergrade == "b+" || lettergrade == "B+")
                {
                    caltimes = credit * B_PLUS;
                }
                else if(lettergrade == "b" || lettergrade == "B")
                {
                    caltimes = credit * B;
                }
                else if(lettergrade == "b-" || lettergrade == "B-")
                {
                    caltimes = credit * B_MINUS;
                }
                else if(lettergrade == "c+" || lettergrade == "C+")
                {
                    caltimes = credit * C_PLUS;
                }
                else if(lettergrade == "c" || lettergrade == "C")
                {
                    caltimes = credit * C;
                }
                else if(lettergrade == "c-" || lettergrade == "C-")
                {
                    caltimes = credit * C_MINUS;
                }
                else if(lettergrade == "d+" || lettergrade == "D+")
                {
                    caltimes = credit * D_PLUS;
                }
                else if(lettergrade == "d" || lettergrade == "D")
                {
                    caltimes = credit * D;
                }
                else if(lettergrade == "d-" || lettergrade == "D-")
                {
                    caltimes = credit * D_MINUS;
                }
                else if(lettergrade == "f" || lettergrade == "F")
                {
                    caltimes = credit * F;
                }	   
                else
                {
                    cout<<"Invaild Input...";
		        }
          totalcredit = totalcredit + credit;
          totalcal = totalcal + caltimes;
          
          
                cout<<"Do you want to enter another grade (1 - Yes, 2 - no): ";
                cin>>option;
                if(option == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }      
 	    }
                
          finalgpa = totalcal/totalcredit;
          double percentage = (totalcal / (totalcredit * MAX_GPA)) * MAX_PERCENTAGE;
          cout<<"You have Taken: "<<totalcredit<<" Courses\n";
          cout << "Your GPA as a Percentage is: " << percentage << "%\n";
          cout<<"Your GPA is: "<<finalgpa<<"\n";
    
	
	return 0;



}
       









