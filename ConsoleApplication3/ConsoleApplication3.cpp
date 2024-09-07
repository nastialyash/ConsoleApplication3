// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter your nums : " << endl;
	cin >>a>>b;
	
	cout<< "S = " << a * b << endl;
	cout<< "P = " << 2 * (a + b) << endl;

	int a , b, c;
	
cout << "Enter your nums : " << endl;
	cin >> a >> b >> c;
	int p = a + b + c ;
	cout << "P = " << p << endl;

	int s = p / 2;

	int area = float(s * (s - a) * (s - b) * (s - c));

	cout << "S = " << area << endl;
	

	int masa;
	int counts;
	int one;

	cout << "Enter masa : " << endl;
	cin >> masa;
	cout << "Enter count : "<<endl;
	cin >> counts;
	cout << "Enter your one : " << endl;
	cin >> one;

	int weight = masa + counts;
	int price = one * counts;

	cout << "MAsa of  this : " << weight << endl;
	cout << "Total price if this : " << price << endl;



	int priceKg;  
	int weight;      
	
	cout << "Enter price for one apple : "<<endl;
	cin >> priceKg;

	cout << "Enter a number of apples you eanna buy :  "<<endl;
	cin >> weight;

	
	int Price;

	if (weight > 5) {
		
		Price = weight * priceKg * 0.9;  
	}
	else {
		
		Price = weight * priceKg;
	}

	
	cout << "Price for apple : " << Price  << endl;




	int waterLiters;  
	int priceMeter; 

	cout << "Enter a liters : "<<endl;
	cin >> waterLiters;

	cout << "Enter price of one meter : "<<endl;
	cin >> priceMeter;

	int waterVolumeCubicMeters = waterLiters / 1000.0;

	int Price = waterVolumeCubicMeters * priceMeter;

cout << "Total price of this : " << Price <<  endl;






}

