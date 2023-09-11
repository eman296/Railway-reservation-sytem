#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
using namespace std;
/* 
Eman Amir
bcsm-f20-296 
programing fundamental 
proect on railway reservation

the program include:
1. if conditions(nested if else)
2. swtitch
3. Arrays 
4. string
5. pinters
6. poinrts to pointers
7. structure
8. structure to pointers
9. structure to function
10. for loop
11. while loop
12. user defined functions

*/
int t;// for time 
struct mainlogin
	{
int id;
char name[50];	
int age;
char gender[50];
char
 cnic;
char adress[50];
int contact; 	
	};
struct time
{//structure
	int time1;
	int time2;
};
//structure
struct generate{
	char can;
};
void start();//start
void menu();//menu
void login();//login
void timing(time);//for time{structure to function}
void booking();//for booking
    //option1
void schedule();//option 2
      //option 3
void end();//option 4

int main()
{
	start();
	
	//start
	
	cout<<" \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t WELCOME TO ONLINE TICKET BOOKING      "<<endl;
	cout<<"\t\t\t\t\t\t\t\t_____________________________________________"<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t\tBooking Offers Name : Eman travel Aggency"<<endl;
	cout<<"\n\n\n\t\t\t\t\t\t\t\t     Country        :       Lahore       "<<endl;
	cout<<"\n\n\n\t\t\t\t\t\t\t\t   Contact Us       :     0312334567      "<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t_____________________________________________"<<endl;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Railway Reservation System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------------" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\t<1> Menu" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\t<2> Train Schedule" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\t<3> Booking Of ticket" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\t------------------------------------------------" << endl << endl;
    cout << "\n\t\t\t\t\t\t\t\tEnter Your Choice:     ";
	int cho;//choice enter
	cin>>cho;
	switch (cho)
{
	
		case 1:
		{
		//menu
		menu();
		break;	
		}
		case 2:
		{
		schedule();
		//schedule
		break;	
		}
		case 3:
		{
		//book
		booking();
		break;	
		}
		case 4:
		{
		//exit
			end();
		break;	
		}
	default :
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		cout<<"\n\t\t\t\t\t\t\tOpps!! Sorry Invalid Number"<<endl; 
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
	}
		
		return 0;
		

}
void start()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                    WELCOME TO THE                                     |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                              RAILWAY RESERVATION SYSTEM!!                             |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                               Made by EMAN AMIR                       |@@\n";
		cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
		cout << "Press any key to continue...";
	    getch();
	    
	
	}
	void menu()
{
	int ch1;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Main Menu ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Login " << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Railway Schedule" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<3> Want to book" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<4> Go Back" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tEnter Your choice:     ";
        cin >> ch1;
        switch (ch1)
{
		case 1:
		{
		//login
		login();
		break;	
		}
		case 2:
		{
		schedule();
		//schedule
		break;	
		}
		case 3:
		{
		//book
		booking();
		break;	
		}
		case 4:
		{
		//exit
			main();
		break;	
		}
	default :
		{
		
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		cout<<"\n\t\t\t\t\t\t\tOpps!! Sorry Invalid Number"<<endl; 
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		end();
	}
	}
	
	}
	void login()
{
		mainlogin a;
			 cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tLOGIN WITH THE REQUIEMENTS";
             cout<<"\n\n\n\t\t\t\t\t\t\t\tEnter unique Id  :  ";
             cin>>a.id;
              cout<<"\n\t\t\t\t\t\t\t\tEnter name  :  ";
             cin>>a.name;
              cout<<"\n\t\t\t\t\t\t\t\tEnter age  :  ";
             cin>>a.age;
              cout<<"\n\t\t\t\t\t\t\t\tEnter gender  :  ";
            cin>>a.gender;
              cout<<"\n\t\t\t\t\t\t\t\tEnter cnic :  ";
             cin>>a.cnic;
              cout<<"\n\t\t\t\t\t\t\t\tEnter address  :  ";
            cin>>a.adress;
              cout<<"\n\t\t\t\t\t\t\t\tEnter unique contact  no :  ";
             cin>>a.contact;
  {
            cout << "\n\n\n\n\n\n\n\n";
            cout<<"\n\n\n\t\t\t\t\t\t\t\tDISPLAYING THE RECORD"<<endl;
            cout << "\n\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
            cout << "\n\t\t\t\t\t\t\t\tID                   :" << a.id << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tName                 :" << a.name << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tAge                  :" << a.age << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tGender               :" << a.gender << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tCnic                 :" << a.cnic << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tAddress              :" << a.adress << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\tContact              :" << a.contact << endl << endl;
           	cout << "\n\t\t\t\t\t\t\t\t------------------------------------" << endl << endl; 
           	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tTHANK YOU FOR THE REGISTATION!! "<<endl;
			   menu();   
    }
}
	
