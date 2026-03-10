#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius){
	return PI * radius * radius ;
}

float circlePerimeter(float radius){
	return 2*PI*radius ;
}

int main(){
/* when we declare pi over here we get below comment
	PI = 3.0f; // Assinment of read only variable PI
*/
	cout<<"Area of circle : " <<fixed <<setprecision(4) <<circleArea(7.0) <<endl;
	cout<< "Perimeter of circle: " <<fixed <<setprecision(4) <<circlePerimeter(7.0) <<endl;

	return 0;
}
