#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int y= 20;
	int z= 30;

	int* px = &x;
	int* py = &y;
	int* pz = &z;

	cout<< "Before swap : " <<endl ;
	cout<<*px <<" " <<*py <<" " <<*pz <<endl;
	cout<<"Addresses are : " << &*px <<" " << &*py <<" " << &*pz <<endl<<endl;


	int temp = *px;
	*px = *pz;
	*pz = temp ;

	cout <<"After swap : " <<endl;
	cout <<*px <<" " <<*py <<" " <<*pz <<endl;
	cout<<"Addresses are : " << &*px <<" " << &*py <<" " << &*pz <<endl;
	return 0;
}
