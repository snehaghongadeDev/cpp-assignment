#include<iostream>
using namespace std;

class Create{
public:
void SwapByValue(int a, int b){
	int temp = a;
	a = b;
	b= temp ;
	 cout << "Value swap: a=" << a << ", b=" << b << endl;
}

void SwapByReference(int &a, int &b){
	int temp = a;
	a= b;
	b=temp;
}

void SwapByAddress(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
};

int main(){
	int x=10;
	int y=5;
	Create obj;

	obj.SwapByValue(x,y);
	 cout<<"for call by value " <<x<<" " <<y<<endl <<endl;

	 obj.SwapByReference(x, y);
	 cout<<"for call by reference " <<x<< " " <<y<<endl<<endl;

	 obj.SwapByAddress(&x, &y);
	 cout<<"for call by address " <<x <<" "<<y<<endl<<endl;
}

/*
Explain how reference variables act as aliases and how that affects swapByReference().?
-
Reference variables act as "aliases" - they're alternative names for existing variables.
Once bound, they share the exact same memory location.
*/
