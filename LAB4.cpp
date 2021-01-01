#include <iostream>
using namespace std;
class Queue{
	private:
		int queueArr[5];
		int rear;
		int front;
	public:
		Queue(){
			rear = -1;
			front = -1;
			for(int j; j < 5; j++)
				queueArr[j] = 0;
		}
		void insert_queueValue(int value){
			if(isFull()){
				cout<< "FULL!"<< endl;
				return;	
			}	
			else if(isEmpty()){
				front = 0;
				rear = 0;
			}
			else{
				rear = (rear + 1) % 5;
			}
			queueArr[rear] = value;
		}
		void delete_queueValue(){
			int del_value = 0;
			if(isEmpty()){
				cout << "EMPTY!" << endl;
				return;
			}	
			else if(front == rear){
				del_value = queueArr[front];
				queueArr[front] = 0;
				rear = -1;
				front = -1;
			}
			else{
				del_value = queueArr[front];
				queueArr[front] = 0;
				front = (front + 1) % 5;
			}
			cout << "The front of the queue: " << del_value << " is removed" << endl;
		}
		bool isEmpty(){
			if(rear == -1 && front == -1)
				return true;
			else
				return false;
		}
		bool isFull(){
			
			if((rear + 1) % 5 == front)
				return true;
			else
				return false;
		}
		void display(){
			if(isEmpty()){
				cout << "EMPTY!";
			}
			else{
				cout << "\nThe value inside the queue are: ";
				for(int i = 0; i < 5; i++){
					cout << queueArr[i] << " ";}	
			}
			cout << endl;
		}		
};
int main(){
	int input, value;
	bool check = true;
	Queue queue;
	do{
		cout << "What to do you want to Perform?" << endl;
		cout << "1.insert()\n2.delete()\n3.display()\n0.[exit]" << endl;
		cout << "Input: ";
		cin >> input;		
		switch(input){
			case 1:
				cout << "Enter Value:";
				cin >> value;
				queue.insert_queueValue(value);
				break;
			case 2:
				queue.delete_queueValue();
				break;
			case 3:
				queue.display();
				break;
			case 0:
				check = false;
				break;
			default:
				cout << "Invalid Choices!" << endl;
		}
	}while(check);
}
