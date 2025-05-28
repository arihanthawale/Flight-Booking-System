#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;

class d_booking// class for domestic flight booking
{
protected:
    int pnr;//passenger number record
    char f_d[10],toja[7],tojd[7];//flight details/flight name ,stores arrival time, stores departure time. 
    long int doj;//date of journeyinddmmyy format
    int choice,src,dest;//flight choice , source and destination
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
    int j_detail()//function to collect user input and display domestic flights journey details
    {
        cout << "\nEnter Date of Flight(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.New York(1) \t2.New Jersey(2) \t3.Sydney(3) \t4.Los Angeles(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition(newyork <-> new jersey)
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition(newyork<->sydney)
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$100\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$100\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$100\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition(newyork<->los angeles)
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$250\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$300\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition(sydney<->new jersey)
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$140\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$180\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition(new jersey<->los angeles)
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$200\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$150\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$200\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition(sydney<->los angeles)
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Eagle(1)\t08:00\t\t11:05\t\t$180\t\tRefundable\n";
            cout << "2.Falcon(2)\t14:00\t\t17:05\t\t$50\t\tRefundable\n";
            cout << "3.Jet Speed(3)\t19:00\t\t22:05\t\t$150\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nDestination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()//handles the user's flight selection after showing available options
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Eagle"<<endl;
                strcpy(f_d,"Eagle");//copies eagle to char array f_d.
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");//copies string "8:00 "to tojd
                strcpy(toja,"11:05");//copies 11:05 to toja
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Falcon"<<endl;
                strcpy(f_d,"Falcon");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Jet Speed" << endl;
                strcpy(f_d,"Jet Speed");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();// calls select_flight again on line 96
        }
    }
};

class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];//time of arrival and departure for international
    long int doji;//date of journey for intertnational
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }

    int j_detaili()
    {
        cout << "Enter Date of Flight(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.London(1) \2.Dubai(2) \3.Quatar(3) \4.Singapore(4) \5.Thailand(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$215\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$240\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$255\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$213\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$250\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$290\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$420\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$170\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$140\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$170\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$100\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$250\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Speed(1)\t10:00\t\t14:05\t\t$140\tRefundable\n";
            cout << "2.Zoom(2)\t14:00\t\t18:05\t\t$120\tRefundable\n";
            cout << "3.Fly Away(3)\t18:00\t\t22:05\t\t$140\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//this function allows users to search for international flights between predefined cities.
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Speed" << endl;
            strcpy(f_i,"Speed");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Zoom" << endl;
               strcpy(f_i,"Zoom");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Fly Away" << endl;
            strcpy(f_i,"Fly Away");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking    ////////////// inherits from two base classes d_booking and i_booking(multiple inheritance)
{
protected:
    char f_name[20],l_name[20],email[50];//////////// passengers first name , last name , email
    int age,gender;
    long int c_no;////////////////////// contact no
public:
    void p_detail(int x)//////////////////////// pasenger details 
    {   if(x==1)
        { j_detail();//////////////////////////////////////////////////
          select_flight();/////////////////////////////////////////////doubttttttttttttttttttttttt
        }
          else
          {  j_detaili();
             select_flighti();
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};



class payment////////////////// class for payment details
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;///// choice1 for taking payment options choice from user
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: 1.West Blue Bank(1) 2.Naga Bank(2) 3.Standard Bank(3) 4.Personal Bank(4) 5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)/////////////////Takes a single argument: p, which is an object of class passenger.( to store a passenger's data in a file.)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}


/*ofstream = output file stream (used to write to files).

fin is the stream object.

"domestic.txt" is the name of the file that will store the data.

ios::binary = open the file in binary mode (raw memory format).

ios::app = open the file in append mode (write at the end).*/

void cancelticket(int x)//Takes an integer parameter x, which most likely represents a PNR number (used to identify a passenger's booking). purpose: to cancel a ticket by removing the record of the matching PNR from the file.
{  passenger p;
    int f=0;                                            //f acts as a flag to track if the PNR was found. It will be set to 1 if the record to be canceled is found.
   ifstream fout("domestic.txt",ios::binary|ios::app);/////////////o(ios:app open in append mode)
   ofstream fin("domestic1.txt",ios::binary|ios::app);///////////////////Opens or creates a new file called domestic1.txt for output (writing).
   fout.read((char *)&p,sizeof(p));///////Reads a record (i.e., a passenger object) from the file.
   while(fout)
   {
     if(p.getpnr()!=x) //Checks if the PNR number of the current passenger object p is not equal to x (i.e., the one we want to cancel).
      fin.write((char *)&p,sizeof(p));//If the PNR does not match the one to be cancelled, this line writes the passenger record to domestic1.txt
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: $100\n";
         f++;  // increment flag
     }
     fout.read((char *)&p,sizeof(p));// reads the next passenger from domestic.txt
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");//Deletes the original file "domestic.txt" — because it may contain the now-cancelled ticket.
   rename("domestic1.txt","domestic.txt");//renames the temporary file domestic1.txt to domestic.txt

}



void checkticket(int x)///takes an integer parameter `x`, representing the **PNR number** entered by the user to look up a ticket.
{  passenger p;//this will be used to read passenger records from the file and check each one.
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//Opens the file domestic.txt in binary mode for reading.
   fout.read((char *)&p,sizeof(p));//Reads the first record from the file into the object `p`. It casts the address of `p` to `char*` since `read()` expects a character pointer.
   while(fout)//
   {
     if(p.getpnr()==x)//compares the `pnr` of the current record with the user-supplied `x`. Uses the `getpnr()` method of the `passenger` class.     
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));//- Reads the next record into `p` to continue the loop.
   }
   fout.close();//closes file after loop ends
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)//used to **store international ticket booking details** into a file.
{  ofstream fin("international.txt",ios::binary|ios::app);//"international.txt" is the filename where international bookings are saved.
   fin.write((char*)&p,sizeof(p));//`(char*)&p` casts the address of the object to a `char*`, which is required by the `write()` method.
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//Opens the file international.txt in binary input mode and append mode.
   ofstream fin("international1.txt",ios::binary|ios::app);// This file will hold **all passengers except the one whose ticket is canceled** (used for rewriting).

   fout.read((char *)&p,sizeof(p));//Reads the first passenger record from international.txt into the object p.
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));// If the PNR doesn't match, write the passenger object `p` to the new file (`international1.txt`).
      else
     {
         p.dispi();
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: $100\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));//Read the next passenger record and continue the loop.

   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}




int main()
{

    class d_booking d1;//d1: domestic booking handler
    class i_booking i1;// i1: international booking handler
    class passenger p1;// p1: passenger object that stores passenger data
    class payment p2;//p2: payment handler object.


    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Airline Flight Booking System" << endl << endl;

    cout << "\n\n\t\t\t1.Book Flight(1) \n\t\t\t2.Cancel Fight(2) \n\t\t\t3.Check Ticket(3) \n\t\t\t4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n1.Domestic Fights(1) \n2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
}

