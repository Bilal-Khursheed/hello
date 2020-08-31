#include <iostream>
#include <string>

using namespace std;

struct datastructure{
	string name;
	
	string position;
	
	string gender;
	
};

class general{
	static int x,y; //x input y output
	datastructure a[6];
	public:

		void getdata() //get data in every derived class
		{
			
	
			cout << "\nData "<<x<< endl;
			cout << "Name:tyxt "; cin >> a[x].name;
			cout << "Position: "; cin >> a[x].position;
			cout << "Gender: "; cin >> a[x].gender;
			x++;
			

		}
void showdata() //data appear in every derived class
{
		cout<< "\n\t\tData Display: \n";


		
		cout << "\nData "<<y<< endl;
	cout << "Name: " << a[y].name<< endl;
	cout << "Position: "<< a[y].position<< endl;
	cout << "Gender: " << a[y].gender<< endl;
	y++;
	

}

};



class CEO{
	
	int numberofcars,numberofshares,yearlyincome;
	general a; //composition
	
	public:
	void getdata(){
		cout<< "\nCEO DATA\n";
			a.getdata(); 
			cout << "Number of Cars: "; cin >> numberofcars;
			cout << "Number of Shares: "; cin >> numberofshares;
		}
		
		void getdata(int ){  //overloading
			    cout<< "\nCTO DATA\n";
			    a.getdata();;
				cout << "Yearly income: "; cin >> yearlyincome;
			    cout << "Number of Shares: "; cin >> numberofshares;
			
		}
void showdata(){
	cout<< "\nCEO DATA\n";
	a.showdata();
	cout << "Number of Cars: " << numberofcars<< endl;
	cout << "Number of Shares: "<< numberofshares<< endl;
	
}

void showdata(int){ //overloading
	cout<< "\nCTO DATA\n";
	a.showdata();
	cout << "Yearly Income: " << yearlyincome<< endl;
	cout << "Number of Shares: "<< numberofshares<< endl;
	
}
	
};


class FinanceManager : public general{
	string budgettype;
	int salary,totalbudget;
	
	public:
		void getdata(){
			cout<< "\nFinance Manager DATA\n";
			general::getdata(); //overriding
			cout << "Budget Type: "; cin >> budgettype;
			cout << "Total Budget: "; cin >> totalbudget;
			cout << "Salary: "; cin >> salary;
		}
		
void showdata(){
	cout<< "\nFinance Manager DATA\n";
			general::showdata();
	        cout << "Budget Type: "<< budgettype;
			cout << "Total Budget: "<< totalbudget<< endl;
			cout << "Salary: "<< salary<< endl;

}
};


class ITmanager:public general{
	string numberofcomputers,qlf;
	
	public:
		void getdata(){
			cout<< "\nIT Manager DATA\n";
			general::getdata();
			cout << "Number Of Computers: "; cin >> numberofcomputers;
			cout << "Qualification: "; cin >> qlf;
			
		}
void showdata(){
	cout<< "\nIT Manager DATA\n";
	general::showdata();
	cout << "Number Of Computers:: "<< numberofcomputers<< endl;
			cout << "Qualification: "<< qlf<< endl;
		
}
	
};


class Administrator:public general{
	string yos,salaryv;
	
	public:
		void getdata(){
			cout<< "\nAdministrator DATA\n";
			general::getdata();
			cout << "Years of Service: "; cin >> yos;
			cout << "Salary: "; cin >> salaryv;
			
		}
		
void showdata(){
		cout<< "\nAdministrator DATA\n";
	general::showdata();
	cout << "Years of Service: "<< yos<< endl;
			cout << "Salary: "<< salaryv<< endl;
			
}
	
};

int main(){
	
	CEO c1,c2;
	
	FinanceManager f1;
	
	ITmanager it1;
	
	Administrator admin1;
	

	
	c1.getdata(); //ceo (cheif exeteive officer)
	
	c2.getdata(1); //cto (cheif tech officer)
	
	admin1.getdata();//Admistertion
	
	it1.getdata(); // it manager
	
	f1.getdata(); //finance manager
	
	
	c1.showdata();
	
	c2.showdata(2);
	
	admin1.showdata();
	
	it1.showdata();
	
	f1.showdata();
	
	return 0;
}



