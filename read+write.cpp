// fp1.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include<fstream>
#include <string.h>
#include<stdlib.h>


using namespace std;


/*class store
{
private:
	string store_name;
public:
	void store::store_name()
	{
		this->store_name = "Maula Jutt Store";
	}
};*/



class items 
{
protected:
	int serial_no;
	string type;
	string name;
	int stoke;
	int item_saled;
	int item_purchased;
	int purchase_price;
	int sale_price;
	int profit_per_item;

public:
	void add_item(string gen, string nm, int sr, int pp, int sp, int st);
	int view_item();
	//int sale_item();

};


class food :public items
{
private:
	int calories;
	string expiry;
	int serial_no;
	string item_name;
	int stoke;
	int item_saled;
	int item_purchased;
	int purchase_price;
	int sale_price;
	int profit_per_item;

public:

	void add_item(string gen, string nm, int sr, int pp, int sp, int st)
	{
		//this->stoke++;
		this->serial_no = sr;
		this->expiry = gen;
		//this->calories = cal;
		this->item_name = nm;
		this->stoke = st;
		this->purchase_price = pp;
		this->sale_price = sp;
	

/*		fp1 = fopen("Food_Record.txt", "a");
		fprintf(fp1, "Item name -> %s\n", item_name);
		fprintf(fp1, "seriol No = %d\n", serial_no);
		fprintf(fp1, "purchse price = %d\n", purchase_price );
		fprintf(fp1, "sale price = %d\n", sale_price);
		fprintf(fp1, "Expiry = %s\n", gen);
		//fprintf(fp1, "Calories per item = %s\n", calories);
		fprintf(fp1, "stoke remained = %d", stoke);
		fprintf(fp1,"\n\n");
		fclose(fp1);*/
		//fprintf(fp1, "minimum of fourth column = %f\n\n", min3);

		ofstream fp_out;

		fp_out.open("Food_Record.txt", ios::app);
		fp_out << endl<< endl << endl;

		fp_out << "Item name " << "==" << item_name<<endl;
		fp_out << "serial no" << "==" << serial_no <<endl;
		fp_out << "Purchase price " << "==" << purchase_price <<endl;
		fp_out << "sale price " << "==" << sale_price <<endl;

		fp_out << "Expiry " << "==" << gen <<endl;
		fp_out << "stoke remained " << "==" << stoke <<endl;
		
		fp_out.close();
		//return 0;
	}
	
	
	struct data 
		{
			char name [50];
			char brand[50];
			char sr_no[50];
			char sp[50];
			char pp[50];
			char stk[50];

			char data_string[30];
		};
	
	
	
	
	
	
	
	
	
	
	int view_item()
	{



		struct data d[150];


		string line_read;
		ifstream file_read;

		file_read.open("Food_Record.txt");
		int i = 0;
		if (file_read.is_open())
		{
			while (!file_read.eof())
			{
				getline(file_read, line_read, '\n');               															  														 
				strcpy(d[i].name, line_read.c_str());
				fflush(stdin);	

				getline(file_read, line_read, '\n');            
				strcpy(d[i].sr_no, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');      
				strcpy(d[i].pp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');          
				strcpy(d[i].sp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].brand, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].stk, line_read.c_str());
				fflush(stdin);



				cout << d[i].name << "\n";
				cout << d[i].sr_no << "\n";
				cout << d[i].pp << "\n";
				cout << d[i].sp << "\n";
				cout << d[i].brand << "\n";
				cout << d[i].stk << endl<<endl<<endl;


				i++;




			}
		}

		file_read.close();




		return 1;


	}
	
	


	//int view()
};




class stationary :public items
{
private:
	string brand;
	int serial_no;
	string item_name;
	int stoke;
	int item_saled;
	int item_purchased;
	int purchase_price;
	int sale_price;
	int profit_per_item;
public:
	void add_item(string gen, string nm, int sr, int pp, int sp, int st)
	{
		this->serial_no = sr;
		this->brand = gen;
		this->item_name = nm;
		this->stoke = st;
		this->purchase_price = pp;
		this->sale_price = sp;


		ofstream fp_out;

		fp_out.open("Stationary_Record.txt", ios::app);

		fp_out << "Item name " << "==" << item_name << endl;
		fp_out << "serial no" << "==" << serial_no << endl;
		fp_out << "Purchase price " << "==" << purchase_price << endl;
		fp_out << "sale price " << "==" << sale_price << endl;

		fp_out << "Brand " << "==" << gen << endl;
		fp_out << "stoke remained " << "==" << stoke << endl;
		fp_out.close();
		//return stoke;
	}



