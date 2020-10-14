#include<iostream>
#include<string>
using namespace std;
void calprice(float price[3][5]);
void display(string name[5],float price[3][5]);
int main()
{
	float price[3][5];
	string name[5];
	for(int i=0;i<5;i++)
	{	cout<<"Enter Product Name : ";
		cin>>name[i];
		cout<<"\tPrice : ";
		cin>>price[0][i];
	}
		calprice(price);
		display(name,price);
	
	
	system("pause");
	return(0); 
}
void calprice(float price[3][5])
{	for(int i=0;i<5;i++)
	{	price[1][i]=price[0][i]*0.07f;
		price[2][i]=price[0][i]+price[1][i];
	}
}
void display(string name[5],float price[3][5])
{	cout<<"No.\tProduct\t\t\tPrice\tVat7%\tNet"<<endl;
	for(int i=0;i<5;i++)
		{
			cout<<i+1<<"\t"<<name[i]<<"\t\t\t"<<price[0][i]<<"\t"<<price[1][i]<<"\t"<<price[2][i]<<endl;;


		}


}