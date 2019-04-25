// Physics Calc

#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include "Input_Validation_Extended.h"

using namespace std;


void showmenu();
void handleoption(string);




int main()
{
	string option = "";
	showmenu();	
	
	cout << "Please select an option: " ;
	do 
	{	
			
		
		option = validateString(option); //getline(cin,option);
		handleoption(option);	
	}while(option != "e" &&option !="e");
	return 0;
}

	
void showmenu()
{
		cout << "\n Welcome, here's a list of what you can do:  " << endl;
		cout << "V = Velocity " << endl;
		cout << "A = Acceleration" << endl;
		cout << "Mn = Motion" << endl;
		cout << "W = Weight " << endl;
		cout << "E = Exit or Press ctrl + c " << endl ;
		cout << "Mo = Momentum" << endl;
		cout << "CLR or C = To Clear the page" << endl;	
}

void handleoption(string useroption)

	{
		int ds;
		int dt;
		int vl;
		int dv;
		int acl;
		int m;
		int g;
		int w;
		int v;
		int p;
		int n;
		int a;
		string vv;
		
		transform(useroption.begin(), useroption.end(), useroption.begin(), ::tolower);

		
		if(useroption == "v")
		{
			cout << "Please enter the DS and DT values:" << endl ;
			cout << "Value 1 : ";
			ds = validateInt(ds);  //cin >> ds ;
			cout << "Value 2 : " ;
			dt = validateInt(dt); //cin >> dt ;
			cout << "Please enter the unit of measurement : ";
			vv = validateString(vv); //cin >> vv ;
			
			vl = ds * dt;
			
			
			cout << "Using : DS * DT = Velocity " << endl ;
			cout << "The answer is: " << vl << vv << endl;
			
			cout << "Please Select an option : ";
			
		}
		else if(useroption == "a")
		{
			cout << "Please enter the DV and DT values: ";
			cout << "Please enter the Value of dv: " ;
			dv == validateInt(dv);	//cin >> dv;
			cout << "Please enter the Value of dt: ";
			dt == validateInt(dt);	//cin >> dt;
			
			cout << "Please enter the unit of measurement : ";
			vv = validateString(vv); //cin >> vv ;
			
			//multi
			
			acl = dt * dv;
			cout << "Using A = DV * DT" << endl;
			cout << "The answer is :"<< acl << " " << vv << endl;
			
			
			cout << "Please Select an option : ";
		}
		else if(useroption == "mn")
		{
			cout << "Please enter the M and A values :" << endl;
			cout << "Value 1 :  ";
			m = validateInt(m);
			cout << "Value 2 :  ";
			a = validateInt(a);
			cout << "Please enter the unit of measurement : ";
			vv = validateString(vv); //cin >> vv ;
			n = m * a;
			cout << "Using N = M * A" << endl;
			cout << "The Answer is : ";
			cout << n << vv << endl;
			
			
			
			cout << "Please Select an option : ";
		}
		else if(useroption == "w") 
		{
			cout << "please enter values m and g :" << endl;
			cout << "Please enter M: ";
			m = validateInt(m);	//cin >> m >> g;
			cout << "Please enter G: ";
			g = validateInt(g);
			cout << "Please enter the unit of measurement : ";
			vv = validateString(vv); //cin >> vv ;
			w = m * g;
			cout << "Using W = m * g " << endl;
			cout << "The Answer is : ";
			cout << w << vv << endl;
			
			cout << "Please Select an option : ";
		}
		else if(useroption == "e")
		{
			cout << "Thanks for using my program and have a good one :)" << endl ; 
		}
		else if(useroption == "mo")
		{
			cout << "Please enter values m and v :";
			m = validateInt(m);	//cin >> m ;
			cout << "V = " ;
			v = validateInt(v);	//cin >> v;
			p = m * v;
			cout << "Please enter the unit of measurement : ";
			vv = validateString(vv); //cin >> vv ;
			cout << "Using P = m * v" << endl;
			cout << "The Answer is : ";
			cout << p << vv << endl;
			
			cout << "Please Select an option : ";
		}
		else if(useroption == "clr")
		{
			system("cls");
		}
		else if(useroption == "c")
		{
				system("cls");
		}
		else
		{
			cout << "invalid respond, Please try again" << endl ;
		}
		
	}
