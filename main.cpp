#include <iostream>
using namespace std;
class BankAccount{
public:
string firstname;
string lastname;
string mothername;
string address;
string username;
string password;
string accounttype;
double balance=0;


double getbalance()
{
    return balance;
}

string getusername()
{
    return username;
}


void newAccount()
{
    cout<<"ENTER YOUR FIRST NAME  :";
    cin >> firstname;
    cout<<"ENTER YOUR LAST NAME   :";
    cin >> lastname;
    cout<<"ENTER YOUR MOTHER NAME :";
    cin >> mothername;
    cout<<"ENTER YOUR ADDRESS     :";
    cin >> address;
    cout<<endl;

    cout<<"---SELECT ACCOUNT TYPE---"<<endl<<endl;
    cout<<"1.SAVING ACCOUNT "<<endl;
    cout<<"2.CURRENT ACCOUNT"<<endl;


    cout<<endl;

    int ch;
    cout<<"ENTER YOUR CHOICE :";
    cin>>ch;
    cout<<endl;

    switch (ch)
    {
    case 1:
        accounttype="SAVING ACCOUNT";
        cout<<"GENERATING SAVING ACCOUNT......."<<endl<<endl;
        break;

    case 2:
        accounttype="CURRENT ACCOUNT";
        cout<<"GENERATING CURRENT ACCOUNT.......  "<<endl<<endl;
        break;



    default:
        cout <<"INVALID CHOICE" <<endl;
        break;

}
     if(ch==1 ||  ch==2)
     {
        cout << "CREATE USERNAME: ";
        cin >> username;
        cout << "CREATE PASSWORD: ";
        cin >> password;
        cout<<endl<<"CURRENT ACCOUNT CREATED SUCCESSFULLY..........."<<endl;
     }
     else
     {
         cout<<"PLEASE ENTER CORRECT CHOICE....."<<endl;
     }

}

int login(string name,string pass)
{
    if(name==username && pass==password)
    {
        cout<<"LOGIN SUCCESSFULLY......"<<endl;
        cout<<endl;
        cout<<"WELCOME "<<firstname<<endl;
        return 0;
    }
    else
    {

         return 1;
    }
    return 0;
}


 void getcheckBalance()
{
    cout<<"---------- CHECK BALANCE ------------"<< endl;

    cout<<"       ACCOUNT BALANCE "<<   balance  << endl;
    cout<<endl;
    cout<< "OK...." <<endl;

    }

