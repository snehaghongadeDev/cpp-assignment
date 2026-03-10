#include <iostream>
#include <iomanip>
using namespace std;

int absolute(int n)
{
	return (n > 0 ? n : -n);
}

int clamp(int val, int lo, int hi){
	return (val < lo ? lo : (val > hi ? hi : val) );
}


int main(){
	cout<<fixed <<setprecision(2);
	cout <<"\nval\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)"<<endl;
	cout <<"-------------------------------------------------"<<endl;

	int tests[][3]={
			{-15, -10, 10},
			{0 ,-10, 10},
			{25, -10, 10},
			{-3, 0, 5}
	};

	for (int i =0; i<4;i++){
		int val = tests[i][0];
		int lo = tests[i][1];
		int hi = tests[i][2];

		 cout << val << "\t" << lo << "\t" << hi << "\t"
		             << absolute(val) << "\t\t" << clamp(val, lo, hi) << endl;
	}

	return 0;
}

