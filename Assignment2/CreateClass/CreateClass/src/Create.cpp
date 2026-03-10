#include<iostream>
using namespace std;

class Box{

private:
	double length;
	double width;
	double height;

public:
	Box(double l, double w, double h){
		length = l;
		width = w;
		height = h;
	}

		int setDimensions(int len,int wid, int hei){
			this->length = len;
			this->width=wid;
			this->height=hei;
			return 0;
	}
		void volume(){
			double vol= length * width * height;
			cout<<"length: "<<length<<endl;
			cout<<"width: "<<width
			//outlume is "<<vol<<endl;
		}
};

int main(){
	Box b1(10,20,30);
	cout<<"After initialization: " <<endl;
	b1.volume();

	b1.setDimensions(5,10,15);
	cout<<"After set dimensions: "<<endl;
	b1.volume();

}

/*
 * Why must initialization happen before assignment?
 * =Initialization must happen before assignment because objects are constructed first,
 *  and assignment operates on already-constructed objects.
 *  C++ guarantees members exist before constructor body runs.
 *  Assignment modifies existing objects.
 *  Initialization creates them properly from scratch.
 *  This prevents double allocation, const/reference errors, and ensures "construction guarantee."
 *
 *
 *  When is initialization preferred over assignment?
 *  =1. Constructor Member Initialization (Performance + Safety)
 *  2. Constant Members (Assignment IMPOSSIBLE)
 *  3. Reference Members (Must Bind Immediately)
 *  4. Base Class Constructors (Required Order)
 */
