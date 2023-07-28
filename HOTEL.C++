#include<iostream>
using namespace std;
int main(){
int quant;
int choice;
//Quantity
int Qrooms=0,Qpasta,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
//food item sold
int Srooms=0,Spasta=0,Sburger,Snoodles=0,Sshake=0,Schicken=0;
//Total process of items
int total_rooms=0,Total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

cout<<"\n\tQuantity of item we have";
cout<<"\n Room available:";
cin>>Qrooms;
cout<<"\n Quantity of pasta:";
cin>>Qpasta;
cout<<"\n burger available:";
cin>>Qburger;
cout<<"\n Quantity of noodles:";
cin>>Qnoodles;
cout<<"\n shake available:";
cin>>Qshake;
cout<<"\n Quantity of chicken:";
cin>>Qchicken;

cout<<"\n\t please select from the menu option ";
cout<<"\n\n1) Rooms";
cout<<"\n2) Pasta";
cout<<"\n3) Burger";
cout<<"\n4) Noodles";
cout<<"\n5) shake";
cout<<"\n6) chicken";
cout<<"\n7) Information regarding sales and collection";
cout<<"\n8) Exit";

cout<<"\n\n please Enter your choice";
cin>>choice;

switch(choice)
{
    case 1:

    cout<<"\n\n Enter the number of rooms you want:";
    cin>>quant;
    if(Qrooms-Srooms>=quant)
    {
        Srooms=Srooms+quant;
        total_rooms=(total_rooms+quant*1200);
        cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";

    }
    else
    
        cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
        break;
    
case 2:

    cout<<"\n\n Enter the number of rooms you want:";
    cin>>quant;
    if(Qpasta-Spasta>=quant)
    {
        Spasta=Spasta+quant;
        Total_pasta=(Total_pasta+quant*250);
        cout<<"\n\n\t\t"<<quant<<"pasta is the order!";

    }
    else
    
        cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remaining in hotel";
        break; 

        case 3:

    cout<<"\n\n Enter Burger Quantity:";
    cin>>quant;
    if(Qburger-Sburger>=quant)
    {
        Sburger=Sburger+quant;
        total_burger=(total_burger+quant*120);
        cout<<"\n\n\t\t"<<quant<<"burger is the order!";

    }
    else
    
        cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers remaining in hotel";
        break; 
    
        case 4:

    cout<<"\n\n Enter noodles Quantity:";
    cin>>quant;
    if(Qnoodles-Snoodles>=quant)
    {
        Snoodles=Snoodles+quant;
        total_noodles=(total_noodles+quant*250);
        cout<<"\n\n\t\t"<<quant<<"noodles is the order!";

    }
    else
    
        cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
        break; 

        
        case 5:

    cout<<"\n\n Enter shake Quantity:";
    cin>>quant;
    if(Qshake-Sshake>=quant)
    {
        Qshake=Sshake+quant;
        total_shake=(total_shake+quant*250);
        cout<<"\n\n\t\t"<<quant<<"shake is the order!";

    }
    else
    
        cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel";
        break; 
    
           
        case 6:

    cout<<"\n\n Enter chicken Quantity:";
    cin>>quant;
    if(Qchicken-Schicken>=quant)
    {
        Qchicken=Schicken+quant;
        total_chicken=(total_chicken+quant*250);
        cout<<"\n\n\t\t"<<quant<<"chicken is the order!";

    }
    else
    
        cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken remaining in hotel";
        break; 

     case 7:
     cout<<"\n\tDetails of sales and collection";
      cout<<"\n\n Number of rooms we had:"<<Qrooms;
       cout<<"\n\n Number of rooms we gave for rent"<<Srooms;
        cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
         cout<<"\n\n Totla rooms collections for day:"<<total_rooms;
               
           cout<<"\n\n Number of Pasta we had:"<<Qpasta; 
            cout<<"\n\n NUmber of pasta we sold"<<Spasta;
             cout<<"\n\n Remaining Pasta:"<<Qpasta-Spasta ;
              cout<<"\n\n Details of sales and collection:"<<Total_pasta;

            cout<<"\n\n Number of burger we had:"<<Qburger; 
             cout<<"\n\n NUmber of burger we sold"<<Sburger;
              cout<<"\n\n Remaining burger:"<<Qburger-Sburger ;
               cout<<"\n\n Details of sales and collection:"<<total_burger;

            cout<<"\n\n Number of noodles we had:"<<Qnoodles; 
             cout<<"\n\n NUmber of noodles we sold"<<Snoodles;
              cout<<"\n\n Remaining noodles:"<<Qnoodles-Snoodles ;
               cout<<"\n\n Details of sales and collection:"<<total_noodles;

            cout<<"\n\n Number of shake we had:"<<Qshake; 
             cout<<"\n\n NUmber of shake we sold"<<Sshake;
              cout<<"\n\n Remaining shake:"<<Qshake-Sshake ;
               cout<<"\n\n Details of sales and collection:"<<total_shake;

            cout<<"\n\n Number of chicken we had:"<<Qchicken; 
             cout<<"\n\n NUmber of chicken we sold"<<Schicken;
              cout<<"\n\n Remaining chicken:"<<Qchicken-Schicken ;
               cout<<"\n\n Details of sales and collection:"<<total_chicken;
               break;
               
               case 8:
               exit(0);
           
           default:
           cout<<"\n please select the number mentioned above!";
 
   }
   
}