#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;


void solveQuadEquation(double a, double b, double c) {

	//solves the DISCRIMINANT

	double discriminant = b * b - 4 * a * c;

	// Imaginary numbers
	if (discriminant < 0)
	{

		discriminant = fabs(discriminant);
		double imagineX = sqrt(discriminant) / (2 * a);
		double realNum = -b / (2 * a);
		
		
		
		//Outputs the format of quadratic equation
		
		
				cout << a << "x^2 ";
				//Output of b
				if(b < 0)
				{
					b = -b;
					cout << "- " << b << "x ";
				}
				else
				{
					cout << "+ "<< b << "x ";
				}
				//Output of c
				if(c < 0)
				{
					c = -c;
					cout << "- " << c << " = 0" << endl;
				}
				else
				{
					cout << "+ "<< c << " = 0" << endl;
				}


		//Output of Imaginary numbers//

		string varX ("x = ");
		
		ostringstream strReal;
		strReal << realNum;
		string realNumFinal = strReal.str(); // changes realNum to string
		string firstPar = varX + realNumFinal;

		//Output when first imaginary number is positive//
		if (imagineX < 0)
		{
		
			
			imagineX = -imagineX;
			cout << firstPar << " + " << imagineX<<"i"<<endl;
			cout << firstPar << " - " << imagineX<<"i"<<endl;
			
		}
		
		//Output when first imaginary number is negative//
		
		else 
		{
			cout << "x = " << realNum << " - " << imagineX << "i" << endl;
			cout << "x = " << realNum << " + " << imagineX << "i" << endl;
		}
		
		
		//Real roots
		// Discriminant is solved, outputting a real number as a root



		//Solves real root

	}
	else{


			double x1 = (-b - sqrt(discriminant))/(2*a);
			double x2 = (-b + sqrt(discriminant))/(2*a);

			//Outputs the format of quadratic function
			
			
			cout << a << "x^2 ";
			
			//Output of b
			
			if(b < 0)
			{
				b = -b;
				cout << "- " << b << "x ";
			}
			else
			{
				cout << "+ "<< b << "x ";
			}
			
			//Output of c
			
			if(c < 0)
			{
				c = -c;
				cout << "- " << c << " = 0" << endl;
			}
			else
			{
				cout << "+ "<< c << " = 0" << endl;
			}
			//Outputs the roots

			if(x1 == x2)
			{
				cout << "x = " << x1 << endl;
			}
			else
			{
			cout << "x = " << x1 << endl;
			cout << "x = " << x2 << endl;
			}
	}


}



// Linear equations




void solveLinEquation (double a, double b, double c)
{
	cout << a << "x^2 ";
				//Output of b
				if(b < 0)
				{
					b = -b;
					cout << "- " << b << "x ";
				}
				else
				{
					cout << "+ "<< b << "x ";
				}
				//Output of c
				if(c < 0)
				{
					c = -c;
					cout << "- " << c << " = 0" << endl;
				}
				else
				{
					cout << "+ "<< c << " = 0" << endl;
				}





				// Checks to see if unable to determine root




			if( b == 0)
			{
				cout << "Unable to determine root(s)." << endl;
			}
			else if (b == 0 && c ==0)
			{
				cout << "Unable to determine root(s)." << endl;
			}
			else
			{
				double linRoot = (c) / b;

				if (linRoot == 0)
				{
					cout << "x = " << -linRoot << endl;
				}
				else
				{
					cout << "x = " << linRoot << endl;
				}
			}
}

int main() {

	double a, b, c;
	cin >> a >> b >> c;
	if (a==0) {

		solveLinEquation(a,b,c);

	}
	else {
		solveQuadEquation(a, b, c);

	}
	return 0;
}
