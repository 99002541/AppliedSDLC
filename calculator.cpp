# include <iostream>
# include <cmath>
using namespace std;


float add(float n1,float n2)
{
	float  value;
	value=n1+n2;
	return value;
}

float sub(float n1,float n2)
{
	float  value;
    value=n1-n2;
	return value;
}

float mul(float n1,float n2)
{
	float  value;
    value=n1*n2;
	return value;
}

float div(float n1,float n2)
{
	float  value;
	if(n2==0)
	{
		cout <<"\nDivision of a number by zero is not possible!!!";
	}
	else
	{
	    value=n1/n2;
	    return value;
	}
}

float Sqrt() 
{ 
    float x;
	cout <<"Enter the Number:  ";
	cin >>x;
    if (x == 0 || x == 1) 
    return x; 
      float i = 1, result = 1; 
    while (result <= x) 
    { 
      i++; 
      result = i * i; 
    } 
    return i - 1; 
} 

float power()
{
	int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }  
	cout <<result;
    return 0;
}
void cuberoot()
{
	int number, result;
  cout << "Enter Number : ";
  cin >> number;
  result = pow(number, 1.0/3.0);
  cout << "\n\Cube root of " << number << " is: " << result;
}

float getnumbers()
{
	float num1;
	cout <<"Enter Number:  ";
	cin >>num1 ;
	return num1;
}

void display(float number)
{
	cout <<number;
}

void getdata()
{
	char op,choice;
	float num1,num2,val;
	do
	{
        cout << "Enter\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. SquareRoot\n 6. Power\n 7. CubeRoot\n ";
        cin >> op;
            switch(op)
            {
                 case '1':
					num1=getnumbers();
					num2=getnumbers();
               	    val=add(num1,num2);
			        display(val);
                    break;

                 case '2':
                    num1=getnumbers();
					num2=getnumbers();
                    val=sub(num1,num2);
			        display(val);
                    break;

                 case '3':
					num1=getnumbers();
					num2=getnumbers();
                    val=mul(num1,num2);
			        display(val);
                    break;

                 case '4':
					num1=getnumbers();
					num2=getnumbers();
                    val=div(num1,num2);
			        display(val);
                    break;
				 
				 case '5':
					 val=Sqrt();
					 display(val);
					 break;

				 case '6':
					 power();
					 break;

				 case '7':
					 cuberoot();
					 break;
		
                default:
                cout << "Error! operator is not correct";
                break;
            }
          
	cout << "\nEnter y/Y to Continue !!!";
    cin >>choice;
	}  
	while(choice=='Y' || choice=='y');
}
int main()
{
    getdata();
	return 0;
}

