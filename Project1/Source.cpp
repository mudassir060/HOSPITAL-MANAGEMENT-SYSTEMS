#include<iostream>
#include<conio.h>
using namespace std;
class login_form
{
private:
	double	user_id;
	string user_type;
	string user_name;
	string password;

public:
	void getid(int i) {
		user_id = i;
	}
	double setid() {
		return user_id;
	}
	void getuser(string u) {
		user_type = u;
	}
	string setuser() {
		return user_type;
	}
	void getname(string n) {
		user_name = n;
	}
	string setname() {
		return user_name;
	}
	void getpassword(string n) {
		password = n;
	}
	string setpassword() {
		return password;
	}
	void submitLogin()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tlogin form\n\n";
		cout << "\t\t\t\t\t\tEnter user id = ";
		cin >> user_id;
		cout << "\t\t\t\t\t\tEnter user type = ";
		cin >> user_type;
		cout << "\t\t\t\t\t\tEnter user name = ";
		cin >> user_name;
		cout << "\t\t\t\t\t\tEnter user password = ";
		cin >> password;
	}

	login_form();
	~login_form();

};

login_form::login_form()
{
	user_id = 323;
	user_type ="ABC";
	user_name = "ABC";
	password = "ABC123";
}

login_form::~login_form()
{
}
class user
{
private:
	int user_id;
	int Password;

public:
	void getuser_id(int x) {
		user_id = x;
	}/*
	void display() {
	cout<<obj.password()
	}*/
	int setuser_id() {
		return user_id;
	}
	void getuer_id(int x) {
		user_id = x;
	}
	user();
	~user();
};


user::user()
{
	user_id = 123;
	Password = 123;
}

user::~user()
{
}

////////////person////////////
class person
{
private:
	int id;
	string fullname;
	string adress;
	string contact;

public:
	person();
	~person();
	void getid(int x) {
		id = x;
	}
	int setid() {
		return id;
	}
	void getfullname(string x) {
		fullname = x;
	}
	string setfullname() {
		return fullname;
	}
	void getadress(string x) {
		adress = x;
	}
	string setadress() {
		return adress;
	}
	void getcontact(string x) {
		contact = x;
	}
	string setcontact() {
		return contact;
	}
	void add_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter New patient data\n";
		cout << "\t\t\t\t\t\t\t\tEnter patient id = ";
		cin >> id;
		cout << "\t\t\t\t\t\t\t\tEnter patient full name= ";
		cin >> fullname;
		cout << "\t\t\t\t\t\t\t\tEnter patient adress= ";
		cin >> adress;
		cout << "\t\t\t\t\t\t\t\tEnter patient contact= ";
		cin >> contact;
	}

};

person::person()
{
}

person::~person()
{
}
////////////Admissions////////////
class admissions
{
private:
	int patient_id;
	int room_id;
	int bed_id;
	string doctor_name;


public:
	void getpatient_id(int x) {
		patient_id = x;
	}
	int setpatient_id() {
		return patient_id;
	}
	void getroom_id(int x) {
		room_id = x;
	}
	int setroom_id() {
		return room_id;
	}
	void getbed_id(int x) {
		bed_id = x;
	}
	int setbed_id() {
		return bed_id;
	}
	void getdoctor_name(string x) {
		doctor_name = x;
	}
	string setdoctor_name() {
		return doctor_name;
	}

	void admit_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter New patient data\n";
		cout << "\t\t\t\t\t\t\t\tEnter patient id = ";
		cin >> patient_id;
		cout << "\t\t\t\t\t\t\t\tEnter patient Room no = ";
		cin >> room_id;
		cout << "\t\t\t\t\t\t\t\tEnter patient bed no= ";
		cin >> bed_id;
		cout << "\t\t\t\t\t\t\t\tEnter patient Treatment Doctor name= ";
		cin >> doctor_name;
	}
	admissions();
	~admissions();
};

admissions::admissions()
{
	patient_id=0;
	room_id=0;
	bed_id=0;
	doctor_name="ABC";
}

admissions::~admissions()
{
}
void welcom() {

	//printing the welcome note
re:
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	system("pause");
	system("cls");

}
void main()
{
	welcom();
	login_form obj;
	person p;
	admissions ad;
	obj.submitLogin();
	system("cls");
	for (int a = 0; a < 8; a++)
	{
		

		int i;
		//giving option to the user for their choice
	b:
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
		cout << "\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
		cout << "\t\t\t\t\t\t _________________________________________________________________ \n";
		cout << "\t\t\t\t\t\t|                                           	                  |\n";
		cout << "\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
		cout << "\t\t\t\t\t\t|             2  >> Add admit Patient Information                 |\n";
		cout << "\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
		cout << "\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
		cout << "\t\t\t\t\t\t|             5  >> Information About the Hospital                |\n";
		cout << "\t\t\t\t\t\t|             6  >> Information About the Hospital                |\n";
		cout << "\t\t\t\t\t\t|             7  >> Information About the Hospital                |\n";
		cout << "\t\t\t\t\t\t|             8  >> Exit the Program                              |\n";
		cout << "\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	a:cout << "\t\t\t\t\t\tEnter your choice: ";cin >> i;
		if (i > 8 || i < 1) { cout << "\n\n\t\t\t\t\t\tInvalid Choice\n";cout << "\t\t\t\t\t\tTry again...........\n\n";goto a; };//if inputed choice is other than given choice
		system("cls");
		if (i == 1)
		{
			p.add_data();
			//system("pause");
			system("cls");
		}
		if (i == 2)
		{
			ad.admit_data();
			//system("pause");
			system("cls");
		}
		
		//Exiting Through the system with a Thank You note........................option 5
		if (i == 8)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
			cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
			system("pause");
			system("cls");
		}

		if (i == 3)
		{
			string paw, c;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password = ";
			cin >> paw;
			c = obj.setpassword();
			if (paw == c)
			{
				//cout << "\n\t\t\t\t\t\tyour id is : " << obj.setid() << "\n\t\t\t\t\t\tuser type : " << obj.setuser() << "\n\t\t\t\t\t\tyour name is : " << obj.setname();
				cout << "\n\t\t\t\t\t\tpatient id is : " << p.setid() << "\n\t\t\t\t\t\tpatient fullname is : " << p.setfullname() << "\n\t\t\t\t\t\tpatient adress is : " << p.setadress() << "\n\t\t\t\t\t\tpatient contact is : " << p.setcontact()  << "\n\t\t\t\t\t\tpatient room No : " << ad.setroom_id() << "\n\t\t\t\t\t\tpatient bed No : " << ad.setbed_id() << "\n\t\t\t\t\t\tpatient Treatment Doctor name : " << ad.setdoctor_name() << "\n\n\t\t\t\t\t\t";

			}
			else { cout << "\n\n\t\t\t\t\t\tInvalid Password\n";cout << "\t\t\t\t\t\tTry again...........\n\n";goto a; };
			system("pause");
			system("cls");
		}
	}
	_getch;
}