//option 2	
void schedule()
{
	int cho;
	int pk1, pk2, pk3 =0;
     cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Departure And Destination ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tNumber   Railway Name         Departure       Destination" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1>        pk001              Lahore          Karachi" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2>        pk001              Karachi         Lahore" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3>        pk002              Lahore          Sialkot" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4>        pk003              Sialkot         Lahore" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
	
    cout << "\n\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin>>cho;
 int *p; //pointers
    p=&cho;
        time t1;
    	switch (*p)
{
		case 1:
		{
		  cout << "\t\t\t\t\t\t\t\t The train is avalabile in following timing: " << endl << endl;
		timing(t1);
		break;	
		}
		case 2:
		{
		cout << "\t\t\t\t\t\t\t\t The train is avalabile in following timing: " << endl << endl;
		timing(t1);
		break;	
		}
		case 3:
		{
		cout << "\t\t\t\t\t\t\t\t The train is avalabile in following timing: " << endl << endl;
		timing(t1);
		break;	
		}
		case 4:
		{
		cout << "\t\t\t\t\t\t\t\t The train is avalabile in following timing: " << endl << endl;
		timing(t1);
		
		break;	
		}
	default :
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		cout<<"\n\t\t\t\t\t\t\tOpps!! Sorry Invalid Number"<<endl; 
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
	}	
    
    
}	
	//time1
	//time2
	void timing(time t1)
	{
		cout<<"\n\n\t\t\t\t\t\t<1>The first train will reached to his destination at 9:00";
		cout<<"\n\n\t\t\t\t\t\t<2>The second train will reached to his destination at 2:00";
		cout<<"\n\n\t\t\t\t\t\tEnter your choice : ";
		cin>>t1.time1;
		t=t1.time1;
		if(t==1 || t==2 || t==3)
		{
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\tyou have choose the 1st option:"<<endl;
			cout<<"\n\n\n\t\t\t\t\t\t\tWhich type of seat You want to choose"<<endl;
			cout<<"\n\n\t\t\t\t\t\t\t<1>First Class"<<endl;
			cout<<"\n\n\t\t\t\t\t\t\t<2>Second Class"<<endl;
			cout<<"\n\n\t\t\t\t\t\t\t<3>Economy Class "<<endl;
			int ch;
			int *p;//pointer to pointer
			p=&ch;
			int **p1;
			p1=&p;
			cout<<"\n\n\n\t\t\t\t\t\t\t Enter Your Choice : ";
			cin>>**p1;
			cout<<"\n\n\n\t\t\t\t\t\t\tDO YOU WANT TO BOOK YOUR TICKET? (Y/N)  : ";
			char ans;
			cin>>ans;
			if(ans=='Y'|| ans=='y')
			//booking function call
			{
			cout<<"\n\n\n\t\t\t\t\t\t\tWELCOME TO BOOKING";
			booking();}
			else
			end();
			//function call
			
		}
		else if(t!=1 || t!=2 || t!=3){
		
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		cout<<"\n\t\t\t\t\t\t\tOpps!! Sorry Invalid Number"<<endl; 
		cout<<"\t\t\t\t\t\t\t___________________________"<<endl;
		}	
	}
void booking()
{
	int seats,bill;
	char ava;
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the booking system ***" << endl << endl;
	cout<<"\n\n\t\t\t\t\t\t\tDo you want to check the Avaliable Numbers of seats (y/n) ";
	cin>>ava;
	if(ava=='Y'|| ava=='y')
{	//while loop
		int i = 1; 
    while (i <= 10) {
        cout <<"\n\n\t\t\t\t\t\t\tThe Avaliable seats : "<< i <<endl;
        ++i;
    }		
}
	cout<<"\n\n\t\t\t\t\t\t\tPlease enter the Numbers of seats you want to book :  ";
	cin>>seats;
	cout<<"\n\t\t\t\t\t\t\tThe numbers of seat you booked are : "<<seats<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tIf you want to calculate all the bill of the seats Press a number :  ";
	cin>>bill;
	int total=1000;
	cout<<"\n\n\t\t\t\t\t\t\tThe total prize of 1 seat is  : "<<total<<endl;
	int A[seats];{
	for(int i=0; i<seats; i++)
		{
   cout<<"\n\n\t\t\t\t\t\t\tEnter the seat Numbers you want to chose in railway = ";
   cin>>A[seats];
		}
   for (int i=0; i<seats; i++)
   cout<<A[i];//arrays
   
}
	if(bill==1)
	{//for loop
		for(int i=0;i>=seats;i++)
   {
			cout<<"\n\n\t\t\t\t\t\t\tThe bill of a seat is :"<<total;
    }
        cout<<"\n\n\n\t\t\t\t\t\t\tThe Total bill is  "<<total*seats<<endl;
	}
	cout<<"\t\t\t";generate *ptr,m;//pointer to stucture
	ptr = &m;
	cout<<"\n\n\t\t\t\t\t\t\tWant to generate bill (Y/N)  : ";
	cin>>(*ptr).can;
	if((*ptr).can=='Y'|| (*ptr).can=='y')//if condition
	{
		cout<<"\n\n\n\n\t\t\t\t\t\t\tThe bill is generated Thank you for the booking"<<endl;
	end();
	}
	else
	end();
	}	
	void end()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                              RAILWAY RESERVATION SYSTEM                               |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                               Made by EMAN AMIR                       |@@\n";
		cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
 	
	
	}

