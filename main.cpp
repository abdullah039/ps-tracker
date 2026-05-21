#include<iostream>
#include<string>
using namespace std;
void clearscreen();


struct expense{
    string title;
    string category;
    float amount;
    string date;
};

expense e[100];
int a=0;

void addexpense(){
    if(a>=100){
        cout<<"Storage Full.....";
    }
    else{
        cout<<endl;
        cout<<"Title: ";
        cin>>e[a].title;
        cout<<"Category: ";
        cin>>e[a].category;
        cout<<"Amount: ";
        cin>>e[a].amount;
        cout<<"Date: ";
        cin>>e[a].date;
        cout<<"Expense Add Successfully...."<<endl<<endl;
        a++;
    }
    clearscreen();
}

void viewexpense(){
    for(int v=0; v<a; v++){
        if(e[v].title!=" "){
            cout<<endl;
            cout<<"Title: "<<e[v].title<<endl;
            cout<<"Category: "<<e[v].category<<endl;
            cout<<"Amount: "<<e[v].amount<<endl;
            cout<<"Date: "<<e[v].date<<endl;
            cout<<endl<<endl;
        }
        
    }
    clearscreen();
}

void searchexpense(){
    string s;
    bool found=false;
    cout<<"Enter Title:";
    cin>>s;
    for(int se=0;se<a;se++){
        if(s==e[se].title){
            cout<<endl;
            cout<<"Title: "<<e[se].title<<endl;
            cout<<"Category: "<<e[se].category<<endl;
            cout<<"Amount: "<<e[se].amount<<endl;
            cout<<"Date: "<<e[se].date<<endl;
            cout<<endl<<endl;
            found=true;
        }
    }
    if(found==false){
        cout<<"No Record Found...."<<endl;
    }
    clearscreen();
}

void deleteexpense(){
    string d;
    bool del=false;
    cout<<"Enter Category to Delete: ";
    cin>>d;
    for(int D=0;D<a;D++){
        if(d==e[D].category){
            e[D].title=" ";
            e[D].category=" ";
            e[D].amount=0;
            e[D].date=" ";
            del=true;
        }
    }
    if(del==false){
        cout<<"No Record Found....";
    }
    clearscreen();
}

void updateexpense(){
    string u;
    bool update=false;
    cout<<"Enter Category to Update Amount: ";
    cin>>u;
    for(int up=0;up<a;up++){
        if(u==e[up].category){
            cout<<endl;
            cout<<"Amount: ";
            cin>>e[up].amount;
            cout<<endl<<"Amount Updated Successfully...."<<endl;
            update=true;
        }
    }
    if(update==false){
       cout<<"No Record Found"<<endl;
    }
    clearscreen();
}

void calculatetotalexpense(){
    float total=0;
    for(int c=0;c<a;c++){
        total+=e[c].amount;
    }
    cout<<"Total Expenses Amount is: "<<total<<endl;
    clearscreen();
}

void clearscreen(){
    cout<<"\nPress Enter to Continue....";
    cin.ignore();
    cin.get();
    system("cls");
}

int main(){
    while(true){
    cout<<"======================================================"<<endl;
    cout<<"||                  Expense Tracker                 || "<<endl;
    cout<<"======================================================"<<endl;

    cout<<"Choose Option:"<<endl;
    cout<<"1. Add Expense           2. View Expenses"<<endl;
    cout<<"3. Search Expense        4. Delete Expense"<<endl;
    cout<<"5. Update Expense        6. Calculate Total Expense"<<endl;
    cout<<"7. Exit....."<<endl;

    int option;
    cout<<"Choose the Option:";
    cin>>option;

    switch(option){
    case 1:
    addexpense();
    break;
    case 2:
    viewexpense();
    break;
    case 3:
    searchexpense();
    break;
    case 4:
    deleteexpense();
    break;
    case 5:
    updateexpense();
    break;
    case 6:
    calculatetotalexpense();
    break;
    case 7:
    return 0;
    }
}
return 0;
}