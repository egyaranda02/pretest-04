/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
********************************/

#include<iostream>
using namespace std;

struct ElemtList{
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElement(pointer& pBaru);
void insertLast(List& First, pointer pBaru);
void traversal(List First);

main()
{
	pointer pBaru;
	List First;
	int pil;
	createList(First);
	while(1)
	{
		cout<<"1. Input Data"<<endl;
		cout<<"2. Tampilkan Data"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Masukkan Pilihan	: ";cin>>pil;
		switch(pil)
		{
			case 1:
			{
				createElement(pBaru);
				insertLast(First,pBaru);
				break;
			}
			case 2:
			{
				traversal(First);
				break;
			}
			case 3:
			{
				return 0;
				break;
			}
		}
	}
	
}

void createList(List& First)
{
	First=NULL;
}

void createElement(pointer& pBaru)
{
	pBaru=new ElemtList;
	cout<<"Masukkan NPM	: ";cin>>pBaru->npm;
	cout<<"Masukkan Nama	: ";cin>>pBaru->nama;
	cout<<"Masukkan IPK	: ";cin>>pBaru->ipk;
	pBaru->next=NULL;
	cout<<endl;
	system("cls");
}

void traversal(List First)
{
	pointer pBantu;
    pBantu=First;
    cout<<"===============================DATA MAHASISWA==============================="<<endl;
    cout<<"No	NPM		Nama				IPK		"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    int i=1;
	do
	{
        cout<<i<<"	"<<pBantu->npm<<"		"<<pBantu->nama<<"				"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }while(pBantu!=NULL);
    cout<<"============================================================================"<<endl;
        system("pause");
        system("cls");
}

void insertLast (List& First, pointer pBaru)
{
     pointer Last;

    if (First==NULL)
	{
        First=pBaru;
    }
    else 
	{
        Last=First;
        while (Last->next!=NULL)
		{
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
