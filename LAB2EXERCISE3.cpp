#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Node{
	double price, sum;
	string itemlist;
	Node *next;
	
	public:
		Node(){};
        void setItem(string name, double itemprice) { itemlist=name; price=itemprice;};
        void setTotal(double t){sum = t;};
        void setNext(Node* aNext) { next = aNext; };
        int getStringL ();
        string getName() { return itemlist; };
        double getPrice() { return price;};
        double getTotal() {return sum;};
        Node* Next() { return next; };
        
};

int Node::getStringL() {
        	int n = itemlist.length();
        	return n;
		}

class List {
	Node *head;
	public:
		List() { head = NULL; };
		void addNode(string item, double p);
		void printList();
};


void List::addNode(string item,double p) {
	
	Node* newNode = new Node();
	newNode->setItem(item,p);
	newNode->setNext(NULL);
	
	Node *tmp = head;
	if ( tmp != NULL ) {
	
		while ( tmp->Next() != NULL ) {
		tmp = tmp->Next();
		}			
	
	tmp->setNext(newNode);}
	else {
	
		head = newNode;}
}

void List::printList(){
	Node *current = head;
	double total = 0;
	cout << "========================================="<< endl;
	cout << "BC Items                            Price" << endl;
	cout << "========================================="<<endl;
	while(current != NULL) {
		
		cout <<current->getName();
		if(current->getStringL() >= 18){
			int srt_n = 0;
			srt_n = current->getStringL() - 16;
			cout << setw((24 - srt_n));
		}
		cout<< current->getPrice() << endl;
		total += current->getPrice();
		current = current->Next();
		if(current == NULL){
				cout << "========================================="<<endl;
				cout << "Total (GST Incl.)                  " << total << endl;	
				cout << "========================================="<<endl;
		}
	}
}

int main(){
	List list;
	list.addNode("10 Pagoda Gnut 110g", 3.49);
	list.addNode("11 Hup Seng Cream Cracker", 4.19);
	list.addNode("12 Yit Poh 2n1 Kopi-o", 7.28);
	list.addNode("13 Zeolite SN & Seed", 5.24);
	list.addNode("14 Gatsby S/FO Wet&Hard", 16.99);
	list.addNode("15 GB W/G U/Hold 150g", 6.49);
	list.printList();
	
}		

