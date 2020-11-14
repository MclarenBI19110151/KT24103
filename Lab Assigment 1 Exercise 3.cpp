#include <iostream>
using namespace std;

void ChangeIt_1(int n) {
n = 5;
}

void ChangeIt_2(int *n) {

*n = 6;
}


void ChangeIt_3(int &n) {
n = 7;
}

int ChangeIt_4(int n) {
n = 8;
return n;
}


void Swap(int &x, int *y);


double getAverage(int *array, int SIZE);


main(){
int *p;
int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
p=&x;
ChangeIt_1(x);
cout << "ChangeIt_1 : " << *p << endl;
ChangeIt_2(&x);
cout << "ChangeIt_2 : " << *p << endl;
ChangeIt_3(x);
cout << "ChangeIt_3 : " << *p << endl;
x = ChangeIt_4(x);
cout << "ChangeIt_4 : " << *p << endl;
cout << "The value of x before calling swap function is " << x << endl;
cout << "The value of y before calling swap function is " << y << endl;
cout << "\n";
Swap(x, &y);
cout << "The value of x is now " << x << endl;
cout << "The value of y is now " << y << endl;
cout << "The average of the array is " << getAverage(data, SIZE) << endl;
}

void Swap(int &x, int *y){
	int temp = 0;
	if(x> *y){
		temp = x;
		x = *y;
		*y = temp; 
}}
	
double getAverage(int *array, int SIZE){
	int total = 0;
	double average =0;
	for(int i = 0; i < SIZE; i++){
		total += *array++;
	}
	average = double(total)/ double(SIZE);
	return average;
}


