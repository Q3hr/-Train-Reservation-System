#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
 struct Train
{
	string name;
	int train_num;
	int num_of_seats;
};


void reservation();
void viewdetails();
void cancel();
void printticket(string,int,int,float);
void specifictrain(int);
float charge(int,int);
bool login();
void feedback();

int main()

{
	system("cls");
    cout<<("\t\t=================================================\n");
	cout<<("\t\t|                                               |\n");
	cout<<("\t\t|        -----------------------------          |\n");
	cout<<("\t\t|            TRAIN TICKET SYSTEM                |\n");
	cout<<("\t\t|        -----------------------------          |\n");
	cout<<("\t\t|                                               |\n");
	cout<<("\t\t|                                               |\n");
	cout<<("\t\t|                                               |\n");
	cout<<("\t\t|                                               |\n");
	cout<<("\t\t=================================================\n\n\n");


	cout<<(" \n Press any key to continue:");
	getch();          // Using getch() to get a single character without echoing it

	
    system("cls");              // Clear the console screen
 if(login())
 {
	int menu_choice,choice_return;
	start:
	system("cls");
	cout<<("\n=================================\n");
	cout<<("        TRAIN TICKET SYSTEM");
	cout<<("\n=================================");
	cout<<("\n1>> Reserve A Ticket");
	cout<<("\n------------------------");
	cout<<("\n2>> View All Available Trains");
	cout<<("\n------------------------");
	cout<<("\n3>> Cancel Reservation");
	cout<<("\n------------------------");
	cout<<("\n4>> Feedback");
	cout<<("\n------------------------");
	cout<<("\n5>> Exit");
	cout<<("\n------------------------");
	cout<<("\n\n-->");
	cin>>(menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();
			break;
		case 2:
			viewdetails();
			cout<<("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			cancel();
			break;
		case 4:
			feedback();
			break;
		case 5:
			return(0);
		default:
			cout<<("\nInvalid choice! Enter again");
			getch();
	}
	goto start;           // Jump to the end_program label
}
else {
        cout << " Exiting the program.\n";
    }
	
	return(0);
}
void viewdetails()
{
	system("cls");
	("-----------------------------------------------------------------------------");
	cout<<("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	cout<<("-----------------------------------------------------------------------------");
	cout<<("\n1001\tBlue Lines Express\tKarachi to Lahore\t\t5000\t\t9am");
	cout<<("\n1002\tBlue Lines Express\tLahore To Karachi\t\t5000\t\t12pm");
	cout<<("\n1003\tCity Express\t\tLahore To Islamabad\t\t4500\t\t8am");
	cout<<("\n1004\tCity Express\t\tIslamabad To Lahore\t\t4500\t\t11am");
	cout<<("\n1005\tPeshawar Express\tPeshawar To Lahore\t\t4000\t\t7am");
	cout<<("\n1006\tPeshawar Express\tLahore To Peshawar\t\t4000\t\t9.30am");
    cout<<("\n1007\tLala Musa Express\tLala Musa To Sargodha\t\t3500\t\t1pm");
    cout<<("\n1008\tLala Musa Express\tSargodha To Lala Musa\t\t3500\t\t4pm");
    cout<<("\n1009\tMeteor Express\t\tPeshawar To Karachi\t\t6000\t\t3.35pm");
    cout<<("\n1010\tMeteor Express\t\tKarachi To Peshawar\t\t6000\t\t4.15pm");

}

/*********************************************RESERVATION()*************************************************/

void reservation()
{
	char confirm;
	float charges;
	Train passdetails;
	system("cls");                   

	cout<<("\nEnter Your Name:> ");
	cin.ignore();                     // Ignore the remaining characters in the input buffer 
	cin>>(passdetails.name);  

	cout<<("\nEnter Number of seats:> ");
	cin>>(passdetails.num_of_seats);
	cout<<("\n\n>>Press Enter To View Available Trains<< ");
	getch();
	system("cls");
	viewdetails();
	cout<<("\n\nEnter train number:> ");
	start1:
	cin>>(passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
	}
	else
	{
		cout<<("\nInvalid train Number! Enter again--> ");
		goto start1;
	}

	cout<<("\n\nConfirm Ticket (y/n):>");
	start:
	cin>>(confirm);
	if(confirm == 'y')
	{
		cout<<("==================");
		cout<<("\n Reservation Done\n");
		cout<<("==================");
		cout<<("\nPress any key to go back to Main menu");
		getch();
	}
	else
	{
		if(confirm=='n'){
			cout<<("\nReservation Not Done!\nPress any key to go back to  Main menu!");
			getch();
		}
		else
		{
			cout<<("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
}

/*********************************************CHARGE()*************************************************/

float charge(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1002)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1008)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1009)
	{
		return(6000.0*num_of_seats);
	}
	if (train_num==1010)
	{
		return(6000.0*num_of_seats);
	}
}


/*********************************************PRINTTICKET()*************************************************/

void printticket(string name,int num_of_seats,int train_num,float charges)
{
	system("cls");
    cout << "-------------------\n";
    cout << "\tTICKET\n";
    cout << "-------------------\n\n";
    cout << "Name:\t\t\t" << name;
    cout << "\nNumber Of Seats:\t" << num_of_seats;
    cout << "\nTrain Number:\t\t" << train_num;
    specifictrain(train_num); 
    cout << "\nCharges:\t\t" << charges;
}

/*********************************************SPECIFICTRAIN()*************************************************/

void specifictrain(int train_num)
{

	if (train_num==1001)
	{
		cout<<("\nTrain:\t\t\tBlue Lines Express");
		cout<<("\nDestination:\t\tKarachi to Lahore");
		cout<<("\nDeparture:\t\t9am ");
	}
	if (train_num==1002)
	{
		cout<<("\nTrain:\t\t\tBlue Lines Express");
		cout<<("\nDestination:\t\tLahore To Karachi");
		cout<<("\nDeparture:\t\t12pm");
	}
	if (train_num==1003)
	{
		cout<<("\nTrain:\t\t\tCity Express");
		cout<<("\nDestination:\t\tLahore To Islamabad");
		cout<<("\nDeparture:\t\t8am");
	}
	if (train_num==1004)
	{
		cout<<("\nTrain:\t\t\tCity Express");
		cout<<("\nDestination:\t\tIslamabad To Lahore");
		cout<<("\nDeparture:\t\t11am ");
	}
	if (train_num==1005)
	{
		cout<<("\nTrain:\t\t\tPeshawar Express");
		cout<<("\nDestination:\t\tPeshawar To Lahore");
		cout<<("\nDeparture:\t\t7am");
	}
	if (train_num==1006)
	{
		cout<<("\ntrain:\t\t\tPeshawar Express");
		cout<<("\nDestination:\t\tLahore To Peshawar ");
		cout<<("\nDeparture:\t\t9.30am ");
	}
	if (train_num==1007)
	{
		cout<<("\ntrain:\t\t\tLala Musa Express");
		cout<<("\nDestination:\t\tLala Musa To Sargodha");
		cout<<("\nDeparture:\t\t1pm ");
	}
	if (train_num==1008)
	{
		cout<<("\ntrain:\t\t\tLala Musa Express");
		cout<<("\n Destination:\t\tSargodha To Lala Musa");
		cout<<("\nDeparture:\t\t4pm ");
	}
	if (train_num==1009)
	{
		cout<<("\ntrain:\t\t\tMeteor Express");
		cout<<("\nDestination:\t\tPeshawar To Karachi");
		cout<<("\nDeparture:\t\t3.35pm ");
	}
	if (train_num==1010)
	{
		cout<<("\ntrain:\t\t\tMeteor Express");
		cout<<("\nDestination:\t\tKarachi To Peshawar");
		cout<<("\nDeparture:\t\t1.15 ");
	}
}

/*********************************************LOGIN()*********************************************************/

bool login() 
{
    string username, password;
    cout<<("\n  =======================  LOGIN FORM  =======================\n  ");
    cout<<(" \n                       ENTER USERNAME:-");
    cin >> username;
    cout<<(" \n                       ENTER PASSWORD:-");
    cin >> password;

    
    if (username == "admin" && password == "admin") {
        cout<<("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	cout<<("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	return true;
        
    } else {
        	cout<<("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		getch();
		return false;
		
        
        
    }
}

/*********************************************CANCEL()********************************************************/

void cancel() 
{
	system("cls");
	int trainnum;
	cout<<("-----------------------\n");
		cout<<("Enter the train number: \n");
			cout<<("-----------------------\n");
		cin.ignore();           // Ignore the remaining characters in the input buffer        
		cin>>(trainnum);
		cout<<("\n\nCancelled");
		getch();
}

/*********************************************FEEDBACK()******************************************************/

void feedback()
{
	system("cls");
	int choice;
	cout << "-------------------\n";
    cout << "FeedBack\n";
    cout << "-------------------\n\n";
	cout<<"\nWould you like to use our services again?\n";
	cout<<"\n1>>Always";
	cout<<"\n2>>Sometimes";
	cout<<"\n3>>Never\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Thanks to give a Feedback\n";
			break;
		case 2:
			cout<<"Thanks to give a Feedback\n";
			break;
		case 3:
		    cout<<"Thanks to give a Feedback\n";
		    break;
		default:
			cout<<("\nInvalid choice");	
	}
	getch();	
}



