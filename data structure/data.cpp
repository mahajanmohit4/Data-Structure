

#include<iostream>

using namespace std;

class data
{
	unsigned int menuItem, frequency;
	string name;
	data *next;

	public :
		data *insertData(string name1,unsigned int menuItem1, unsigned int frequency1)
		{
			data *d1 = new data();
			d1->name = name1;
			d1->menuItem = menuItem1;
			d1->frequency = frequency1;
		}

		void connection(data *temp1,data *temp2)
		{
			temp1->next = temp2;
		}

		void traverse(data *temp)
		{
			data* tempNext = temp;
			while(tempNext!=NULL)
			{
				cout<<endl<<tempNext->name;
				cout<<endl<<tempNext->menuItem;
				cout<<endl<<tempNext->frequency<<endl;
				tempNext = tempNext->next;
			}
		}

};

int main()
{
	string name;
	unsigned int menuItem,frequency;

	cout<<endl<<"Enter Name, MenuItem and Frequency : ";
	cin>>name>>menuItem>>frequency;
	data *d1 = d1->insertData(name,menuItem,frequency);

	cout<<endl<<"Enter Name, MenuItem and Frequency : ";
	cin>>name>>menuItem>>frequency;
	data *d2 = d2->insertData(name,menuItem,frequency);

	cout<<endl<<"Enter Name, MenuItem and Frequency : ";
	cin>>name>>menuItem>>frequency;
	data *d3 = d3->insertData(name,menuItem,frequency);

	cout<<endl<<"Enter Name, MenuItem and Frequency : ";
	cin>>name>>menuItem>>frequency;
	data *d4 = d4->insertData(name,menuItem,frequency);

	d1->connection(d1,d2);
	d1->connection(d2,d3);
	d1->connection(d3,d4);

	d1->traverse(d1);
	return 0;
}


