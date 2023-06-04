#include <iostream>
#include <vector>
using namespace std;
class Hostel{
	private:
		string name;
		int rollNo;
		int bed;
	vector<Hostel> ve;
	public:
	Hostel(string n, int r){
		name= n;
		rollNo= r;
		bed= 0;
	}
	
	bool bedStatus(){
		if(bed < 3){
			bed++;
			return true;
		}
	return false;
	}
	
	add(string n, int r){
		Hostel hostel(n,r);
		ve.push_back(hostel);
		allocation();
	}
	
	allocation(){
		if(bedStatus()){
			cout<<"You have allocated bed in hostel"<<endl<<endl;
		}
		else{
			cout<<"Hostel is full"<<endl<<endl;
		}
	}
	
	remove(){
		int rn;
		cout<<"Enter roll no for remove student: "; cin>>rn;
	for(int i=0; i<ve.size(); i++){
		if(rn==ve[i].rollNo){
		cout<<"Name: "<<ve[i].name<<endl;
		cout<<"RollNo: "<<rn<<endl;
		ve.erase(ve.begin()+i); 
		cout<<"Student is removed from hostel"<<endl<<endl;
		}
	}
	}
	
	display(){
		for(int i=0; i<ve.size(); i++){
		cout<<i+1<<"> Name: "<<ve[i].name<<endl;
		cout<<"RollNo: "<<ve[i].rollNo<<endl<<endl;
		}
	}
};

int main(){
	string n; int r;
	Hostel hostel(n,r);
	
	cout<<"Students Hostel"<<endl;
	cout<<"----------------"<<endl<<endl;
	while(true){
		cout<<"Enter '1' for add student"<<endl;
		cout<<"Enter '2' for remove student from hostel"<<endl;
		cout<<"Enter '3' for display students of hostel"<<endl;
		cout<<"Enter '0' for exit from program"<<endl;
		int choice;
		cout<<"Enter choice: "; cin>>choice;
		
		if(choice==1){system("cls");
			cout<<"Enter Name: "; cin>>n;
			cout<<"Enter Roll No: "; cin>>r;
			hostel.add(n,r);
		}
	else if(choice==2){
		system("cls");
		hostel.remove();
	}
	
	else if(choice==3){
		system("cls");
		hostel.display();
	}
	else if(choice==0){
		exit(0);
	}
	else {
		system("cls");
		cout<<"Invalid input"<<endl<<endl;
	}
	}
}
