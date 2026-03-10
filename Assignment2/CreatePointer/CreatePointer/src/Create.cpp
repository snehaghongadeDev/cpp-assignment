#include<iostream>
using namespace std;

int main(){
	int a =10;
	int* ptr= &a;
	int &ref= a;
	*ptr=20;
	ref=30;
	cout<<*ptr<<endl;
	cout<<ref<<endl;
return 0;
}

/*
 * Two differences between pointer and reference?
  =Use references for safe, simple aliasing (function parameters).
  Use pointers when you need flexibility, nullability, or dynamic memory management.

* Why references cannot be reseated but pointers can?
=References prioritize safety and simplicity.
 Pointers provide flexibility and control.

* Why references cannot be NULL?
=References eliminate null pointer errors through design-time prevention rather than runtime checking.

 */
