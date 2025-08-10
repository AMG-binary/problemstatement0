#include <iostream>
#include <cmath>
using namespace std;


// Level 1 functions
int add(int a, int b) 
{
 cout << a << " + " << b << " = " << a + b << endl;
 return a + b;
}

int sub(int a, int b)
{
    cout << a << " - " << b << " = " << a - b << endl;
    return a - b;
}

int multiplication(int a, int b)
{
  cout << a << " * " << b << " = " << a * b << endl;
  return a * b;
}

int division(int a, int b) 
{
   if (b == 0) {
       cout << "Error: Division by zero!" << endl;
       return 0;
   }
   cout << a << " / " << b << " = " << a / b << endl;
   return a / b;
}



double power(double x, double n)
{
    double prod = 1;
    for(int i = 0; i < n; i++)
        prod *= x;

    return prod;
}



double sqrtCalc(double a) 
{
   return power(a, 0.5);
}

// level 2 functions

double nlog(double x)
{
    double y = (x - 1) / (x + 1);
    double sum = 0.0;

    for (double i = 1; i < 100; i += 2) 
    {
        sum += power(y, i) / i;
    }

    return 2 * sum;
}



double logCalc(double a)
{
    return nlog(a) / 2.303;
}

double exp( double a)
{
    return power(2.7182818285 , a) ;
}

// level 3 functions

double sine(double x)
{
    double term = x;
    double sum = term;
    for (int n = 1; n <= 10; n++) 
    {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
    }
    return sum;
}

double cosine(double x)
{
    double term = 1;
    double sum = term;
    for (int n = 1; n <= 10; n++)
    {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
    }
    return sum;
}

double tangent(double x)
{
   return sine(x) / cosine(x);
}


// Menu Driver program
int main()
{
    int choice;

    
        cout << "\n=== Simple Calculator ===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Log (base 10)\n";
        cout << "8. Sine\n";
        cout << "9. Cosine\n";
        cout << "10. Tangent\n";
        cout << "11. Exponential (e^x)\n"; 
        cout << "12. Natural log\n" ;

        
        cout << "Enter your choice: ";
        cin >> choice;

        double a, b;

        switch (choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                add(a, b);
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                sub(a, b);
                break;

            case 3:
                cout << "Enter two numbers:";
                cin >> a >> b;
                multiplication(a, b);
                break;

            case 4:
                cout << "Enter two numbers:";
                cin >> a >> b;
                division(a, b);
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result:" << power(a, b) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> a;
                cout << "Square root: " << sqrtCalc(a) << endl;
                break;

            case 7:
                cout << "Enter number: ";
                cin >> a;
                cout << "Log10: " << logCalc(a) << endl;
                break;

            case 8:
                cout << "Enter angle ";
                cin >> a;
                cout << "Sine: " << sine(a) << endl;
                break;

            case 9:
                cout << "Enter angle (in radians): ";
                cin >> a;
                cout << "Cosine: " << cosine(a) << endl;
                break;

            case 10:
                cout << "Enter angle ";
                cin >> a;
                cout << "Tangent: " << tangent(a) << endl;
                break;

            case 11:
                cout << "Enter exponent value: ";
                cin >> a;
                cout << "e^" << a << " = " << exp(a) << endl;
                break;
            
            case 12 :
                cout << "Enter the number whose natural log is to be found" ;

                cin >> a ;
                cout << "ln(" << a << ")" << nlog(a) ;


            

        }

    

    return 0;

    }
