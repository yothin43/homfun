#include <iostream>
#include <string>
using namespace std;
int update_balance(string ,float ,float &balance );
int main()
{
	
	float dollars,balance = 10000; 
	string command;

	do{ 
	
	cout<<"0.Exit\n";
	cout<<"You balance"<<balance <<endl;
	cout<<"Input Command (1.or withdraw, 2.deposit) : ";
	cin>>command;
	if (command == "0" )
	break;
	cout<<"Input amount : ";
	cin>>dollars;
	cout<<"Your  balance : "<<update_balance(command,dollars, balance )<<endl;
	}while(command != "0" );
	cout<<"Exit."<<endl;
		

}
int update_balance(string  command,float dollars,float &balance )
{
	    if (command == "1")
		{
		balance = balance - dollars;
		}
		
		else if (command == "2")
		{
		balance = balance + dollars;
        }

		return(balance);
}