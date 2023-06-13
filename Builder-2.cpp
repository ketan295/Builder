#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{ 	public:
	int id;
	int staff_size;
	int room_size;
	int establish_year;
	char name[100];
	char rating_type[100];
	char type[100];
	char address[100];
	char website[100];
	
	void setdata(int id ,int staff_size ,int room_size , int establish_year , char name[],char address[],  char website[] , char type[] , char rating_type[])
	{

		this->id=id;
		this->staff_size=staff_size;
		this->room_size=room_size;
		this->establish_year=establish_year;
		strcpy(this->name,name);
		strcpy(this->address , address);
		strcpy(this->website , website);
		strcpy(this->type , type);
		strcpy(this->rating_type , rating_type);	
	}
	
	void getdata()
	{
	
		cout<<"id ="<<id<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Rating type ="<<rating_type<<endl;
		cout<<"Type ="<<type<<endl;
		cout<<"Staff size ="<<staff_size<<endl;
		cout<<"Room size ="<<room_size<<endl;
		cout<<"Address ="<<address<<endl;
		cout<<"Web-site ="<<website<<endl;
		cout<<"Establish year  ="<<establish_year<<endl;
	} 
		
}; 

int main()
{
	Hotel h1;
	
	h1.setdata(1 , 500 , 200 ,1993 , "taj hotel" , "towers nariman Point Mumbai Maharashtra India" , "www.tajhotels.comExpress" ,"Veg & Non-veg" , "5 star");
	h1.getdata();
	return 0;
}