 void depositCash()
 {
     cout<<"----------DEPOSIT CASH------------"<<endl<<endl;
     cout<<"CURRENT BALANCE :"<< balance << endl;
     double depositamt;
     cout<<"ENTER THE DEPOSIT AMOUNT :";
     cin>>depositamt;
     balance = balance + depositamt;
     cout << "CASH DEPOSIT SUCCESSFUL...." << endl;
    cout << "OK..." << endl;
}

void withdrawalCash()
{
    cout<<"----------WITHDRAWAL CASH------------"<<endl<<endl;
    cout<<"CURRENT BALANCE :"<< balance << endl;
    double withdrawalamt;

    cout<<"ENTER THE WITHDRAWAL AMOUNT :";
    cin>>withdrawalamt;
    if(balance>=withdrawalamt)
  {
     balance = balance - withdrawalamt;
     cout << "CASH WITHDRAW SUCCESSFUL...." << endl;
    cout <<  "OK..." << endl;
  }
  else
  {
      cout<<"SORRY....YOU HAVE INSUFFICIENT BALANCE "<<endl;
      cout<<"CASH WITHDRAWAL FAILED...." << endl;
  }
}

void accountInfo()
{
   cout<<"----------ACCOUNT INFO------------"<<endl<<endl;
   cout<<"ACCOUNT TYPE : "<<accounttype<< endl;
   cout<<"USER NAME    : "<< username << endl;
   cout<<"PASSWORD     : "<< password << endl;
   cout<<"FIRST NAME   : "<<firstname<<endl;
   cout<<"LAST  NAME   : "<<lastname<<endl;
   cout<<"MOTHER NAME  : "<<mothername<<endl;
   cout<<"ADDRESS      : "<<address<<endl<<endl;

   cout<<"OK......"<< endl;

}
void updateAcc()
{
        string CH;
        int ch;
        cout<<"------ACCOUNT TYPE CHANGE-------- :"<<endl<<endl;
        cout << endl;
        cout << "CURRENT ACCOUNT TYPE : " << accounttype << endl << endl;
        cout << "SELECT ACCOUNT TYPE  : " << "1.SAVING  ACCOUNT "<< endl;
        cout << "                       2.CURRENT ACCOUNT "<< endl<< endl;
        cout << "ENTER YOUR CHOICE :" ;
        cin >> ch;
        cout << "DO YOU REALLY WANT TO CHANGE ACCOUNT TYPE ?(yes/no) ";
        cin >> CH;
        if(CH == "yes" || CH =="YES")
        {
        if(ch==1)
        accounttype = "SAVING  ACCOUNT" ;
        else if(ch==2)
        accounttype = "CURRENT ACCOUNT" ;
        cout << "...OK ACCOUNT TYPE UPDATED" << endl;
        }
        else if(CH == "no" || CH == "NO")
        {
        cout << "...OK ACCOUNT TYPE NOT UPDATED" << endl;
        }
        cout << endl;

        cout<<"OK......ACCOUNT TYPE UPDATED"<<endl<<endl;
}
void updateUsername()
{
         string newusername=" ";
         string CH;
         cout << "--- USERNAME CHANGE ---" << endl;
         cout << "CURRENT NAME IS : " << username << endl;
         cout << "ENTER NEW NAME  : ";
         cin >> newusername;

         cout << "DO YOU REALLY WANT TO CHANGE " << username << " TO " << newusername << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             username = newusername;
             cout<<"...OK USERNAME UPDATED" << endl;
            }
        else
            {
             cout <<"USERNAME UPDATE CANCEL"<< endl;
            }

}
void updatePassword()
{
         string newpassword=" ";
         string CH;
         cout << "--- PASSWORD CHANGE ---" << endl;
         cout << "CURRENT PASSWORD IS : " << password << endl;
         cout << "ENTER NEW PASSWORD  : ";
         cin >> newpassword;


         cout << "DO YOU REALLY WANT TO CHANGE " << password << " TO " << newpassword << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             password = newpassword;
             cout<<"...OK USERNAME UPDATED" << endl;
            }
        else
            {
             cout <<"USERNAME UPDATE CANCEL"<< endl;
            }
}
void updateFirstname()
{
         string newfirstname=" ";
         string CH;
         cout << "--- FIRSTNAME CHANGE ---" << endl;
         cout << "CURRENT FIRSTNAME IS : " << firstname << endl;
         cout << "ENTER NEW FIRSTNAME  : ";
         cin >> newfirstname;

         cout << "DO YOU REALLY WANT TO CHANGE " << firstname << " TO " << newfirstname << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             firstname = newfirstname;
             cout<<"...OK FIRSTNAME UPDATED" << endl;
            }
        else
            {
             cout <<"FIRSTNAME UPDATE CANCEL"<< endl;
            }
            }
void updateLastname()
{
    string newlastname=" ";
         string CH;
         cout << "--- LASTNAME CHANGE ---" << endl;
         cout << "CURRENT LASTNAME IS : " << lastname << endl;
         cout << "ENTER NEW LASTNAME  : ";
         cin >> newlastname;

         cout << "DO YOU REALLY WANT TO CHANGE " << lastname << " TO " << newlastname << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             lastname = newlastname;
             cout<<"...OK LASTNAMENAME UPDATED" << endl;
            }
        else
            {
             cout <<"LASTNAME UPDATE CANCEL"<< endl;
            }
}

void updateMothername()
{
         string newmothername=" ";
         string CH;
         cout << "--- MOTHERNAME CHANGE ---" << endl;
         cout << "CURRENT MOTHERNAME IS : " << mothername << endl;
         cout << "ENTER NEW MOTHERNAME  : ";
         cin >>   newmothername;

         cout << "DO YOU REALLY WANT TO CHANGE " << mothername << " TO " << newmothername << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             mothername = newmothername;
             cout<<"...OK MOTHERNAME UPDATED" << endl;
            }
        else
            {
             cout <<"MOTHERNAME UPDATE CANCEL"<< endl;
            }
}

void updateAddress()
{
         string newaddress=" ";
         string CH;
         cout << "--- ADDRESS CHANGE ---" << endl;
         cout << "CURRENT ADDRESS IS : " << address << endl;
         cout << "ENTER NEW ADDRESS  : ";
         cin >> newaddress;

         cout << "DO YOU REALLY WANT TO CHANGE " << address << " TO " << newaddress << " (YES/NO)? ";
         cin >> CH;

         if (CH == "yes" || CH == "YES")
            {
             address = newaddress;
             cout<<"...OK ADDRESS UPDATED" << endl;
            }
        else
            {
             cout <<"ADDRESS UPDATE CANCEL"<< endl;
            }
}

void recieveMoney(int transbal )
{
    balance=balance+transbal;
    cout<<"AMOUNT TRANSFERRED SUCCESFULLY......"<<endl;
    cout<<"OK...." <<endl;
}

