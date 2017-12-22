#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<Windows.h>
#include<mmsystem.h>
#include "conio.h"
#include "dos.h"
using namespace std;
ofstream aa, haa, bb, hbb, cc, hcc, dd, hdd, ee, hee; //input to file
ifstream aaa, bbb, ccc, ddd, eee; //output from file

class Date //date 
{
private:
	int day;
	int month;
	int year;
public:
	Date() :day(15), month(5), year(2017)
	{}
	Date(int a, int b, int c) :day(a), month(b), year(c)
	{

	}
	void outputdate()
	{
		cout << day << ":" << month << ":" << year << endl;
	}
};
class currentaccount :public Date //holding all information about shoes sent to a company
{
	string company;
	string party;
	double cost;
	string Quality;
	string colour;
	float size;
	string paymenttype;
public:
	currentaccount() :Date(), company(""), party(""), cost(0), Quality(""), colour(""), size(0.0), paymenttype("")
	{}
	currentaccount(int a, int b, int c, string d, string e, double f, string g, string h, float i, string j) :Date(a, b, c)
	{
		company = d;
		party = e;
		cost = f;
		Quality = g;
		colour = h;
		size = i;
		paymenttype = j;
	}
	void inputcurrentaccount()
	{
		//entering data
		cout << endl << endl << "CURRENT ACCOUNT" << endl;
		cout << "Company Name: ";
		cin >> company;
		cout << "Party Name: ";
		cin >> party;
		cout << "Total Cost: ";
		cin >> cost;
		cout << "Quality: ";
		cin >> Quality;
		cout << "Colour: ";
		cin >> colour;
		cout << "Size: ";
		cin >> size;
		cout << "Payment Type: ";
		cin >> paymenttype;
	}
	void outputcurrentaccount()
	{
		aa.open("currentaccount.txt");//storing in a file and overwriting
		haa.open("historycurrentaccount.txt", std::ios_base::app);//storing in a file while not deleting previous one
		Date::outputdate();
		haa << "----" << endl;
		aa << "<<<<CURRENT ACCOUNT>>>>" << endl;
		aa << "Company Name: " << company << endl;
		aa << "Party Name: " << party << endl;
		aa << "Total Cost: " << cost << endl;
		aa << "Qoality: " << Quality << endl;
		aa << "Colour: " << colour << endl;
		aa << "Size: " << size << endl;
		aa << "Payment Type: " << paymenttype << endl;
		haa << "<<<<CURRENT ACCOUNT>>>>" << endl;
		haa << "Company Name: " << company << endl;
		haa << "Party Name: " << party << endl;
		haa << "Total Cost: " << cost << endl;
		haa << "Qoality: " << Quality << endl;
		haa << "Colour: " << colour << endl;
		haa << "Size: " << size << endl;
		haa << "Payment Type: " << paymenttype << endl;
		//printing in console
		cout << "<<<<CURRENT ACCOUNT>>>>" << endl;
		cout << "Company Name: " << company << endl;
		cout << "Party Name: " << party << endl;
		cout << "Total Cost: " << cost << endl;
		cout << "Qoality: " << Quality << endl;
		cout << "Colour: " << colour << endl;
		cout << "Size: " << size << endl;
		cout << "Payment Type: " << paymenttype << endl;
	}
};
class Bank :public Date  //all bank information and money transaction
{
	string explanations;
	double deposit;
	double withdraw;
	string creditcard;
	string moneyorder;
	double balance;
public:
	Bank() :Date(), explanations(""), deposit(0), withdraw(0), creditcard(""), moneyorder(""), balance(0.0)
	{}
	Bank(int a, int b, int c, string d, double e, double f, string g, string h, double i) :Date(a, b, c)
	{
		explanations = d;
		deposit = e;
		withdraw = f;
		creditcard = g;
		moneyorder = h;
		balance = i;
	}
	void inputbank()
	{
		//entering data
		cout << endl << endl << "BANK" << endl;
		cout << "Explanation: ";
		cin >> explanations;
		cout << "Deposit amount: ";
		cin >> deposit;
		cout << "Withdraw amount: ";
		cin >> withdraw;
		cout << "Credit Card: ";
		cin >> creditcard;
		cout << "MoneyOrder: ";
		cin >> moneyorder;
		cout << "Balance: ";
		cin >> balance;
	}
	void outputbank()
	{
		bb.open("bank.txt");//storing in a file and overwriting
		hbb.open("historyBank.txt", std::ios_base::app);//storing in a file while not deleting previous one
		Date::outputdate();
		bb << "BANK" << endl;
		bb << "Explanation: " << explanations << endl;
		bb << "Deposit amount: " << deposit << endl;
		bb << "Withdraw amount: " << withdraw << endl;
		bb << "Credit Card: " << creditcard << endl;
		bb << "MoneyOrder: " << moneyorder << endl;
		bb << "Balance: " << balance << endl;
		hbb << "----" << endl;
		hbb << "<<<<BANK>>>>" << endl;
		hbb << "Explanation: " << explanations << endl;
		hbb << "Deposit amount: " << deposit << endl;
		hbb << "Withdraw amount: " << withdraw << endl;
		hbb << "Credit Card: " << creditcard << endl;
		hbb << "MoneyOrder: " << moneyorder << endl;
		hbb << "Balance: " << balance << endl;
		//printing in console
		cout << "<<<<BANK>>>>" << endl;
		cout << "Explanation: " << explanations << endl;
		cout << "Deposit amount: " << deposit << endl;
		cout << "Withdraw amount: " << withdraw << endl;
		cout << "Credit Card: " << creditcard << endl;
		cout << "MoneyOrder: " << moneyorder << endl;
		cout << "Balance: " << balance << endl;
	}
};
class stocks :public Date //information about stock sent to suppliers
{
private:
	string explanation;
	string compny;
	double in;
	double out;
	double returned;
	double flawed;
	string Quality;
	string colour;
	float size;
	string party;
public:
	stocks() :Date(), explanation(""), compny(""), in(0), out(0), returned(0), flawed(0), Quality(""), colour(""), size(0), party("")
	{

	}
	stocks(int a, int b, int c, string d, string e, double f, double g, double h, double i, string j, string k, float l, string m) :Date(a, b, c)
	{
		explanation = d;
		compny = e;
		in = f;
		out = g;
		returned = h;
		flawed = i;
		Quality = j;
		colour = k;
		size = l;
		party = m;

	}
	void inputstocks()
	{
		//entering data
		cout << endl << endl << "STOCKS" << endl;
		cout << "Explanation: ";
		cin >> explanation;
		cout << "Company name : ";
		cin >> compny;
		cout << "IN: ";
		cin >> in;
		cout << "OUT: ";
		cin >> out;
		cout << "Returned : ";
		cin >> returned;
		cout << "Flawed : ";
		cin >> flawed;
		cout << "Quality :";
		cin >> Quality;
		cout << "Colour :";
		cin >> colour;
		cout << "Size :";
		cin >> size;
		cout << "Party: ";
		cin >> party;
	}
	void outputstock()
	{
		cc.open("stocks.txt");//storing in a file and overwriting
		hcc.open("historyStocks.txt", std::ios_base::app);//storing in a file while not deleting previous one
		Date::outputdate();
		cc << "STOCKS" << endl;
		cc << "Explanation: " << explanation << endl;
		cc << "Company name : " << compny << endl;
		cc << "IN: " << in << endl;
		cc << "OUT: " << out << endl;
		cc << "Returned : " << returned << endl;
		cc << "Flawed : " << flawed << endl;
		cc << "Quality :" << Quality << endl;
		cc << "Colour :" << colour << endl;
		cc << "Size :" << size << endl;
		cc << "Party: " << party << endl;
		hcc << "----" << endl;
		hcc << "<<<<STOCKS>>>>" << endl;
		hcc << "Explanation: " << explanation << endl;
		hcc << "Company name : " << compny << endl;
		hcc << "IN: " << in << endl;
		hcc << "OUT: " << out << endl;
		hcc << "Returned : " << returned << endl;
		hcc << "Flawed : " << flawed << endl;
		hcc << "Quality :" << Quality << endl;
		hcc << "Colour :" << colour << endl;
		hcc << "Size :" << size << endl;
		hcc << "Party: " << party << endl;
		//printing in console
		cout << "----" << endl;
		cout << "<<<<STOCKS>>>>" << endl;
		cout << "Explanation: " << explanation << endl;
		cout << "Company name : " << compny << endl;
		cout << "IN: " << in << endl;
		cout << "OUT: " << out << endl;
		cout << "Returned : " << returned << endl;
		cout << "Flawed : " << flawed << endl;
		cout << "Quality :" << Quality << endl;
		cout << "Colour :" << colour << endl;
		cout << "Size :" << size << endl;
		cout << "Party: " << party << endl;
	}
};
class sales :public Date //information about sales
{
	string explanation;
	string paymenttype;
	string Quality;
	string Colour;
	float size;
	string party;
	double price;
public:
	sales() :Date(), explanation(""), paymenttype(""), Quality(""), Colour(""), size(0.0), party(""), price(0)
	{
	}
	sales(int a, int b, int c, string d, string e, string f, string g, float h, string i, double j) :Date(a, b, c)
	{
		explanation = d;
		paymenttype = e;
		Quality = f;
		Colour = g;
		size = h;
		party = i;
		price = j;
	}
	void inputsales()
	{
		//entering data
		cout << endl << endl << "SALES" << endl;
		cout << "Explanation: ";
		cin >> explanation;
		cout << "Payment Type: ";
		cin >> paymenttype;
		cout << "Quality :";
		cin >> Quality;
		cout << "Colour :";
		cin >> Colour;
		cout << "Size :";
		cin >> size;
		cout << "Party: ";
		cin >> party;
		cout << "Price: ";
		cin >> price;
	}
	void outputsales()
	{
		Date::outputdate();
		dd.open("sales.txt");//storing in a file and overwriting
		hdd.open("historySales.txt", std::ios_base::app);//storing in a file while not deleting previous one
		dd << "SALES" << endl;
		dd << "Explanation: " << explanation << endl;
		dd << "Payment Type: " << paymenttype << endl;
		dd << "Quality :" << Quality << endl;
		dd << "Colour :" << Colour << endl;
		dd << "Size :" << size << endl;
		dd << "Party: " << party << endl;
		dd << "Price: " << price << endl;
		hdd << "----" << endl;
		hdd << "<<<<SALES>>>>" << endl;
		hdd << "Explanation: " << explanation << endl;
		hdd << "Payment Type: " << paymenttype << endl;
		hdd << "Quality :" << Quality << endl;
		hdd << "Colour :" << Colour << endl;
		hdd << "Size :" << size << endl;
		hdd << "Party: " << party << endl;
		hdd << "Price: " << price << endl;
		//printing in console
		cout << "----" << endl;
		cout << "<<<<SALES>>>>" << endl;
		cout << "Explanation: " << explanation << endl;
		cout << "Payment Type: " << paymenttype << endl;
		cout << "Quality :" << Quality << endl;
		cout << "Colour :" << Colour << endl;
		cout << "Size :" << size << endl;
		cout << "Party: " << party << endl;
		cout << "Price: " << price << endl;
	}
};
class expences :public Date //exlanation of total amount transferred 
{
	string explanation;
	string paymenttype;
	double total;
public:
	expences() :Date(), explanation(""), paymenttype(""), total(0)
	{}
	expences(int a, int b, int c, string d, string e, double f) :Date(a, b, c)
	{
		explanation = d;
		paymenttype = e;
		total = f;
	}
	void inputexpences()
	{
		//entering data
		cout << endl << endl << "EXPENCES" << endl;
		cout << "Explanation: ";
		cin >> explanation;
		cout << "Payment Type: ";
		cin >> paymenttype;
		cout << "Total :";
		cin >> total;
	}
	void outputexpences()
	{
		Date::outputdate();
		ee.open("expences.txt");//storing in a file and overwriting
		hee.open("historyExpences.txt", std::ios_base::app);//storing in a file while not deleting previous one
		ee << "EXPENCES" << endl;
		ee << "Explanation: " << explanation << endl;
		ee << "Payment Type: " << paymenttype << endl;
		ee << "Total :" << total << endl;
		hee << "----" << endl;
		hee << "<<<<EXPENCES>>>>" << endl;
		hee << "Explanation: " << explanation << endl;
		hee << "Payment Type: " << paymenttype << endl;
		hee << "Total :" << total << endl;
		//printing in console
		cout << "----" << endl;
		cout << "<<<<EXPENCES>>>>" << endl;
		cout << "Explanation: " << explanation << endl;
		cout << "Payment Type: " << paymenttype << endl;
		cout << "Total :" << total << endl;
	}
};
void graphics()
{
	system("cls");//clear screen
	system("color 3f");//background and font color
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "\n\n\n\t\t\t\t\t     Please wait while loading\n\n";
	char a1 = 177;
	char b1 = 219;
	cout << "\t\t\t\t    ";
	for (int i = 0; i <= 45; i++)
	{
		cout << a1;
	}
	cout << "\r";
	cout << "\t\t\t\t    ";
	for (int i = 0; i <= 45; i++)
	{
		cout << b1;
		for (int j = 0; j <= 1e7; j++);
	}
}
void main()
{
	//graphics
	system("color 3f");//background and font color
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "\n\n\n\t\t\t\t\t     Please wait while loading\n\n";
	char a1, b1;
	a1 = 177;
	b1 = 219;
	cout << "\t\t\t\t    ";
	for (int i = 0; i <= 45; i++)
	{
		cout << a1;
	}
	cout << "\r";
	cout << "\t\t\t\t    ";
	for (int i = 0; i <= 45; i++)
	{
		cout << b1;
		for (int j = 0; j <= 2e7; j++);
	}

	system("cls");

	system("color 3f");//background and font color
	char y;
	int n, m;
	Date d;
	currentaccount ca;
	Bank b;
	stocks s;
	sales sal;
	expences ex;
	string f;
	while (1)
	{

		system("cls");//clear screen
		cout << endl;
		//menu
		cout << "\t\t\t\t" << "******************************************" << endl;
		cout << "\t\t\t\t" << "******************************************" << endl;
		cout << "\t\t\t\t" << "***       " << "1 -> CURRENT ACCOUNT" << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "2 -> BANK           " << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "3 -> STOCKS         " << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "4 -> SALES          " << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "5 -> EXPENCES       " << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "6 -> History        " << "         ***" << endl;
		cout << "\t\t\t\t" << "***       " << "0 -> EXIT           " << "         ***" << endl;
		cout << "\t\t\t\t" << "******************************************" << endl;
		cout << "\t\t\t\t" << "******************************************" << endl;
		cout << endl << endl << endl << "\t\t\t\t" << "Enter Number:";
		cin >> n;

		if (n == 1)
		{
			//graphics
			graphics();

			system("cls");//clear screen
			ca.inputcurrentaccount();//input
			ca.outputcurrentaccount();//output
			cout << endl;
			cout << "For WebPage Enter Y: ";
			cin >> y;
			if (y == 'y' || y == 'Y')
			{
				cout << "Opening WEBPAGE";
				for (int j = 0; j <= 1e7; j++);

				cout << endl;
				ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/CurrentAcount.html", NULL, NULL, SW_SHOWDEFAULT);
			}
		}
		else if (n == 2)
		{
			//graphics
			graphics();

			system("cls");//clear screen
			b.inputbank();//input
			b.outputbank();//output
			cout << endl;
			cout << "For WebPage Enter Y: ";
			cin >> y;
			if (y == 'y' || y == 'Y')
			{

				cout << "Opening WEBPAGE";
				for (int j = 0; j <= 1e7; j++);

				cout << endl;
				ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/Bank.html", NULL, NULL, SW_SHOWDEFAULT);
			}
		}
		else if (n == 3)
		{
			//graphics
			graphics();
			system("cls");//clear screen
			s.inputstocks();//input
			s.outputstock();//output
			cout << endl;
			cout << "For WebPage Enter Y: ";
			cin >> y;
			if (y == 'y' || y == 'Y')
			{
				cout << "Opening WEBPAGE";
				for (int j = 0; j <= 1e7; j++);

				cout << endl;
				ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/Stocks.html", NULL, NULL, SW_SHOWDEFAULT);
			}
		}
		else if (n == 4)
		{
			//graphics
			graphics();

			system("cls");//clear screen
			sal.inputsales();//input
			sal.outputsales();//output
			cout << endl;
			cout << "For WebPage Enter Y: ";
			cin >> y;
			if (y == 'y' || y == 'Y')
			{
				cout << "Opening WEBPAGE";
				for (int j = 0; j <= 1e7; j++);

				cout << endl;
				ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/Sales.html", NULL, NULL, SW_SHOWDEFAULT);
			}
		}
		else if (n == 5)
		{
			//graphics
			graphics();

			system("cls");//clear screen
			ex.inputexpences();//input
			ex.outputexpences();//output
			cout << endl;
			cout << "For WebPage Enter Y: ";
			cin >> y;
			if (y == 'y' || y == 'Y')
			{
				cout << "Opening WEBPAGE";
				for (int j = 0; j <= 1e7; j++);

				cout << endl;
				ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/Expances.html", NULL, NULL, SW_SHOWDEFAULT);
			}
		}

		else if (n == 0)
		{
			break;
		}
		else if (n == 6)
		{
			while (1)
			{
				//graphics
				graphics();

				system("cls");//clear screen
				cout << endl << endl;
				//history menu
				cout << "\t\t\t\t" << "**************************************************" << endl;
				cout << "\t\t\t\t" << "**************************************************" << endl;
				cout << "\t\t\t\t" << "***       " << "1 -> CURRENT ACCOUNT History" << "         ***" << endl;
				cout << "\t\t\t\t" << "***       " << "2 -> BANK History           " << "         ***" << endl;
				cout << "\t\t\t\t" << "***       " << "3 -> STOCKS History         " << "         ***" << endl;
				cout << "\t\t\t\t" << "***       " << "4 -> SALES History          " << "         ***" << endl;
				cout << "\t\t\t\t" << "***       " << "5 -> EXPENCES History       " << "         ***" << endl;
				cout << "\t\t\t\t" << "***       " << "0 -> EXIT                  " << "         ***" << endl;
				cout << "\t\t\t\t" << "**************************************************" << endl;
				cout << "\t\t\t\t" << "**************************************************" << endl;
				cout << endl << endl << endl << "\t\t\t\t" << "Enter Number:";
				cin >> m;
				if (m == 1)
				{
					//graphics
					graphics();
					system("cls");
					aaa.open("historycurrentaccount.txt");//data extraction from txt file
					while (1)
					{
						//printing txt file data in console
						getline(aaa, f);
						cout << f << endl;
						if (f == "\0")
						{
							break;
						}

					}
					cout << "For WebPage Enter Y: ";
					cin >> y;
					if (y == 'y' || y == 'Y')
					{
						cout << "Opening WEBPAGE";
						for (int j = 0; j <= 1e7; j++);

						cout << endl;
						ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/cah.html", NULL, NULL, SW_SHOWDEFAULT);
					}
				}
				else if (m == 2)
				{
					//graphics
					graphics();
					system("cls");
					bbb.open("historyBank.txt");//data extraction from txt file
					while (1)
					{
						//printing txt file data in console
						getline(bbb, f);
						cout << f << endl;
						if (f == "\0")
						{
							break;
						}

					}
					cout << "For WebPage Enter Y: ";
					cin >> y;
					if (y == 'y' || y == 'Y')
					{
						cout << "Opening WEBPAGE";
						for (int j = 0; j <= 1e7; j++);

						cout << endl;
						ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/bh.html", NULL, NULL, SW_SHOWDEFAULT);
					}
				}
				else if (m == 3)
				{
					//graphics
					graphics();

					system("cls");//clear screen
					ccc.open("historyStocks.txt");//data extraction from txt file
					while (1)
					{
						//printing txt file data in console
						getline(ccc, f);
						cout << f << endl;
						if (f == "\0")
						{
							break;
						}
					}
					cout << "For WebPage Enter Y: ";
					cin >> y;
					if (y == 'y' || y == 'Y')
					{
						cout << "Opening WEBPAGE";
						for (int j = 0; j <= 1e7; j++);

						cout << endl;
						ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/sth.html", NULL, NULL, SW_SHOWDEFAULT);
					}
				}
				else if (m == 4)
				{
					//graphics
					graphics();
					system("cls");//clear screen
					ddd.open("historySales.txt");//data extraction from txt file
					while (1)
					{
						//printing txt file data in console
						getline(ddd, f);
						cout << f << endl;
						if (f == "\0")
						{
							break;
						}

					}
					cout << "For WebPage Enter Y: ";
					cin >> y;
					if (y == 'y' || y == 'Y')
					{
						cout << "Opening WEBPAGE";
						for (int j = 0; j <= 1e7; j++);

						cout << endl;
						ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/sh.html", NULL, NULL, SW_SHOWDEFAULT);
					}
				}
				else if (m == 5)
				{
					//graphics
					graphics();

					system("cls");//clear screen
					eee.open("historyExpences.txt");//data extraction from txt file
					while (1)
					{
						//printing txt file data in console
						getline(eee, f);
						cout << f << endl;
						if (f == "\0")
						{
							break;
						}

					}
					cout << "For WebPage Enter Y: ";
					cin >> y;
					if (y == 'y' || y == 'Y')
					{
						cout << "Opening WEBPAGE";
						for (int j = 0; j <= 1e7; j++);

						cout << endl;
						ShellExecuteA(NULL, "open", "file:///C:/Users/HP/Documents/Visual%20Studio%202013/Projects/Oop%20project%20Sheo%20Maker/Oop%20project%20Sheo%20Maker/eh.html", NULL, NULL, SW_SHOWDEFAULT);
					}
				}
				else if (m == 0)
				{
					break;
				}
				else
				{
					//graphics
					graphics();
					system("cls");
					cout << "Invalid Input" << endl;
				}
			}

		}
		else
		{
			//graphics
			graphics();
			system("cls");//clear screen
			cout << "Invalid Input" << endl;
			cout << "Enter Again";
			cout << endl;
		}
		system("pause");
	}
}