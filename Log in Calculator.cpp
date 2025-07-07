#include <iostream>
#include <fstream>
#include <string.h>
#include <cmath>

using namespace std;

void login();
void registration();
void forgot();
void calculator();

int main()
{
	int c;
	
	system("cls");
	cout << "\t\t\t________________________________________________________________________________\n\n";
	cout << "\t\t\t                                  Welcome To Login Page                         \n\n";
	cout << "\t\t\t__________________________________        MENU         _________________________\n\n\n";
	cout << "\t\t\t| Press 1 to LOGIN |" << endl;
	cout << "\t\t\t| Press 2 to REGISTER |" << endl;
	cout << "\t\t\t| Press 3 if you FORGOT |" << endl;
	cout << "\t\t\t| Press 4 to EXIT |\n" << endl;
	cout << "\t\t\t> Please Enter Your Choice: ";
	cin >> c;
	cout << endl;
	
	switch (c)
	{
		case 1:
			login();
			break;
		
		case 2:
			registration();
			break;
		
		case 3:
			forgot();
			break;
		
		case 4:
			cout << "\t\t\t|                   G O O D B Y E :C";
			break;
			
		default:
			system("cls");
			cout << "\t\t\tPlease select from the options given below: \n" << endl;
			cout << "\t\t\t"; system("pause");
			main();
			
	}
	
}

void login()
{
	bool userLogged = false;
	string userId, userPass, id, pass;
	system("cls");
	cout << "\t\t\t Please Enter The Username & Password: " << endl;
	cout << "\t\t\t> USERNAME: ";
	cin >> userId;
	cout << "\t\t\t> PASSWORD: ";
	cin >> userPass;
	
	ifstream read("Database.txt");
	
	while (read >> id >> pass)
	{
		if (id == userId && pass == userPass)
		{
			userLogged = true;
			system("cls");
		}
	}
	read.close();
	
	if (userLogged)
	{
		cout <<"\t\t\t" << userId << ": Your LOGIN was sucessfull! \n \t\t\t| Thanks for logging in!" << endl;
		cout << "\t\t\t"; system("pause");
		calculator();
	}
	else 
	{
		system("cls");
		cout << "\t\t\t LOGIN ERROR \n\t\t\t Please check your username & password!" << endl;
		system("pause");
		main();
	}
	
}

void registration()
{
	string ruserId, rPass;
	system("cls");
	cout << "\t\t\t> Enter The Username: ";
	cin >> ruserId;
	cout << "\t\t\t> Enter The Password: ";
	cin >> rPass;
	
	ofstream write("Database.txt", ios::app);
	write << ruserId << " " << rPass << endl;
	system("cls");
	cout << "\t\t\tRegistration is successfull! " << endl;
	cout << "\t\t\t"; system("pause");
	main();
}


void forgot()
{
	int op;
	system("cls");
	cout << "\t\t\t You Forgot The Password?  No worries :D \n";
	cout << "\t\t\t| Press 1 to search your by username " << endl;
	cout << "\t\t\t| Press 2 to go back to the main menu " << endl;
	cout << "\t\t\t> Enter Your Choice: ";
	cin >> op;
	
	switch (op)
	{
		case 1:
		{
			int count = 0;
			string suserId, sId, sPass;
			cout << "\n\t\t\t> Enter the username which you remembered: ";
			cin >> suserId;
			
			ifstream read("Database.txt");
			
			while (read >> sId >> sPass)
			{
				if (sId == suserId)
				{
					count = 1;
				}		
			}
			read.close();
			if (count == 1)
			{
				cout << "\t\t\tYour Account Has Been Found! \n";
				cout << "\t\t\tYour Password is: " << sPass << endl;
				cout << "\t\t\t"; system("pause");
				main();
			}
			else
			{
				cout << "\t\t\t Sorry! We couldn't find your account :C \n";
				cout << "\t\t\t"; system("pause");
				main();
			}
		}
		break;
		
		case 2:
			int main();
			break;
		
		default:
			cout << "\t\t\t Wrong Choice! Please Try Again!!!" << endl;
			cout << "\t\t\t"; system("pause");
			forgot();
	}
}