void sendMoney(int transbal)
{
    balance=balance-transbal;
}




 };




int main()
{
     int l=1,l2=1,ch,ch2,n=0,f=0,ck,lu=0,choice;
     string name,pass;
     double traamt=0;
     int i;

    BankAccount b[3];
    cout <<"--------WELCOME TO BANK ACCOUNT SYSTEM--------" << endl << endl;
    while(l)
    {
    cout <<endl<<"1.CREATE NEW ACCOUNT"<< endl;
    cout <<"2.LOGIN"<< endl;
    cout <<"0.EXIT"<<endl<<endl;;
    cout <<"ENTER YOUR CHOICE :";
    cin  >> ch;
    cout << endl;


    switch(ch)

        {

        case 1:
            cout<<"--------- CREATE NEW ACCOUNT------------ "<<endl<<endl;
            b[n].newAccount();
            n++;
            break;
        case 2:
            if(n!=0)
        {
            cout<<"---------ACCOUNT LOGIN----------"<<endl<<endl;
            cout<<"USER NAME     :";
            cin >> name ;
            cout<<"USER PASSWORD :";
            cin >> pass ;

            for(int i=0;i<n;i++)
        {
                ck=b[i].login(name,pass);
                f=f+ck;
            if(ck==0)
            {
              lu=i;
            }
        }
             if(f==n)
            {
              cout<<"WRONG USER NAME OR PASSWORD"<<endl;
            }

            else{
                while(l2)
                {
                     cout<<endl<<"1.CHECK BALANCE"<<endl;
                     cout<<"2.DEPOSIT CASH"<<endl;
                     cout<<"3.WITHDRAWAL CASH"<<endl;
                     cout<<"4.TRANSFER MONEY"<<endl;
                     cout<<"5.ACCOUNT INFO"<<endl;
                     cout<<"6.UPDATE INFO"<<endl;
                     cout<<"0.LOGOUT"<<endl<<endl;

                     cout<<"ENTER YOUR CHOICE :";
                     cin>>ch2;

                switch(ch2)
                {

    case 1:
        b[lu].getcheckBalance();
        break;
    case 2:
        b[lu].depositCash();
        break;

    case 3:
        b[lu].withdrawalCash();
        break;

    case 4:
    cout << "--- TRANSFER MONEY ---" << endl;
    cout <<"CURRENT BALANCE :"<< b[lu].getbalance() << endl;
    cout<<"ENTER THE TRANSFER AMOUNT :";
    cin>>traamt;

    if(traamt<=b[lu].getbalance())
    {
    cout<<"ENTER THE USERNAME OF PERSON TO TRANFER MONEY :";
    cin >>name;
    for(int j=0;j<n;j++)
    {
        if(name==b[j].getusername())
        {
            b[j].recieveMoney(traamt);
            b[lu].sendMoney(traamt);
        }
        else
        {
            cout << "USERNAME IS WRONG.....PLESE ENTER VALID USERNAME" << endl;
            cout << "AMOUNT TRANSFERED FAILED......." << endl;

        }
    }
    }
    else {
          cout<<"SORRY.....YOU HAVE INSUFFICIENT BALANCE"<< endl;
    }
    break;

    case 5:
         b[lu].accountInfo();
         break;

    case 6:
         cout << "-----UPDATE INFO-----" << endl;
         cout << "1.ACCOUNT TYPE" << endl;
         cout << "2.USERNAME" << endl;
         cout << "3.PASSWORD" << endl;
         cout << "4.FIRST NAME" << endl;
         cout << "5.LAST NAME" << endl;
         cout << "6.MOTHER NAME" << endl;
         cout << "7.ADDRESS" << endl;
         cout << endl;
         cout << "ENTER YOUR CHOICE :";
         cin >> choice;

         switch(choice)
         {
         case 1:
            b[lu].updateAcc();
            break;
         case 2:
            b[lu].updateUsername();
            break;
         case 3:
            b[lu].updatePassword();
            break;
         case 4:
            b[lu].updateFirstname();
            break;
         case 5:
            b[lu].updateLastname();
            break;
         case 6:
            b[lu].updateMothername();
            break;
         case 7:
            b[lu].updateAddress();
            break;

         }
         break;

         case 0:

                l2=0;
                break;
                }

                }l2=1;

    }

    f=0;

    }


 else {
        cout<<"THERE IS NO USER FOUND IN THE SYSYTEM"<<endl;
    }
    break;


 case 0:
        l=0;
        cout<<"THANK YOU FOR USING OUR SYSTEM....."<<endl;
        break;
default:
        cout<<"INVALID CHOICE....PLESE TRY AGAIN !"<<endl;
        break;
    }

    }
    return 0;
}
