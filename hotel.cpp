#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char flavour,size;
	int qty,amount=0,discount=0,bill=0;
	st:
		bool ar;
	
	cout<<"Press 'b' for BBG Pizza: "<<endl;
	cout<<"Press 's' for Smoked Pizza: "<<endl;
	cout<<"Press 'g' For Grilled Pizza"<<endl;
	cout<<"Press 'm' For Macrni And Cheese"<<endl;
	cout<<"Press 'c' For Cantaloupe"<<endl;
	cout<<"Press 'x' For Butter Lobster"<<endl;
	cout<<"Press 'z' For Zucchini"<<endl;
	cin>>flavour;
	system("cls");
	if(flavour=='b' || flavour=='s' || flavour=='g' || flavour=='m' || flavour=='c' || flavour=='x' || flavour=='z'){
	
	if(flavour=='b'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 500 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*500;
		}
			if(size=='m'){
			cout<<"Prize is 800 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*800;
		}
		if(size=='l'){
			cout<<"Prize is 1100 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1100;
		}
		if(size=='x'){
			cout<<"Prize is 1600 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1600;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
				cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='s'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*550;
		}
			if(size=='m'){
			cout<<"Prize is 850 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*850;
		}
		if(size=='l'){
			cout<<"Prize is 1150 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1150;
		}
		if(size=='x'){
			cout<<"Prize is 1650 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1650;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
				cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='g'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 600 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*600;
		}
			if(size=='m'){
				cout<<"Prize is 900 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*900;
		}
		if(size=='l'){
			cout<<"Prize is 1300 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1300;
		}
		if(size=='x'){
			cout<<"Prize is 1900 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1900;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
				cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='m'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 750 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*750;
		}
			if(size=='m'){
				cout<<"Prize is 950 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*950;
		}
		if(size=='l'){
			cout<<"Prize is 1050 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1050;
		}
		if(size=='x'){
			cout<<"Prize is 1850 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1850;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
				cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='c'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 800 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*800;
		}
			if(size=='m'){
				cout<<"Prize is 980 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*980;
		}
		if(size=='l'){
			cout<<"Prize is 1100 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1100;
		}
		if(size=='x'){
			cout<<"Prize is 2000 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*2000;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
				cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='x'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 450 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*450;
		}
		if(size=='m'){
				cout<<"Prize is 1000 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1000;
		}
		if(size=='l'){
			cout<<"Prize is 1200 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1200;
		}
		if(size=='x'){
			cout<<"Prize is 1600 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1600;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
			cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
		
	}
	if(flavour=='z'){
		cout<<"Press 'S' for Small\nPress 'm' for Medium\nPress 'L' for Large\nPress 'x' for Extra large"<<endl;
		cin>>size;
		system("cls");
		if(size=='s'){
			cout<<"Prize is 500 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*500;
		}
			if(size=='m'){
				cout<<"Prize is 800 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*800;
		}
		if(size=='l'){
			cout<<"Prize is 1100 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*1100;
		}
		if(size=='x'){
			cout<<"Prize is 2050 :"<<endl;
			cout<<"Enter Quantity:"<<endl;
			cin>>qty;
			amount=qty*2050;
		}
		if(amount!=0){
			if(amount>5000){
				discount=amount*2/100;
			}
			cout<<"We giving You a Discount : "<<discount<<endl;
			bill=amount-discount;
			cout<<"Pay : "<<bill<<endl;
			cout<<"Can We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}
		}
	
	}
}
        else
		cout<<"Invalid Flavour\nCan We Surve Our Menue Again?\n   1 For yes 0 For Not  ";
		cin>>ar;
		if(ar)
		goto st;
		else 
		{
			system("cls");
		cout<<"******************************"<<endl;
		cout<<"Happy Wishes :"<<endl;
	    cout<<"******************************";	
	}

return 0;	
}
