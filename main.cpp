#include<iostream>
#include<string>
#include<fstream>
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
        ofstream fout("store.txt",ios::app | ios::out);
        cout<<endl;
        cout<<"Title (Single Word e.g; office): ";
        cin>>e[a].title;
        fout<<e[a].title<<endl;
        cout<<"Category (Single Word e.g; bill): ";
        cin>>e[a].category;
        fout<<e[a].category<<endl;
        cout<<"Amount: ";
        cin>>e[a].amount;
        fout<<e[a].amount<<endl;
        cout<<"Date: ";
        cin>>e[a].date;
        fout<<e[a].date<<endl;
        fout<<"--------------------"<<endl;
        cout<<"Expense Add Successfully...."<<endl<<endl;
        a++;
        fout.close();
    }
    clearscreen();
}

void viewexpense(){
    ifstream fin("store.txt",ios::in);
    // for(int v=0; v<a; v++){
    //     if(e[v].title!=" "){
    //         cout<<endl;
    //         cout<<"======================="<<endl;
    //         cout<<"||      Expense "<<v+1<<"      ||"<<endl;
    //         cout<<"======================="<<endl;
    //         cout<<"Title: "<<e[v].title<<endl;
    //         cout<<"Category: "<<e[v].category<<endl;
    //         cout<<"Amount: "<<e[v].amount<<endl;
    //         cout<<"Date: "<<e[v].date<<endl;
    //         cout<<endl;
    //     }
    // }
    cout<<"======================="<<endl;
    cout<<"||      Expenses      ||"<<endl;
    cout<<"======================="<<endl;
    string t,c,a,d,line;
    while(getline(fin,t)){
    getline(fin,c);
    getline(fin,a);
    getline(fin,d);
    getline(fin,line);

    cout<<"Title: "<<t<<endl;
    cout<<"Category: "<<c<<endl;
    cout<<"Amount: "<<a<<endl;
    cout<<"Date: "<<d<<endl;
    cout<<"--------------------------"<<endl;
    }
    
    fin.close();
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
            cout<<"======================="<<endl;
            cout<<"||      Expense "<<se+1<<"      ||"<<endl;
            cout<<"======================="<<endl;
            cout<<"Title: "<<e[se].title<<endl;
            cout<<"Category: "<<e[se].category<<endl;
            cout<<"Amount: "<<e[se].amount<<endl;
            cout<<"Date: "<<e[se].date<<endl;
            cout<<endl;
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
    cout<<endl<<"Enter Category to Update Amount: ";
    cin>>u;
    for(int up=0;up<a;up++){
        if(u==e[up].category){
            cout<<"Amount: ";
            cin>>e[up].amount;
            cout<<"Amount Updated Successfully...."<<endl;
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
    cout<<endl<<"Total Expenses Amount is: "<<total<<endl;
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
        clearscreen();
        addexpense();
        break;
        case 2:
        clearscreen();
        viewexpense();
        break;
        case 3:
        clearscreen();
        searchexpense();
        break;
        case 4:
        clearscreen();
        deleteexpense();
        break;
        case 5:
        clearscreen();
        updateexpense();
        break;
        case 6:
        clearscreen();
        calculatetotalexpense();
        break;
        case 7:
        return 0;
        default:
        cout<<"Invalid Option...";
        clearscreen();
        break;
    }
}

return 0;
}