void calculator()
{
	char choice;
	
	cout << "\t\t\tWelcome To Our Menu Driven General Purpose Calculator! " << endl;
	cout << "\t\t\tWe Provide the following services: " << endl;
	cout << "\t\t\t1. Addition\n\t\t\t2. Subtraction\n\t\t\t3. Multiplication\n\t\t\t4. Division\n\t\t\t5. Factorial\n\t\t\t6. Prime\n\t\t\t7. Even \\ Odd\n\t\t\t8. Square Of N\n\t\t\t9. Cube Of N\n\t\t\ta. Square Root Of N \n\t\t\t0. Quadratic Equation" << endl;
	
	cout << "\t\t\t> What would you like to order: ";
	cin >> choice;
	cout << endl;
	
	do
	{
		if (choice == '1')
	{
		int n;
		cout << "\t\t\t\> How many numbers would you like to add?\n\t\t\t";
		cin >> n;
		
		if ( n>0 )
		{
			int numbers[n];
			int sum = 0;
			
			cout << "\t\t\t> Enter " << n << " Number(s) in row:" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << "\t\t\t";
				cin >> numbers[i];
				sum += numbers[i];
			}
			cout << "\t\t\t| Sum Of " << n << " Number(s) is: " << sum;
		}
		else if  ( n < 0 || n == 0 )
		{
			cout << "Run again!";
			exit;
		}
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice;
	}
	else if (choice == '2')
	{
		int n;
		cout << "\t\t\t> How many numbers would you like to sub? (Can do till 4)" << endl;
		cin >> n;
		
		if ( n == 2 )
		{
			int num1, num2, sub;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		
    		sub = num1 - num2;
			
			cout << "\t\t\t| Subtraction Of " << n << " Number(s) is: " << sub;
		}
		else if ( n == 3 )
		{
			int num1, num2, num3, sub;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		cout << "\t\t\t> Enter The Third Number: ";
    		cin >> num3;
    		
    		sub = num1 - num2 - num3;
			
			cout << "\t\t\t| Subtraction Of " << n << " Number(s) is: " << sub;
		}
		else if ( n == 4 )
		{
			int num1, num2, num3, num4, sub;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		cout << "\t\t\t> Enter The Third Number: ";
    		cin >> num3;
    		cout << "\t\t\t> Enter The Forth Number: ";
    		cin >> num4;
    		
    		sub = num1 - num2 - num3 - num4;
			
			cout << "\t\t\t| Subtraction Of " << n << " Number(s) is: " << sub;
		}
		else if ( n < 0 || n == 0 )
		{
			cout << "\t\t\t| Run again!";
			system("pause");
			calculator();
		}
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t" << endl;
		cin >> choice;	
	}
	else if (choice == '3')
	{
		int n;
		cout << "\t\t\t> How many numbers would you like to multiply?" << endl;
		cin >> n;
		
		if ( n>0 )
		{
			int numbers[n];
			int mul = 1;
			
			cout << "\t\t\t> Enter " << n << " Number(s) in row:" << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> numbers[i];
				mul *= numbers[i];
			}
			cout << "\t\t\t| Multiplication Of " << n << " Number(s) is: " << mul;
		}
		else if  ( n < 0 || n == 0 )
		{
			cout << "\t\t\t| Run again!";
			system("pause");
			calculator();
		}
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t" << endl;
		cin >> choice;	
	}
	else if (choice == '4')
	{
		int n;
		cout << "\t\t\t> How many numbers would you like to div? (Can do till 4)" << endl;
		cin >> n;
		
		if ( n == 2 )
		{
			int num1, num2, div;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		
    		div = num1 / num2;
			
			cout << "\t\t\t> Subtraction Of " << n << " Number(s) is: " << div;
		}
		else if ( n == 3 )
		{
			int num1, num2, num3, div;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		cout << "\t\t\t> Enter The Third Number: ";
    		cin >> num3;
    		
    		div = num1 - num2 - num3;
			
			cout << "\t\t\t> Subtraction Of " << n << " Number(s) is: " << div;
		}
		else if ( n == 4 )
		{
			int num1, num2, num3, num4, div;
			
			cout << "\t\t\t> Enter The First Number: ";
    		cin >> num1;
    		cout << "\t\t\t> Enter The Second Number: ";
    		cin >> num2;
    		cout << "\t\t\t> Enter The Third Number: ";
    		cin >> num3;
    		cout << "\t\t\t> Enter The Forth Number: ";
    		cin >> num4;
    		
    		div = num1 - num2 - num3 - num4;
			
			cout << "\t\t\t> Subtraction Of " << n << " Number(s) is: " << div;
		}
		else if ( n < 0 || n == 0 )
		{
			cout << "\t\t\t| Run again!";
			system("pause");
			calculator();
		}
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t" << endl;
		cin >> choice;
	}
	else if (choice == '5')
	{
		int n;
    	long fact = 1.0;
		
		cout << "\t\t\t> Enter a positive integer: ";
    	cin >> n;

    	if (n < 0)
        cout << "\t\t\t| Error! Factorial Of A Negative Number Doesn't Exist!";
    	else 
		{
        	for(int i = 1; i <= n; ++i)
		{
            fact *= i;
        }
        cout << "\t\t\t| Factorial Of " << n << " = " << fact;    
   		}
   		
   		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t" << endl;
		cin >> choice;
	}
	else if (choice == '6')
	{
		int n;
		bool is_prime = true;

  		cout << "\t\t\t> Enter a positive integer: ";
  		cin >> n;

  		if (n == 0 || n == 1)
		{
    		is_prime = false;
		}
	
  		for (int i = 2; i <= n/2; ++i)
		{
    		if (n % i == 0)
			{
      			is_prime = false;
      			break;
    		}
  		}

  	if (is_prime)
    	cout << n << " Is A Prime Number!";
  	else
    	cout << n << " Is Not A Prime Number!";
    	
    	cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t" << endl;
		cin >> choice;
	}
	else if (choice == '7')
	{
		int n;
		
  		cout << "\t\t\t> Enter An Integer: ";
  		cin >> n;

  		if ( n % 2 == 0)
    	cout << n << " is Even!";
  		else if ( n % 3 == 0)
    	cout << n << " is Odd!";
    	
    	cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice;
	}
	else if (choice == '8')
	{
		int n;
		
		cout << "\t\t\t> Enter An Integer: ";
		cin >> n;
		
		cout << "\t\t\t| Square Of " << n << " = " << n * n;
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice;
	}
	else if (choice == '9')
	{
		int n;
		
		cout << "\t\t\t> Enter An Integer: ";
		cin >> n;
		
		cout << "\t\t\t> Cube Of " << n << " = " << n * n * n;
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice;
	}
	else if (choice == '0')
	{
		double a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
	    cout << "\t\t\t> Enter Coefficients; a, b and c: " << endl;
	    cin >> a >> b >> c;
	    discriminant = b*b - 4*a*c;
	    
	    if (discriminant > 0) {
	        x1 = (-b + sqrt(discriminant)) / (2*a);
	        x2 = (-b - sqrt(discriminant)) / (2*a);
	        cout << "\t\t\t| Roots are real and different." << endl;
	        cout << "\t\t\t| x1 = " << x1 << endl;
	        cout << "\t\t\t| x2 = " << x2 << endl;
	    }
	    
	    else if (discriminant == 0) {
	        cout << "\t\t\t| Roots are real and same." << endl;
	        x1 = -b/(2*a);
	        cout << "\t\t\t| x1 = x2 =" << x1 << endl;
	    }
	
	    else {
	        realPart = -b/(2*a);
	        imaginaryPart =sqrt(-discriminant)/(2*a);
	        cout << "\t\t\t| Roots are complex and different."  << endl;
	        cout << "\t\t\t| x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
	        cout << "\t\t\t| x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	    }
	    
	    cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice;  
	}
	else if (choice == 'a')
	{
		double n;
		
		cout << "\t\t\t> Enter Any Number: ";
		cin >> n;
		
		if (n == 0)
		{
			cout << "\t\t\t> Square root of 0 is 0!" << endl;
		}
		else if (n < 0)
		{
			cout << "\t\t\t> Square-root of " << n << " = " << sqrt(-n) << "i" << endl;
		}
		else
		{
			cout << "\t\t\t> Square-root of " << n << " = " << sqrt(n) << endl;
		}
		
		cout << "\n \n\t\t\t> Would you like to continue?(You Can Check Again By Inputting The Number)(Or Enter N To Exit)\n\t\t\t";
		cin >> choice; 
	}
	}
	while(choice != 'N' && choice != 'n');
	cout << "\t\t\t| Good Bye :C" << endl;
	cout << "\t\t\t"; system("pause");
	main();
}
