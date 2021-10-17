#include<iostream>


using namespace std;


class Bank
{
	char name[50];
	int accno;
	char type[10];
	int bal;



	public :

	Bank(void) {}
	void newacc(void);
	void deposit(void);
	void chk_bal(void);
	void withdraw(void);

};



void Bank :: newacc(void)
{
	int x;

	cout<< "For account opening  deposit 500 " ;
	cout << "\nPress 1 for opening account and  any key to exit " ;
	cin >>x;


	if(x == 1 )
	{
		cout << "\nEnter 14 digit  account number ";
		cin >> accno;
		bal = 500 ;

	}
	else
		exit(0);

}

void Bank :: deposit(void)
{
	int temp,amt;
	cout << "\n Enter account number to deposit amount :" ;
	cin>>temp;

	if(temp == accno)
	{
		cout<<"\nEnetr amount you want to deposit";
		cin >>amt;
		bal = bal+amt;
	}
	else
	{
		cout <<"\n Enter valid account number ";
		deposit();
	}
}


void Bank :: chk_bal(void)
{
	int temp;
	cout <<"\n Enter account number ";
	cin >>temp;
	if(temp == accno)
	{
		cout <<"\n Your remaining balancre is : " << bal;
	}
	else
	{
		cout<<"Invalid account number  ";
	
	}
}



void Bank :: withdraw(void)
{
	int a;
	chk_bal();

	cout<<"\nEnter amount to withdraw ";
	cin >> a;

	if(bal<a)
	{
		cout<<"\nInsufficient funds ";

	}
	else
	{
		bal = bal - a;
		cout <<"\n Transaction susessfully done ";
	}
}









int main()
{

	Bank b1;
	int x;


	do
	{
		cout<<"\n1.open account";
		cout<<"\n2.Amount deposit ";
		cout<<"\n3.check balance ";
		cout<<"\n4.withdraw ";
		cout<<"\n5.Quit ";
		cout<<"\nEnter appropriate number ";
		cin >>x;



	switch(x)
	{
		case 1:
			b1.newacc();
			break;
		case 2 :
			b1.deposit();
			break;
		case 3 :
			b1.chk_bal();
			break;
		case 4 :
			b1.withdraw();
			break;
		case 5 :
			exit(0);
		default :
			cout<<"\nInvalid input ";
			break;

	}


	}while(x!=5);



	return 0;
}
