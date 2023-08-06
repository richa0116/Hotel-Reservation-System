 #include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int ch;
int i=0;
ofstream fout;
ifstream iout;
class Hotel
{
public:
char gender[6];
char name[30];
char address[20];
char mobile[10];
int room_no;
long long int adharno;
void modify_record();
void edit();
void get();
void put();
void menu();
void information();
}h[3];
void Hotel::menu()
{ system("CLS");
do
{
system("CLS");
int ch;
cout<<endl<<"*********************************";
cout<<"\n**********MENU**********";
cout<<"\n1.Information about Hotel";
cout<<"\n2.Book a Room";
cout<<"\n3.Rooms Allocated";
cout<<"\n4.Edit Record";
cout<<"\n5.Check Room availability";
cout<<"\n6.Exit"<<endl;
cout<<"*********************************";
cout<<"\nChoose any choice:";
cin>>ch;
iout.open("Hotel");
iout>>room_no;
system("CLS");
switch(ch)
{
case 1:information();
break;
case 2:get();
break;
case 3:put();
break;
case 4:edit();
break;
case 5:int rn;
cout<<"\n\tRoom availability Menu";
cout<<"\nEnter room number to check available or Not:";
cin>>rn;
if(rn==room_no)
cout<<"\nRoom is not available, choose another room";
else
cout<<"\nRoom is available";
getch();
break;
case 6:exit(0);
}
iout.close();
}
while(ch!=6);
getch();
}
void Hotel::information()
{
int ch1;
do
{
system("CLS");
cout<<"\n\tInformation Menu";
cout<<"\n\tWELCOME TO PARADISE VILLA RESORT";
cout<<"\n1.Address of Hotel";
cout<<"\n2.Our Special Features";
cout<<"\n3.For Foods and Drink";
cout<<"\n4.For Rooms Inquriry";
cout<<"\n5.Activities and Entertainment";
cout<<"\n6.Go to menu";
cout<<"\nChoose any option:";
cin>>ch1;
switch(ch1)
{
case 1:
cout<<"\n\tADDRESS OF HOTEL";
cout<<"\nDirectly located on Calangute Beach,Goa";
cout<<"\nProperty is right next to beach";
cout<<"\nPinCode:403516";
break;
case 2:
cout<<"\ SPECIAL FEATURES";
cout<<"\n*Free WIFI*";
cout<<"\n*Parking*";
cout<<"\n*Wellness*";
cout<<"\n*Cleaning services*";
cout<<"\n*A day on Cruise*";
cout<<"\n*Loundry*";
cout<<"\n*Poolside Barbeque/Grill services*";
cout<<"\n*Coffee shop*";
break;
case 3:
cout<<"\n\tFOOD AND DRINK";
cout<<"\nBreakfast is available to buy at the property for Ruppes 200";
cout<<"\nBasket Hampers";
cout<<"\nWine/champagne/cocktails/mocktails";
cout<<"\n\nKid-friendlybuffet\nKidmeals";
cout<<"\nGoan Food";
cout<<"\nLocal Cuisine";
cout<<"\n StartersandSoups";
break;
case 4:
cout<<"\n\tROOM INQUIRY";
cout<<"\nTotal rooms in Hotel 100";
cout<<"\nAccomodation Policies";
cout<<"\nCheck in From 14:00PM";
cout<<"\nCheck out Until 11:00AM";
cout<<"\nRooms per night 3500";
cout<<"\n1Hall,1bedroom and 1 bathroom available";
cout<<"\nPrice may vary per requriment";
cout<<"\nExtra beds are available as per requeriment";
break;
cout<<"\n\tACTIVITIES AND ENTERTAINMENT";
case 5:cout<<"\n*Beach Front*";
cout<<"\n*Swimming Pool*";
cout<<"\n*Massage*";
cout<<"\n*Badminton equipment*";
cout<<"\n*Spa/Wellness packages*";
cout<<"\n*Happy Hour*";
cout<<"\n*Sun Umbrellas*";
cout<<"\n*Fitness Club*";
cout<<"\n*Tennis and golf*";
break;
case 6:menu();
break;
}
getch();
}
while(ch1!=6);
}
void Hotel::get()
{
fout.open("Hotel");
int count=0;
cout<<"\n\tBOOKING MENU";
cout<<"\nEnter name:";
cin>>name;
fout<<name<<"\t";
cout<<"\nEnter gender:";
cin>>gender;
fout<<gender<<"\t";
cout<<"\nEnter Address:";
cin>>address;
fout<<address<<"\t";
cout<<"\nEnter Mobileno:";
cin>>mobile;
fout<<mobile<<"\t";
cout<<"\nEnter Adhar Number:";
cin>>adharno;
fout<<adharno<<"\t";
cout<<"\nEnter roomno:";
cin>>room_no;
fout<<room_no;
fout.close();
iout.open("Hotel");
iout>>name;
iout>>gender;
iout>>address;
iout>>mobile;
iout>>adharno;
iout>>room_no;
while(adharno>0)
{
count++;
adharno=adharno/10;
}
if(count==12&&room_no<100&&room_no>1)
cout<<"Room no"<<room_no<<"booked succesfully";
else
{
cout<<"\nInvalid adhar no or invalid mobile no";
cout<<"\nWe can'tbook your room";
}
int ch5;
cout<<"\nPress 1 to book another Room:";
cout<<"\nPress 2 to Display Room status:";
cout<<"\nPress 3 to go Menu:";
cin>>ch5;
if(ch5==1)
{
i++;
h[i].get();
}
else if(ch5==2)
put();
else if(ch==3)
menu();
else
cout<<"\nInvalid choice";
}
void Hotel::put()
{
int ch2;
cout<<"\n\tDISPLAY ROOM BOOKING";
cout<<"\nRoomno"<<room_no<<"is booked for following customer\n";
cout<<"\nCustomer Name is:"<<name;
cout<<"\nCustomer address is:"<<address;
cout<<"\nCustomer gender is:"<<gender;
cout<<"\nChoose 4 to go menu";
cout<<"\nChoose 5 to exit:";
cin>>ch2;
while(ch!=5)
{
if(ch2==4)
{
menu();
break;
}
else if(ch>4||ch<4)
{
cout<<"\nInvalid choice";
break;
}
else if(ch==5)
exit(0);
}
}
void Hotel::modify_record()
{
int choice;
int no=0;
cout<<"\n\tYou can't change room";
cout<<"\n\tMODIFY CUSTOMER RECORD MENU";
cout<<"\n1.Change Name";
cout<<"\n2.Change Address";
cout<<"\n3.Change Mobieno";
cout<<"\n4.Change Adharno";
cout<<"\n5.To go back Edit section";
cout<<"\nChoose any operation:";
cin>>choice;
fout.open("Hotel");
switch(choice)
{
case 1:cout<<"\nEnter new Name:";
cin>>name;
fout<<name;
break;
case 2:cout<<"\nEnter new Address:";
cin>>address;
fout<<address;
break;
case 3:cout<<"\nEnter new Mobileno:";
cin>>mobile;
fout<<mobile;
break;
case 4:cout<<"\nEnter new Adharno:";
cin>>adharno;
fout<<adharno;
fout.close();
iout.open("Hotel");
iout>>adharno;
while(adharno>0)
{
no++;
adharno=adharno/10;
} 
if(no==12)
cout<<"\nAdhar number got modifided";
break;
case 5:edit();
default:cout<<"\nChoose valid choice";
}
fout.close();
}
void Hotel::edit()
{
int ch3;
int i=0;
Hotel*ptr;
ptr=&h[i];
do
{
system("CLS");
cout<<"\n\tEDIT MENU";
cout<<"\n1.Modify customer record";
cout<<"\n2.Display record";
cout<<"\n3.Delete record";
cout<<"\n4.Go back to Menu";
cout<<"\n5.Exit";
cout<<"\nChoose any one option:";
cin>>ch3;
switch(ch3)
{
case 1:modify_record();
break;
case 2:put();
break;
case 3:delete ptr;
cout<<"\nAll record got deleted";
break;
case 4:menu();
break;
case 5:exit(0);
default:cout<<"\nInvalid choice";
}
}
while(ch3!=4);
getch();
}
int main()
{
main:
h[i].menu();
getch();
return 0;
}

