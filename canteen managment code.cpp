#include<iostream>
#include<conio.h>
#include<string.h>//library use for string varaible
#include<iomanip>
#include<stdlib.h>//library use for clear screen
#include<fstream>//library use for filing
using namespace std;
string a,b,c,d; //globle variable
bool flag=false;//use boolean
int i=3;

void display();//funtion for display wellcom note

int main()
{
     fstream file;//open the file
     file.open("s.txt",ios::in|ios::app);
     file>>a; file>>c;//reading data from file

      while (!flag && i>= 0)
     {

       cout<<"Enter the Username: ";
       cin>>b;
       cout<<endl;
       cout<<"Plead Enter the Password Here: ";
       cin>>d;

       if(b!=a ||b!=d)
       {
         cout<<"you got"<<" "<<i<<" "<<"Chances left\n";

        }

       if(b==a && c==d)
        {
            cout<<"Username is correct\n";
            cout<<"The Password is correct\n";
              flag = true;

        }
        else
        cout<<"The given Data is not valid\n";



       file.close();


 	//-----------------------------------------------------------------//
       if(flag==true)
	   {
	       unsigned int sum,add,d,i,j,e,f,g,h,k,l,w,x,y,z;
           unsigned int bir=10,per=36,der=110,mur=8,par=110,cor=90,twr=1199, lur=17,tir=107,
	       rer=1499;
           int qubis=1000,abis=0,qupep=1000,apep=0,quden=110,aden=0,qumun=1000,amun=0,quperk=500,aperk=0,qucoc=400,acoc=0,qutit=100,atit=0,qulux=1000,alux=0,qutid=1000,atid=0,quree=300,aree=0;
           unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
           char name[50],pu,c[20],a[15],b[15],ok;//for entering data of castomar



display();

       system("cls");//CLEAR THE SCREEN
  main:;
  //for entering data of castomar

       cout<<"\n\n\n\t\t\t      CANTEEN MANAGEMENT ";
       cout<<"\n\n\nCONSUMER INFORMATION";
       cout<<"\n\n\n\n NAME:";
       cin>>name;
       cout<<"\n SMART CARD NO.:";
       cin>>b;
       cout<<"\n PHONE NO.:";
       cin>>c;
       cout<<"\n ENTER BILL NO.:";
       cin>>i;

       system("cls");
      again:;//FOR AGAIN PRINT THE CODE

  system("cls");
      cout<<"\n\n1.MENU & PURCHASE";
      cout<<"\n\n2.DETAILS";
      cout<<"\n\n3.NEW CUSTOMER";
      cout<<"\n\n4.QUANTITY AVAILABLE";
      cout<<"\n\n5.EXIT";
      cout<<"\n\n\nENTER YOUR CHOICE:";
      cin>>d;
      system("cls");
  switch(d)
 {
     case 1:
      cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nBISCUTE\t\t\t\t\t\t\t\t10  ";
      cout<<"\n\nPEPSi\t\t\t\t\t\t\t\t36";
      cout<<"\n\nBAKING POWDER\t\t\t\t\t\t\t110   ";
      cout<<"\n\nCHOCLAT\t\t\t\t\t\t\t\t8  ";
      cout<<"\n\nPARK AVENUE PERFUME\t\t\t\t\t\t110   ";
      cout<<"\n\nCOCONUT CAKE\t\t\t\t\t\t\t90  ";
      cout<<"\n\nTITAN WATCH\t\t\t\t\t\t\t1199   ";
      cout<<"\n\nLUX SOAP\t\t\t\t\t\t\t17   ";
      cout<<"\n\nCLEAR SHAMPOO\t\t\t\t\t\t\t107   ";
      cout<<"\n\nBISCUT PACK\t\t\t\t\t\t\t1499   ";
      start:
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
	if(pu=='Y'||pu=='y')
	{switch(pu)
	 case 1:

	  cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  bis:;
	  cout<<"\nBISCUTE(MAX 30): ";
	  cin>>m;

	  if(m>30)
	  {
	   cout<<"Enter Quantity Smaller than 30";
	  getch();
	  goto bis;
	  }
	  else
	  abis=qubis-m;
	  pep:;
	  cout<<"\nPEPSODENT(MAX 2): ";
	  cin>>n;
	   if(n>2)
	  {
	   cout<<"Enter Quantity Smaller than 2";
	  getch();
	  goto pep;
	  }
	  else
	  apep=qupep-n;
	  den:;
	  cout<<"\nDENIM POWDER(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto den;
	  }
	  else
	  aden=quden-o;
	  mun:;
	  cout<<"\nMUNCH(MAX 50): ";
	  cin>>p;

	  if(p>50)
	  {
	   cout<<"Enter Quantity Smaller then 50";
	  getch();
	  goto mun;
	  }
	  else
	  amun=qumun-p;
	  park:;
	  cout<<"\nPARK AVENUE PERFUME(MAX 2): ";
	  cin>>q;

	  if(q>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto park;
	  }
	  else
	  aperk=quperk-q;
	  coco:;
	  cout<<"\nCOCONUT HAIR OIL(MAX 2): ";
	  cin>>r;

	  if(r>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto coco;
	  }
	  else
	  acoc=qucoc-r;
	  titan:;
	  cout<<"\nTITAN WATCH(MAX 2): ";
	  cin>>s;

	  if(s>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();

	  goto titan;
	  }
	  else
	  atit=qutit-s;
	  lux:;
	  cout<<"\nLUX SOAP(MAX 10): ";
	  cin>>t;

	  if(t>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto lux;
	  }
	  else
	  alux=qulux-t;
	  tid:;
	  cout<<"\nTIDE(MAX 2): ";
	  cin>>u;

	  if(u>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto tid;
	  }
	  else
	  atid=qutid-u;
	  ree:;
	  cout<<"\nREEBOK SHOES(MAX 4): ";
	  cin>>v;

	  if(v>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto ree;
	  }
	  else
	  aree=quree-v;
	  cout<<"\n";
	  system("cls");

	  cout<<"\n\n\n\n\n\n\t\t\t\tAFFWA CANTEEN\n";
	  cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nBILL NO.:"<<i;
	  cout<<"\n\nNAME:";
	  cout<<name;

	  cout<<"\n\nSERVICE NO.:"<<a;
	  cout<<"\n\nSMART CARD NO.:"<<b;
	  cout<<"\n\nPHONE NO.:"<<c;
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	    cout<<"\n\nBISCUTE"        <<setw(38)<<m<<setw(28)<<"Rs."<<m*bir;
	  if(n>0)
	    cout<<"\n\nPEPSODENT"        <<setw(36)<<n<<setw(28)<<"Rs."<<n*per;
	  if(o>0)
	    cout<<"\n\nDENIM POWDER"     <<setw(33)<<o<<setw(28)<<"Rs."<<o*der;
	  if(p>0)
	    cout<<"\n\nMUNCH"            <<setw(40)<<p<<setw(28)<<"Rs."<<p*mur;
	  if(q>0)
	    cout<<"\n\nPARK AVENUE PERFUME"<<setw(26)<<q<<setw(28)<<"Rs."<<q*par;
	  if(r>0)
	    cout<<"\n\nCOCONUT HAIR OIL" <<setw(29)<<r<<setw(28)<<"Rs."<<r*cor;
	  if(s>0)
	    cout<<"\n\nTITAN WATCH"      <<setw(34)<<s<<setw(28)<<"Rs."<<s*twr;
	  if(t>0)
	    cout<<"\n\nLUX SOAP"         <<setw(37)<<t<<setw(28)<<"Rs."<<t*lur;
	  if(u>0)
	    cout<<"\n\nTIDE"             <<setw(41)<<u<<setw(28)<<"Rs."<<u*tir;
	  if(v>0)
	    cout<<"\n\nREEBOK SHOES"     <<setw(33)<<v<<setw(28)<<"Rs."<<v*rer;
		e=m*bir;
		f=n*per;
		g=o*der;
		h=p*mur;
		k=q*par;
		l=r*cor;
		w=s*twr;
		x=t*lur;
		y=u*tir;
		z=v*rer;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(40)<<add<<setw(27)<<"Rs."<<sum;
	    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
	getch();


	goto again;
	}
	else
	{goto again;

	}

 //WHEN CHOVICE 2 THEN PRINTS THIS CODE FOR DETAIL

	case 2:
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n#CANTEEN WILL CLOSED ON FRIDAY";
	cout<<"\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#TAKE YOUR SMART CARD WITH YOU";
	cout<<"\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
	cout<<"\n\n#DO NOT BREAK ANY CANTEEN ITEMS";
	getch();

	goto again;
	case 3:
	goto main;
	case 4:
    if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUTE"        <<setw(38)<<abis;
	  cout<<"\n\n\nPEPSODENT"        <<setw(36)<<apep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<aden;
	  cout<<"\n\n\nMUNCH"            <<setw(40)<<amun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<aperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<acoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<atit;
	  cout<<"\n\n\nLUX SOAP"         <<setw(37)<<alux;
	  cout<<"\n\n\nTIDE"             <<setw(41)<<atid;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<aree;
	  cout<<"\n*******************************************************************************";
	  getch();
	  goto again;
	  }
	  else
	  {{cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUTE"        <<setw(38)<<qubis;
	  cout<<"\n\n\nPEPSODENT"        <<setw(36)<<qupep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<quden;
	  cout<<"\n\n\nMUNCH"            <<setw(40)<<qumun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<quperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<qucoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<qutit;
	  cout<<"\n\n\nLUX SOAP"         <<setw(37)<<qulux;
	  cout<<"\n\n\nTIDE"             <<setw(41)<<qutid;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<quree;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  goto again;

	  }
	case 5:

	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";

	exit (d);
	getch();
 break ;

		cout<<"Your choice is wrong";
	getch();
	goto again;
	 }

      }

      i--;
	}//while loop bracket//
}
}
void display()
{
	  cout<<"\n\n\t      w             w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w      w      w    e                  l            ";
  cout<<"\n\n\t      w     w w     w    e                  l            ";
  cout<<"\n\n\t      w    w   w    w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w   w     w   w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w  w       w  w    e                  l            ";
  cout<<"\n\n\t      w w         w w    e                  l            ";
  cout<<"\n\n\t      w             w    e e e e e e e e    l l l l l l l l";
  cout<<"\n\n\n\n   c c c c c c c      o o o o o o o     m               m    e e e e e e e e   ";
       cout<<"\n\n  c                  o             o    m m           m m    e  ";
       cout<<"\n\n  c                  o             o    m  m         m  m    e     ";
       cout<<"\n\n  c                  o             o    m   m       m   m    e e e e e e e e      ";
       cout<<"\n\n  c                  o             o    m    m     m    m    e e e e e e e e    ";
       cout<<"\n\n  c                  o             o    m     m   m     m    e      ";
       cout<<"\n\n  c                  o             o    m      m m      m    e     ";
      cout<<"\n\n   c c c c c c c      o o o o o o o     m       m       m    e e e e e e e e    ";
  getch();
}

