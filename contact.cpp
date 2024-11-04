#include<iostream>
#include<string>
using namespace std;
string Name[20],ID[20],EMAIL[20],NICKNAME[20],PHONE[20];
int total=0;  // number of contacts
void enter()  // the input function
{
    int choice;
    cout<<"How Many Users You Want  : ";cin>>choice;
    cout<<endl;
    total=total+choice;
    for(int i=0;i<choice;i++)
    {
        cout<<"Enter The Data Of User  : "<<i+1<<endl<<endl;
        cout<<"Enter The Name  : ";cin>>Name[i];
        cout<<"Enter ID  : ";cin>>ID[i];
        cout<<"Enter Email  : ";cin>>EMAIL[i];
        cout<<"Enter Nickname  : ";cin>>NICKNAME[i];
        cout<<"Enter Phone Number  : ";cin>>PHONE[i];
        cout<<endl;
        cout<<"========= Done ========="<<endl<<endl;

    }

}

void show() //display function
{
    for(int i=0;i<total;i++)
    {

        cout<<"The Data Of User  : "<<i+1<<endl<<endl;
        cout<<" The Name  : "<<Name[i]<<endl;
        cout<<" ID  : "<<ID[i]<<endl;
        cout<<" Email  : "<<EMAIL[i]<<endl;
        cout<<" Nickname  : "<<NICKNAME[i]<<endl;
        cout<<" Phone Number  : "<<PHONE[i]<<endl<<endl;
    }
    cout<<endl;
}

void serch() //search function
{
string id;
cout<<"Enter ID : ";cin>>id;
cout<<endl;
for(int i=0;i<total;i++)
{
    if(id==ID[i])
    {
        cout<<"Show Data Of User : "<<i+1<<endl<<endl;
        cout<<" The Name  : "<<Name[i]<<endl;
        cout<<" ID  : "<<ID[i]<<endl;
        cout<<" Email  : "<<EMAIL[i]<<endl;
        cout<<" Nickname  : "<<NICKNAME[i]<<endl;
        cout<<" Phone Number  : "<<PHONE[i]<<endl;
    }
}


}

void update() // Edit function
{
string id;
cout<<"Enter ID : ";cin>>id;
for(int i=0;i<total;i++)
{
    if(id==ID[i])
    {
        cout<<endl;
        cout<<"### The Previous Data ### "<<endl<<endl;
        cout<<"The Name  : "<<Name[i]<<endl;
        cout<<"ID  : "<<ID[i]<<endl;
        cout<<"Email  : "<<EMAIL[i]<<endl;
        cout<<"Nickname  : "<<NICKNAME[i]<<endl;
        cout<<"Phone Number  : "<<PHONE[i]<<endl<<endl;
        cout<<"============ Deleted ============"<<endl<<endl;
        cout<<"### Enter New Data ### "<<endl<<endl;
        cout<<"Enter The Name  : ";cin>>Name[i];
        cout<<"Enter ID  : ";cin>>ID[i];
        cout<<"Enter Email  : ";cin>>EMAIL[i];
        cout<<"Enter Nickname  : ";cin>>NICKNAME[i];
        cout<<"Enter Phone Number  : ";cin>>PHONE[i];
        cout<<endl;
        cout<<"=========== Saved ==========="<<endl<<endl;

    }
    cout<<endl;
}
}
//--------------------------------------
void delet() // delete function
{
int a;
cout<<"**** Press 1 To Delete All Contacts ****"<<endl;
cout<<"**** Press 2 To Delete Specific Contact ****"<<endl;
cin>>a;
if(a==1)
{
    total=0; // number of contacts
    cout<<"All Contacts Have Been Deleted"<<endl;

}
else if (a==2)
{
    string id;
    cout<<"Enter The ID You Want To Delete  : ";cin>>id;
    for(int i=0;i<total;i++)
    {
        if(id==ID[i])
        {
            for(int j=i;j<total;j++)
            {
                Name[j]=Name[j+1];
                ID[j]=ID[j+1];
                EMAIL[j]=EMAIL[j+1];
                NICKNAME[j]=NICKNAME[j+1];
                PHONE[j]=PHONE[j+1];
            }
            total--;
            cout<<endl;
            cout<<" ============= Deleted ============="<<endl;
        }
    }
}

}
//-------------------------------------
void countc()  // counting function
{
    if (total==1)
    {
        cout<<"== You Have 1 Contact =="<<endl;
    }
    else
    {
    cout<<"You Have "<<total<<" Contacts"<<endl;
    }
}

int main()
{
int value;
while(true)
{

cout<<endl<<endl;
 cout<<"                                            1 - Add User "<<endl;
 cout<<"                                            2 - Show All Users "<<endl;
 cout<<"                                            3 - Search User "<<endl;
 cout<<"                                            4 - Edit User " <<endl;
 cout<<"                                            5 - Delete User "<<endl;
 cout<<"                                            6 - Count Users "<<endl;
 cout<<"                                            0 - Exit "<<endl<<endl;;
 cout<<"                                            Enter Your Choice -> ";cin>>value;
 cout<<"=================================================================="<<endl<<endl;

switch(value)
{
case 1 :
    enter();
    break;
case 2:
    show();
    break;
case 3:
    serch();
    break;
case 4:
    update();
    break;
case 5:
    delet();
    break;
case 6:
    countc();
    break;
case 0:
    exit(0);
    break;
default:
    cout<<"Invalid Input "<<endl;
    break;
}//switch

}//while

    return 0;
}

