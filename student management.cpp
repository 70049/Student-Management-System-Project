#include<iostream>
#include<conio.h>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
    int choice;
    cout<<"\n\t How Many Student's Record You Want to Submit:- ";
    cin>>choice;
    if(total==0)
    {
        total=total+choice;
        for(int i=0;i<choice;i++)
        {
            cout<<"\n\t\" Enter Data of Student's: \""<<i+1<<endl;
            cout<<"\n\tEnter Name:- ";
            cin>>arr1[i];
            cout<<"\n\tRoll Number:- ";
            cin>>arr2[i];
            cout<<"\n\tEnter Course:- ";
            cin>>arr3[i];
            cout<<"\n\tEnter Class:- ";
            cin>>arr4[i];
            cout<<"\n\tEnter Contact Num.:- ";
            cin>>arr5[i];
            system("cls");
        }
    }
    else{
        for(int i=total;i<total+choice;i++)
        {
            cout<<"\n\t Enter Data of Student's: "<<i+1<<endl;
            cout<<"\n\tEnter Name:- "<<endl;
            cin>>arr1[i];
            cout<<"\n\tRoll Number:- "<<endl;
            cin>>arr2[i];
            cout<<"\n\tEnter Course:- "<<endl;
            cin>>arr3[i];
            cout<<"\n\tEnter Class:- "<<endl;
            cin>>arr4[i];
            cout<<"\n\tEnter Contact Num.:- "<<endl;
            cin>>arr5[i];
        }
    }
    total=total+choice;
}

void show()
{
    if(total==0){
        cout<<"\nNo Data Entered!";
    }
    else{
        for(int i=0;i<total;i++){
        cout<<"\n\t----:DATA OF STUDENT'S:----"<<i+1<<endl;
        cout<<"\nName:- "<<arr1[i];
        cout<<"\nRoll Nu.:- "<<arr2[i];
        cout<<"\nCourse:- "<<arr3[i];
        cout<<"\nClass: - "<<arr4[i];
        cout<<"\nContract:- "<<arr5[i];
    }
  }
  getch();

}

void search()
{
    string rollnu;
    cout<<"\n\t Enter Roll Number Which You Want to Search: ";
    cin>>rollnu;
    for(int i=0;i<total;i++)
    {
        if(rollnu==arr2[i]){
        cout<<"\n\t----:DATA OF STUDENT'S:----"<<i+1<<endl;
        cout<<"\nName:- "<<arr1[i];
        cout<<"\nRoll Nu.:- "<<arr2[i];
        cout<<"\nCourse:- "<<arr3[i];
        cout<<"\nClass: - "<<arr4[i];
        cout<<"\nContact:- "<<arr5[i];
        }
    }
}

void update()
{
    string rollnu;
    cout<<"\n\t Enter Roll Number Which You Want to Search: ";
    cin>>rollnu;
    for(int i=0;i<total;i++)
    {
        if(rollnu==arr2[i]){
        cout<<"\n\t----:STUDENT'S PREVIOUS DATA:----"<<i+1<<endl;
        cout<<"\nName:- "<<arr1[i];
        cout<<"\nRoll Nu.:- "<<arr2[i];
        cout<<"\nCourse:- "<<arr3[i];
        cout<<"\nClass: - "<<arr4[i];
        cout<<"\nContact:- "<<arr5[i];
        cout<<"\n\t Enter Data of Student's: "<<i+1<<endl;
        cout<<"\n\tEnter Name:- "<<endl;
        cin>>arr1[i];
        cout<<"\n\tRoll Number:- "<<endl;
        cin>>arr2[i];
        cout<<"\n\tEnter Course:- "<<endl;
        cin>>arr3[i];
        cout<<"\n\tEnter Class:- "<<endl;
        cin>>arr4[i];
        cout<<"\n\tEnter Contact Num.:- "<<endl;
        cin>>arr5[i];
        }
    }
}

void deleterecord()
{
    int a;
    cout<<"\n\n\t Press 1. to Delete full Data: ";
    cout<<"\n\t Press 2. to Delete Specific Data: ";
    cin>>a;
    if(a==1){
        total=0;
        cout<<endl<<"All record Is Deleted!";
    }
    else{
        string rollnu;
        cout<<"\n\t Enter Roll Number Which you Want to Delete:- ";
        cin>>rollnu;
        for(int i=0;i<total;i++){
            if(rollnu==arr2[i]){
                for(int j=0;j<total;j++){
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+2];
                    arr3[j]=arr3[j+3];
                    arr4[j]=arr4[j+4];
                    arr5[j]=arr5[j+5];
                }
                total--;
                cout<<"\n\t your Specific Data Is Removed:";
            }
        }
    }
}


int main()
{
    system("cls");
    int value;
    while(1)
    {
        cout<<"\n\t\t\t --------------------------------"<<endl;
        cout<<"\n\t\t\t|                               |"<<endl;
        cout<<"\n\t\t\t   STUDENT MANAGEMENT SYSTEM     "<<endl;
        cout<<"\n\t\t\t|                               |"<<endl;
        cout<<"\n\t\t\t --------------------------------"<<endl;
        cout<<"\n\t__________________________________"<<endl;
        cout<<"\n\t  | Press 1. To Enter Data:  |";
        cout<<"\n\t  | Press 2. To Show Data:   |";
        cout<<"\n\t  | Press 3. To Search Data: |";
        cout<<"\n\t  | Press 4. To Update Data: |";
        cout<<"\n\t  | Press 5. To Delete Data: |";
        cout<<"\n\t  | Press 6. To Exit:        |";
        cout<<"\n\t__________________________________\n";
        cout<<"\t ~Select Your Choice:- ";
        cin>>value;
        system("cls");
        switch(value)
        {
        case 1:
            {
            enter();
            break;
        }
        case 2:{
            show();
            break;
            }
        case 3:{
            search();
            break;
            }
        case 4:{
            update();
            break;
            }
        case 5:{
            deleterecord();
            break;
            }
        case 6:{
            exit(0);
            break;
            }
        default:{
            cout<<"\n\t --Invalid Choice--"<<endl;
            system("cls");
            main();
            }
        }
    }
    getch();
}
