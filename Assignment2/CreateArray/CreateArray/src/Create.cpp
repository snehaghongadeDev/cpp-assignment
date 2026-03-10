#include<iostream>
using namespace std;

int main()
{
	//int* arr= new int[5];

	int* arr= (int*)malloc(5* sizeof(int));

	cout<<"enter numbers";
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}

	cout<<"array elements";
	for(int i=0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//delete[] arr;
	free(arr);

/*	cout<<"After deletion array elements";
		for(int i=0; i<5; i++){
			cout<<arr[i]<<" ";
		}
*/
		return 0;
}

/*
 * Q1 Why constructors are not called when using malloc? =
 * 	malloc() doesn't call constructors because it's a C function,
 * 	not a C++ operator. Here's why:
 * 	malloc() is from C - C has no classes/constructors
	Returns void* - raw bytes, no type info
	No object creation - just memory allocation

	Q2 Why new is preferred in C++?
	new is preferred in C++ because it's designed
	for C++ objects and provides automatic construction/destruction.

 */



