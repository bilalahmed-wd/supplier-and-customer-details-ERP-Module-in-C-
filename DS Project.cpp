#include<string.h>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<conio.h>

using namespace std;
class SupplierCustomerDetails
{
private:
char option,op;
int num,Eoption,i,a;
string id,name,address,country,phone_no,searchedId,deleteId,EditId;
ofstream write,write2;
ifstream read;
public:
void SupplierMenu()
{				
main:
cout<<"\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\tSupplier Details";
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\t\t\t\t"<<"[1]"<<" Add Supplier Records";
cout<<"\n\n\t\t\t\t\t"<<"[2]"<<" Search Supplier Records";
cout<<"\n\n\t\t\t\t\t"<<"[3]"<<" Edit and Update Supplier Records";
cout<<"\n\n\t\t\t\t\t"<<"[4]"<<" Exit";
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\tSelect the respective option (1-5) : ";
cin>>op;
system("cls");
if(op=='1')
{
top:
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tAdd Supplier Record"<<endl;
//ofstream write;
write.open("Supplier Details.csv",std::ifstream::app);

cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;	
cout<<"\n\n\t\t\t\tEnter Id to be assigned to the respective supplier : ";
cin>>ws;
getline(cin,id);
cout<<"\n\n\t\t\t\tEnter the name of the respective supplier : ";
getline(cin,name);
cout<<"\n\n\t\t\t\tEnter the address of respective supplier : ";
getline(cin,address);
cout<<"\n\n\t\t\t\tEnter the country from which supplier belongs : ";
getline(cin,country);
cout<<"\n\n\t\t\t\tEnter the phone number of the respective supplier : ";
getline(cin,phone_no);
write<<id<<","<<name<<","<<address<<","<<country<<","<<phone_no<<endl;
i++;
write.close();


cout<<"\n\n\t\t\t\tDo you want to add record (Y/N)";
cin>>option;
if(option=='Y'||option=='y')
goto top;
system("cls");
if(option=='N'||option=='n')
cout<<"\n\n\t\t\t\tRecord added successfully"<<endl;					
system("pause");
system("cls");
goto main;
}
else if(op=='2')
{
top2:
i=0;	
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\tSearch Supplier Record"<<endl;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;

cout<<"\n\n\t\t\t\tInsert the respective record id you want to search ";
cin>>searchedId;
//ifstream read;
read.open("Supplier Details.csv");
//read.ignore( 1000, '\n' );	
while(!read.eof())
{
getline(read,id,',');
getline(read,name,',');
getline(read,address,',');
getline(read,country,',');
getline(read,phone_no,'\n');

if(id==searchedId)
{
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
break;
} 
//break;
}
read.close();
if(id!=searchedId)
cout<<"\n\n\t\t\t\tNo such record exists"<<endl;
system("pause");
system("cls");
goto main;

}
else if(op=='3')
{
//i=0;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tEdit Supplier Record"<<endl;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tEnter the Supplier Id for whom you want to update the record"<<endl;
cin>>EditId;
read.open("Supplier Details.csv");
//read.ignore( 1000, '\n' );
write2.open("New File.csv");	
while(!read.eof())
{
getline(read,id,',');
getline(read,name,',');
getline(read,address,',');
getline(read,country,',');
getline(read,phone_no,'\n');

if(id==EditId)
{
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
//break;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cout<<"\n\n\t\t\t\t[1] Edit Supplier's ID : ";
cout<<"\n\n\t\t\t\t[2] Edit Supplier's Name : ";
cout<<"\n\n\t\t\t\t[3] Edit Supplier's Address : ";
cout<<"\n\n\t\t\t\t[4] Edit Supplier's Country : ";
cout<<"\n\n\t\t\t\t[5] Edit Supplier's Phone Number : ";
cout<<"\n\n\t\t\t\tSelect the Option (1-5) : ";
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cin>>Eoption;
system("cls");
switch(Eoption)
{
case 1:
cout<<"\n\n\t\t\t\tRe-Enter the Id to be assigned to the respective supplier : ";
cin>>ws;
getline(cin,id);
break;

case 2:
cout<<"\n\n\t\t\t\tRe-Enter the name of the respective supplier : ";
cin>>ws;
getline(cin,name);
break;

case 3:
cout<<"\n\n\t\t\t\tRe-Enter the address of respective supplier : ";
cin>>ws;
getline(cin,address);
break;

case 4:

cout<<"\n\n\t\t\t\tRe-Enter the country from which supplier belongs : ";
cin>>ws;
getline(cin,country);
break;

case 5:
cout<<"\n\n\t\t\t\tRe-Enter the phone number of the respective supplier : ";
cin>>ws;
getline(cin,phone_no);
break;

default:
cout<<"\n\n\t\t\t\tYou have entered a wrong option : ";	
}
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tUpdated Supplier Record"<<endl;
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;

}	 
//	system("pause");
//	system("cls");
if(read.eof())
break;

write2<<id<<","<<name<<","<<address<<","<<country<<","<<phone_no<<endl;

//break;
getch();
//system("cls");
//break;


}
write2.close();
read.close();
remove("Supplier Details.csv");
rename("New file.csv","Supplier Details.csv");	
cout<<"\n\n\t\t\t\tRecord Updated Successfully"<<endl;
system("pause");
system("cls");
goto main;
if(id!=EditId)
cout<<"\n\n\t\t\t\tNo such record exists"<<endl;

}
else if(op=='4')
{
cout<<"\n\n\t\t\t\tThanks for using the program"<<endl;
}	
else
{
cout<<"\n\n\t\t\t\tYou have chosen an invalid  option"<<endl;
}

}


void CustomerMenu()
{				
main:
cout<<"\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\tCustomer Details";
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\t\t\t\t"<<"[1]"<<" Add Customer Records";
cout<<"\n\n\t\t\t\t\t"<<"[2]"<<" Search Customer Records";
cout<<"\n\n\t\t\t\t\t"<<"[3]"<<" Edit and Update Customer Records";
cout<<"\n\n\t\t\t\t\t"<<"[4]"<<" Exit";
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\tSelect the respective option (1-5) : ";
cin>>op;
system("cls");
if(op=='1')
{
top:
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tAdd Customer Record"<<endl;
//ofstream write;
write.open("Customer Details.csv",std::ifstream::app);

cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;	
cout<<"\n\n\t\t\t\tEnter Id to be assigned to the respective Customer : ";
cin>>ws;
getline(cin,id);
cout<<"\n\n\t\t\t\tEnter the name of the respective Customer : ";
getline(cin,name);
cout<<"\n\n\t\t\t\tEnter the address of respective Customer : ";
getline(cin,address);
cout<<"\n\n\t\t\t\tEnter the country from which Customer belongs : ";
getline(cin,country);
cout<<"\n\n\t\t\t\tEnter the phone number of the respective Customer : ";
getline(cin,phone_no);
write<<id<<","<<name<<","<<address<<","<<country<<","<<phone_no<<endl;
i++;
write.close();


cout<<"\n\n\t\t\t\tDo you want to add record (Y/N)";
cin>>option;
if(option=='Y'||option=='y')
goto top;
system("cls");
if(option=='N'||option=='n')
cout<<"\n\n\t\t\t\tRecord added successfully"<<endl;					
system("pause");
system("cls");
goto main;
}
else if(op=='2')
{
top2:
i=0;	
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\tSearch Customer Record"<<endl;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;

cout<<"\n\n\t\t\t\tInsert the respective record id you want to search ";
cin>>searchedId;
//ifstream read;
read.open("Customer Details.csv");
//read.ignore( 1000, '\n' );	
while(!read.eof())
{
getline(read,id,',');
getline(read,name,',');
getline(read,address,',');
getline(read,country,',');
getline(read,phone_no,'\n');

if(id==searchedId)
{
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
break;
} 
//break;
}
read.close();
if(id!=searchedId)
cout<<"\n\n\t\t\t\tNo such record exists"<<endl;
system("pause");
system("cls");
goto main;

}
else if(op=='3')
{
i=0;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tEdit Customer Record"<<endl;
cout<<"\t\t\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tEnter the Customer Id for whom you want to update the record"<<endl;
cin>>EditId;
read.open("Customer Details.csv");
//read.ignore( 1000, '\n' );
write2.open("New File2.csv");	
while(!read.eof())
{
getline(read,id,',');
getline(read,name,',');
getline(read,address,',');
getline(read,country,',');
getline(read,phone_no,'\n');

if(id==EditId)
{
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
//break;
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cout<<"\n\n\t\t\t\t[1] Edit Customer's ID : ";
cout<<"\n\n\t\t\t\t[2] Edit Customer's Name : ";
cout<<"\n\n\t\t\t\t[3] Edit Customer's Address : ";
cout<<"\n\n\t\t\t\t[4] Edit Customer's Country : ";
cout<<"\n\n\t\t\t\t[5] Edit Customer's Phone Number : ";
cout<<"\n\n\t\t\t\tSelect the Option (1-5) : ";
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cin>>Eoption;
system("cls");
switch(Eoption)
{
case 1:
cout<<"\n\n\t\t\t\tRe-Enter the Id to be assigned to the respective Customer : ";
cin>>ws;
getline(cin,id);
break;

case 2:
cout<<"\n\n\t\t\t\tRe-Enter the name of the respective Customer : ";
cin>>ws;
getline(cin,name);
break;

case 3:
cout<<"\n\n\t\t\t\tRe-Enter the address of respective Customer : ";
cin>>ws;
getline(cin,address);
break;

case 4:

cout<<"\n\n\t\t\t\tRe-Enter the country from which Customer belongs : ";
cin>>ws;
getline(cin,country);
break;

case 5:
cout<<"\n\n\t\t\t\tRe-Enter the phone number of the respective Customer : ";
cin>>ws;
getline(cin,phone_no);
break;

default:
cout<<"\n\n\t\t\t\tYou have entered a wrong option : ";	
}
cout<<"\n\t\t\t\t_________________________________________________________________________________"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\tUpdated Customer Record"<<endl;
cout<<"\n\n\t\t\t\tId : "<< id  ;
cout<<"\n\n\t\t\t\tName : "<< name  ;
cout<<"\n\n\t\t\t\tAddress : "<< address ;
cout<<"\n\n\t\t\t\tCountry : "<< country ;
cout<<"\n\n\t\t\t\tPhone Number : "<< phone_no ;

}	 
//	system("pause");
//	system("cls");
if(read.eof())
break;

write2<<id<<","<<name<<","<<address<<","<<country<<","<<phone_no<<endl;

//break;
getch();
//system("cls");
//break;


}
write2.close();
read.close();
remove("Customer Details.csv");
rename("New file2.csv","Customer Details.csv");	
cout<<"\n\n\t\t\t\tRecord Updated Successfully"<<endl;
system("pause");
system("cls");
goto main;
if(id!=EditId)
cout<<"\n\n\t\t\t\tNo such record exists"<<endl;

}
else if(op=='4')
{
cout<<"\n\n\t\t\t\tThanks for using the program"<<endl;
}	
else
{
cout<<"\n\n\t\t\t\tYou have chosen an invalid  option"<<endl;
}

}


};
int main()
{
system("COLOR FC");	
SupplierCustomerDetails sc;	
char option;
cout<<"\t\t  _________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\tSupplier and Customer Details"<<endl;
cout<<"\t\t\t\t\tPresented to:"<<endl;
cout<<"\t\t\t\t\t\tSir Syed Ali Shahid"<<endl;
cout<<"\t\t\t\t\tPresented By:"<<endl;
cout<<"\t\t\t\t\t\tBilal Ahmed S3F16BSCS0037"<<endl;
cout<<"\t\t\t\t\t\tSheheryar Mansoor S3F16BSCS0003"<<endl;
cout<<"\t\t\t\t\t\tPakiza Amir S3F16BSCS0036"<<endl;
cout<<"\t\t\t\t\t\tZeeshan Saleem S3F16BSCS0019"<<endl;
cout<<"\t\t\t\t\t\tAteeq Qaiser Ansari S3F16BSCS0018"<<endl;
cout<<"\t\t  _________________________________________________________________________________"<<endl<<endl;
system ("pause");
system ("cls");
cout<<"\t\t_________________________________________________________________________________"<<endl<<endl;
cout<<"\t\t\t\t\t\tMAIN MENU";
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\t\t\t\t[a] Supplier Details"<<endl;
cout<<"\n\n\t\t\t\t\t[b] Customer Details"<<endl;
cout<<"\n\n\t\t\t\t\t[c] Exit"<<endl;
cout<<endl<<"\t\t_________________________________________________________________________________"<<endl;
cout<<"\n\n\t\tSelect Your Option :";
cin>>option;
system("cls");
switch(option)
{
case'a':	
sc.SupplierMenu();
break;
case'b':
sc.CustomerMenu();
break;
case'c':
cout<<"\t\t\t\t\t\tThanks for using the program"<<endl;	
default:
cout<<"You have entered a wrong option";
break;	
}
}

