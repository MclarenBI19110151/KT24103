#include <iostream>
using namespace std;
void selectionsorting(int array[]){
	int min = 0;	
	for(int i = 0; i < 11 - 1; i++ ){
		min = i;	
		for(int j = i+1; j < 11; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		if(min != i){
			int temp;
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}	
}
int main(){
	int array[11] = {4,2,0,3,4,0,4,1,2,1,3};
	cout << "array before sorting: [";
	for(int i = 0; i < 11; i++){
		cout << array[i] << " ";
	}
	cout << "]";
	cout << "\n";
	selectionsorting(array);
	cout << "array after sorting: [";
	for(int i = 0; i < 11; i++){
		cout << array[i] << " ";
	}
	cout << "]";
	return 0;
}
