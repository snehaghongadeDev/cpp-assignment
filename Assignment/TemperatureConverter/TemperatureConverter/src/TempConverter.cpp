#include<iostream>
using namespace std;

float celsiusToFahrenheit(float c){
	return (c*9.0f/5.0f)+32.0f;
}

float fahrenheitToCelsius(float f){
	return (f-32.0f)* 5.0f/9.0f ;
}
int main(){
	float c = 30.0;
	float f = 13.0;
	float convertedF = celsiusToFahrenheit( c);
	float convertedC = fahrenheitToCelsius(f);

	cout<<" celsiusToFahrenheit: " <<convertedF <<"\n";
	cout <<" fahrenheitToCelsius: " <<convertedC <<"\n";
	return 0;
}