	struct data 
		{
			char name [50];
			char brand[50];
			char sr_no[50];
			char sp[50];
			char pp[50];
			char stk[50];

			char data_string[30];
		};



	
	
	
	
	
	int view_item()
	{

		struct data d[150];


		string line_read;
		ifstream file_read;

		file_read.open("Stationary_Record.txt");
		int i = 0;
		if (file_read.is_open())
		{
			while (!file_read.eof())
			{
				getline(file_read, line_read, '\n');               															  														 
				strcpy(d[i].name, line_read.c_str());
				fflush(stdin);	

				getline(file_read, line_read, '\n');            
				strcpy(d[i].sr_no, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');      
				strcpy(d[i].pp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');          
				strcpy(d[i].sp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].brand, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].stk, line_read.c_str());
				fflush(stdin);



				cout << d[i].name << "\n";
				cout << d[i].sr_no << "\n";
				cout << d[i].pp << "\n";
				cout << d[i].sp << "\n";
				cout << d[i].brand << "\n";
				cout << d[i].stk << endl<<endl<<endl;


				i++;




			}
		}

		file_read.close();




		return 1;


	}
	





	

};

class toileteries :public items
{
private:
	string brand;
	int serial_no;
	string item_name;
	int stoke;
	int item_saled;
	int item_purchased;
	int purchase_price;
	int sale_price;
	int profit_per_item;
public:
	void add_item(string gen, string nm, int sr, int st, int pp, int sp)
	{
		this->serial_no = sr;
		this->brand = gen;
		this->item_name = nm;
		this->stoke = st;
		this->purchase_price = pp;
		this->sale_price = sp;


		ofstream fp_out;

		fp_out.open("Toileteries_Record.txt", ios::app);

		fp_out << "Item name " << "==" << item_name << endl;
		fp_out << "serial no" << "==" << serial_no << endl;
		fp_out << "Purchase price " << "==" << purchase_price << endl;
		fp_out << "sale price " << "==" << sale_price << endl;

		fp_out << "Brand " << "==" << gen << endl;
		fp_out << "stoke remained " << "==" << stoke << endl;
		fp_out.close();
		//return stoke;
	}






	struct data 
		{
			char name [50];
			char brand[50];
			char sr_no[50];
			char sp[50];
			char pp[50];
			char stk[50];

			char data_string[30];
		};



	
	
	
	
	
	int view_item()
	{

		struct data d[150];


		string line_read;
		ifstream file_read;

		file_read.open("Toileteries_Record.txt");
		int i = 0;
		if (file_read.is_open())
		{
			while (!file_read.eof())
			{
				getline(file_read, line_read, '\n');               															  														 
				strcpy(d[i].name, line_read.c_str());
				fflush(stdin);	

				getline(file_read, line_read, '\n');            
				strcpy(d[i].sr_no, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');      
				strcpy(d[i].pp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');          
				strcpy(d[i].sp, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].brand, line_read.c_str());
				fflush(stdin);

				getline(file_read, line_read, '\n');
				strcpy(d[i].stk, line_read.c_str());
				fflush(stdin);



				cout << d[i].name << "\n";
				cout << d[i].sr_no << "\n";
				cout << d[i].pp << "\n";
				cout << d[i].sp << "\n";
				cout << d[i].brand << "\n";
				cout << d[i].stk << endl<<endl<<endl;


				i++;




			}
		}

		file_read.close();




		return 1;


	}
	







};





int main()
{
//	store str;
	items it;
	food fd;
	stationary stn;
	toileteries tl;
	//it.add_item(12/6/2017,"Zinger_Burger",0011,100,150,12);

	fd.add_item("12/6/2017","Zinger_Burger",0011,100,150,12);
	stn.add_item("Dollar","pencil",0012,5,10,10);
	tl.add_item("Sunsilk","Shampoo",0013,200,250,5);
	fd.add_item("12/6/2017","Zinger_Burger",0011,100,150,12);
	stn.add_item("Dollar","pencil",0012,5,10,10);
	tl.add_item("Sunsilk","Shampoo",0013,200,250,5);
	
	fd.view_item();
	puts("*********&&&&&&&&&&&&&&**********%%%%%%%%%%%%%%%%%%%%%%***********$$$$$$$$$$$");
	stn.view_item();
	puts("*********&&&&&&&&&&&&&&**********%%%%%%%%%%%%%%%%%%%%%%***********$$$$$$$$$$$");
	tl.view_item();
		puts("*********&&&&&&&&&&&&&&**********%%%%%%%%%%%%%%%%%%%%%%***********$$$$$$$$$$$");

	
	
	
    return 0;
}


