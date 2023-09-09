
   //welcome to my program this is program to show the number and the amount and the price of the minimarct
#include <iostream>
using namespace std;

int main()
{
   string pass;
        int s;
do{

        cout<<"please enter your pass word\n";
        cin>>pass;
        if(pass=="1234"){
                cout<<"welcome to the minibarct program\n";
                s=1;

    struct minimarct{
    string name[10];
    int num[10];
    int price[10];
    }minimarct;

    int i,price,num,p,n,b,s;
    string name;
    cout<<"please enter the name of the minimarct items\n";
    for(i=0;i<10;i++)
        cin>>minimarct.name[i];
    cout<<"please enter the amount of minimarct items\n";
    for(i=0;i<10;i++)
        cin>>minimarct.num[i];
    cout<<"please enter the price of minimarct items\n";
     for(i=0;i<10;i++)
        cin>>minimarct.price[i];
        cout<<"the item 1 is"<< minimarct.name[0]<<"  "<<"the amount of item 1 is"<<minimarct.num[0]<<"  "<<"the price of item 1 is"<<minimarct.price[0]<<endl;
        cout<<"the item 2 is"<< minimarct.name[1]<<"  "<<"the amount of item 2 is"<<minimarct.num[1]<<"  "<<"the price of item 2 is"<<minimarct.price[1]<<endl;
        cout<<"the item 3 is"<< minimarct.name[2]<<"  "<<"the amount of item 3 is"<<minimarct.num[2]<<"  "<<"the price of item 3 is"<<minimarct.price[2]<<endl;
        cout<<"the item 4 is"<< minimarct.name[3]<<"  "<<"the amount of item 4 is"<<minimarct.num[3]<<"  "<<"the price of item 4 is"<<minimarct.price[3]<<endl;
        cout<<"the item 5 is"<< minimarct.name[4]<<"  "<<"the amount of item 5 is"<<minimarct.num[4]<<"  "<<"the price of item 5 is"<<minimarct.price[4]<<endl;
        cout<<"the item 6 is"<< minimarct.name[5]<<"  "<<"the amount of item 6 is"<<minimarct.num[5]<<"  "<<"the price of item 6 is"<<minimarct.price[5]<<endl;
        cout<<"the item 7 is"<< minimarct.name[6]<<"  "<<"the amount of item 7 is"<<minimarct.num[6]<<"  "<<"the price of item 7 is"<<minimarct.price[6]<<endl;
        cout<<"the item 8 is"<< minimarct.name[7]<<"  "<<"the amount of item 8 is"<<minimarct.num[7]<<"  "<<"the price of item 8 is"<<minimarct.price[7]<<endl;
        cout<<"the item 9 is"<<minimarct.name[8]<<"  "<<"the amount of item 9 is"<<minimarct.num[8]<<"  "<<"the price of item 9 is"<<minimarct.price[8]<<endl;
        cout<<"the item 10 is"<<minimarct.name[9]<<"  "<<"the amount of item 10 is"<<minimarct.num[9]<<"  "<<"the price of item 10 is"<<minimarct.price[9]<<"\n\n";

        cout<<"please enter what do you want from this minimarct\n";
        cin>>name;
        cout<<"how many do you want\n";
        cin>>num;
        for(i=0;i<10;i++)
    if(name==minimarct.name[i]){
        p= minimarct.price[i]*num;
        s=minimarct.num[i]-num;
        cout<<"you sale="<<name<<"  "<<"the price is="<<p<<"\n\n";}
    cout<<"please enter what do you want to buy to this minimarct "<<endl;
    cin>>name;
    cout<<"how many do you want to buy"<<endl;
    cin>>num;
     for(i=0;i<10;i++)
    if(name==minimarct.name[i]){
       s= minimarct.num[i]+num;

       cout<<"you buy to this minimarct "<<name<<"  "<<"the number of"<<name<<"is"<<" "<<s<<"\n\n";
    }
    cout<<"please enter any kind of the item from this minimarct to look the price\n";
    cin>>name;
        for(i=0;i<10;i++)
    if(name==minimarct.name[i]){
        cout<<"the price is "<<" "<<minimarct.price[i]<<"\n\n";
    }
     cout<<"please enter any kind of the item from this minimarct to look the amount\n";
    cin>>name;
     for(i=0;i<10;i++)
     if(name==minimarct.name[i]){
        cout<<"the amount is "<<" "<<minimarct.num[i]<<"\n\n";
     }
     cout<<"\n\n\n\t\t\t\t\t this is your ball\n\n";
      for(i=0;i<10;i++)
      if(name==minimarct.name[i]){
        cout<<"\t\t\t\t\t you buy"<<" "<<name<<endl;
        cout<<"\t\t\t\t\t the amount is"<<num<<endl;
        cout<<"\t\t\t\t\t your price is"<<p<<"\n\n";
      }
cout<<"\t\t this all the items of the minimarct\n\n";
        cout<<"the item 1 is"<< minimarct.name[0]<<"  "<<"the amount of item 1 is"<<minimarct.num[0]<<"  "<<"the price of item 1 is"<<minimarct.price[0]<<endl;
        cout<<"the item 2 is"<< minimarct.name[1]<<"  "<<"the amount of item 2 is"<<minimarct.num[1]<<"  "<<"the price of item 2 is"<<minimarct.price[1]<<endl;
        cout<<"the item 3 is"<< minimarct.name[2]<<"  "<<"the amount of item 3 is"<<minimarct.num[2]<<"  "<<"the price of item 3 is"<<minimarct.price[2]<<endl;
        cout<<"the item 4 is"<< minimarct.name[3]<<"  "<<"the amount of item 4 is"<<minimarct.num[3]<<"  "<<"the price of item 4 is"<<minimarct.price[3]<<endl;
        cout<<"the item 5 is"<< minimarct.name[4]<<"  "<<"the amount of item 5 is"<<minimarct.num[4]<<"  "<<"the price of item 5 is"<<minimarct.price[4]<<endl;
        cout<<"the item 6 is"<< minimarct.name[5]<<"  "<<"the amount of item 6 is"<<minimarct.num[5]<<"  "<<"the price of item 6 is"<<minimarct.price[5]<<endl;
        cout<<"the item 7 is"<< minimarct.name[6]<<"  "<<"the amount of item 7 is"<<minimarct.num[6]<<"  "<<"the price of item 7 is"<<minimarct.price[6]<<endl;
        cout<<"the item 8 is"<< minimarct.name[7]<<"  "<<"the amount of item 8 is"<<minimarct.num[7]<<"  "<<"the price of item 8 is"<<minimarct.price[7]<<endl;
        cout<<"the item 9 is"<<minimarct.name[8]<<"  "<<"the amount of item 9 is"<<minimarct.num[8]<<"  "<<"the price of item 9 is"<<minimarct.price[8]<<endl;
        cout<<"the item 10 is"<<minimarct.name[9]<<"  "<<"the amount of item 10 is"<<minimarct.num[9]<<"  "<<"the price of item 10 is"<<minimarct.price[9]<<"\n\n";
        }
        else{
            cout<<"wrong pass word\n";
            cout<<"please try again\n";}
}while(s!=1);
return 0;
}
