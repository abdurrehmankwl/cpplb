#include<iostream>
#include<conio.h>
using namespace std;
int login(string username2,string password2){
   	string username="admin";
	string password="admin";
	if(username2==username && password2==password)
	return 1;
	else
	return 0;
}
struct admin{
	string user_name;
	string pass;
};
struct student{
	int roll_no;
	char name[50];
};

int main(){
		string username;
		string password;
		admin ad;
		int k=1;
		bool pa=0;
		student user[5];
		int choice;
		do{
		cout<<"\n\n\n\n\t\t1) Student  Login "<<endl;
		cout<<"\t\t2) Admin Login "<<endl;
		cout<<"\t\t0) Exit "<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:
				{
				int roll;
				cout<<"\tEnter Your Roll Number: ";
				cin>>roll;
				pa=0;
				for(int i=0;i<5;i++){
					if(user[i].roll_no==roll)
					{   
						cout<<user[i].name<<" is Present";
					    pa=1;
						break;
				}
				else{pa=0;}
				}
				if(pa==0)
				cout<<" \n\t Not Present !";
					
				break;	
				}
			case 2:
			    {
				bool ar=0;
				pak:
					cout<<"Enter Admin Username : ";
			    	cin>>ad.user_name;
			    	cout<<"Enter Admin Password : ";
			    	cin>>ad.pass;
			    ar=login(ad.user_name,ad.pass);
			    if(ar==1){
			    	system("cls");
  				for(int i=0;i<5;i++){
					    cin.ignore();
					cout<<"Enter Student "<<k<<" Name : ";
					cin.get(user[i].name,50);
						cin.ignore();
				    cout<<"Enter Student "<<k<<" Roll No : ";
					cin>>user[i].roll_no; 
					k++;   
  				}
  				system("cls");}
  				else{
  				cout<<"Re-Enter ! "<<endl;
  				goto pak;}
				break;
				}
			case 0:
				break;
			default:
					cout<<"Invalid input Re-enter";
					
		}
	}while(choice!=0);
	getch();	
	return 0;
}
