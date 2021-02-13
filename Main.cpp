#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<stdio.h>
#include<process.h>

void start(void);
void ptable(void);
void sbn(void);
void sbs(void);

//**********************************************************
//           Function to display base border
//**********************************************************
void frame()
	{	 
		int i,j;
 		clrscr();
 		gotoxy(33,2); cout<<"PERIODIC TABLE";
 		gotoxy(1,1); cout<<"É";
 		
		for(i=2;i<=79;i++)
 		{	  
			gotoxy(i,1); cout<<"Í";
 		}
 		cout<<"»";
 		
		for(i=2;i<=23;i++)
 		{	  
			gotoxy(80,i); cout<<"º";
 		}
 		gotoxy(80,24); cout<<"¼";
 
		for(i=2;i<=79;i++)
 		{	  
			gotoxy(i,24); cout<<"Í";
 		} 
		
		for(i=2;i<=23;i++)
 		{	  
			gotoxy(1,i); cout<<"º";
		}
	}

//**********************************************************
//      Function to display periodic table border
//**********************************************************
void periodic_table_border()
	{	 
		int i,j;
 		gotoxy(13,3); cout<<"Ú";
 		gotoxy(49,5); cout<<"Ú";
 		gotoxy(64,3); cout<<"Ú";
 		
		for(i=5;i<=15;i=i+2)
 		{	  
			gotoxy(13,i); cout<<"ÃÄÄÅÄ";
 		}
 
		for(i=4;i<=16;i=i+2)
 		{	  
			gotoxy(13,i); cout<<"³";
 		}
 
		for(i=4;i<=16;i=i+2)
 		{	  
			gotoxy(64,i); cout<<"³";
 		}
 		
		for(i=5;i<=16;i=i+2)
		{	  
			gotoxy(64,i); cout<<"Ã";
 		}
 		
		for(i=3;i<=16;i=i+2)
		{	 
			gotoxy(65,i); cout<<"ÄÄ";
 		}
 	
		for(i=4;i<=16;i=i+2)
 		{	  
			gotoxy(16,i); cout<<"³";
 		}
 
		gotoxy(18,5); cout<<"Ä";
 		gotoxy(18,7); cout<<"Ä";
		gotoxy(18,9); cout<<"Ä";
 		gotoxy(19,7); cout<<"´";
		gotoxy(19,9); cout<<"Å";
 
		for(i=6;i<=16;i=i+2)
 		{	  
			gotoxy(19,i); cout<<"³";
 		}
 
		for(i=47;i<=65;i=i+3)
 		{	  
			gotoxy(i,9); cout<<"ÄÄÅ";
 		}
 
		for(i=50;i<=63;i=i+3)
 		{	  
			gotoxy(i,5); cout<<"ÄÄÂ";
 		}
		 gotoxy(64,5); cout<<"Å";
 
		for(i=4;i<=16;i=i+2)
 		{	  
			gotoxy(67,i); cout<<"³";
 		}
 		gotoxy(13,17); cout<<"À";
 		
		for(i=14;i<=65;i=i+3)
 		{	
			for(j=15;j>=11;j=j-2)
  			{	   
				gotoxy(i,j); cout<<"ÄÄÅ";
  			}
 		}
	
 		for(i=49;i<=61;i=i+3)
 		{	
			for(j=6;j<=8;j=j+2)
  			{	   	
				gotoxy(i,j); cout<<"³";
  			}
 		}
 		gotoxy(49,7); cout<<"Ã";
 
		

		for(i=50;i<=62;i=i+3)
 		{	  
			gotoxy(i,7); cout<<"ÄÄÅ";
 		}
 
		for(i=47;i<64;i=i+3)
 		{	 
			for(j=11;j<=15;j=j+2)
  			{	   
				gotoxy(i,j); cout<<"ÄÄÅ";
  			}
 		}
		
		for(i=46;i<=61;i=i+3)
 		{	
			for(j=10;j<=16;j=j+2)
  			{	   
				gotoxy(i,j); cout<<"³";
  			}
 		}
		
		for(i=22;i<47;i=i+3)
 		{	 
			for(j=10;j<=16;j=j+2)
  			{	  
				gotoxy(i,j); cout<<"³";
  			}
 		}
 
		for(i=14;i<=65;i=i+3)
 		{	  
			gotoxy(i,17); cout<<"ÄÄÁ";
 		}
 	
		gotoxy(67,17); cout<<"Ù";
 		gotoxy(16,3); cout<<"¿";
 		gotoxy(67,3); cout<<"¿";
		gotoxy(19,5); cout<<"¿";
 		gotoxy(14,3); cout<<"ÄÄ";
 
		for(i=20;i<=46;i=i+3)
 		{	  
			gotoxy(i,9); cout<<"ÄÄÂ";
 		}
 
		for(i=5;i<=15;i=i+2)
 		{	  
			gotoxy(67,i); cout<<"´";
 		}
 		gotoxy(19,19); cout<<"Ú";
 	
		for(i=20;i<61;i=i+3)
 		{	  
			gotoxy(i,19); cout<<"ÄÄÂ";
 		}
 		gotoxy(61,19); cout<<"¿";
 		gotoxy(61,21); cout<<"´";
 		gotoxy(20,21); cout<<"Ã";
 		gotoxy(19,23); cout<<"À";
 
		for(i=20;i<61;i=i+3)
 		{	  
			gotoxy(i,23); cout<<"ÄÄÁ";
 		}
		 gotoxy(61,23); cout<<"Ù";
 
		for(i=20;i<24;i=i+2)
 		{	 
			for(j=19;j<=61;j=j+3)
  			{	   
				gotoxy(j,i); cout<<"³";
  			}
 		}
		
	 	for(i=20;i<61;i=i+3)
 		{	  
			gotoxy(i,21); cout<<"ÄÄÅ";
 		}
 		gotoxy(61,21); cout<<"´";
 		gotoxy(19,21); cout<<"Ã";
	}

//**********************************************************
//     Function to display elements in periodic table
//**********************************************************
void elements()
{	 
	gotoxy(2,25); cout<<"Use arrow keys to scroll...Esc to go to previous menu...Enter to view details";
 	gotoxy(50,6); cout<<"B";
 	gotoxy(50,8); cout<<"Al";
 	gotoxy(53,6); cout<<"C";
 	gotoxy(53,8); cout<<"Si";
 	gotoxy(56,6); cout<<"N";
 	gotoxy(56,8); cout<<"P";
 	gotoxy(59,6); cout<<"O";
 	gotoxy(59,8); cout<<"S";
 	gotoxy(62,6); cout<<"F";
 	gotoxy(62,8); cout<<"Cl";
 	gotoxy(65,4); cout<<"He";
	gotoxy(65,6); cout<<"Ne";
 	gotoxy(65,8); cout<<"Ar";
 	gotoxy(14,4); cout<<"H";
 	gotoxy(14,6); cout<<"Li";
 	gotoxy(14,8); cout<<"Na";
 	gotoxy(17,8); cout<<"Mg";
 	gotoxy(17,6); cout<<"Be";
 	gotoxy(17,10); cout<<"Ca";
 	gotoxy(14,10); cout<<"K";
 	gotoxy(14,14); cout<<"Rb";
 	gotoxy(14,14); cout<<"Cs";
 	gotoxy(14,16); cout<<"Fr";
 	gotoxy(17,14); cout<<"Sr";
 	gotoxy(17,14); cout<<"Ba";
 	gotoxy(17,16); cout<<"Ra";
 	gotoxy(20,10); cout<<"Sc";
 	gotoxy(20,14); cout<<"Y";
 	gotoxy(20,14); cout<<"Lu";
 	gotoxy(20,16); cout<<"Lr";
	gotoxy(23,10); cout<<"Ti";
	gotoxy(23,14); cout<<"Zr";
	gotoxy(23,14); cout<<"Hf";
 	gotoxy(23,16); cout<<"Rf";
 	gotoxy(26,10); cout<<"V";
 	gotoxy(26,14); cout<<"Nb";
 	gotoxy(26,14); cout<<"Ta";
 	gotoxy(26,16); cout<<"Db";
 	gotoxy(23,10); cout<<"Cr";
 	gotoxy(23,14); cout<<"Hf";
 	gotoxy(32,10); cout<<"Mn";
 	gotoxy(32,14); cout<<"Tc";
 	gotoxy(32,14); cout<<"Re";
 	gotoxy(32,16); cout<<"Ns";
 	gotoxy(35,10); cout<<"Fe";
 	gotoxy(35,14); cout<<"Ru";
 	gotoxy(35,14); cout<<"Os";
 	gotoxy(35,16); cout<<"Hs";
 	gotoxy(38,10); cout<<"Co";
 	gotoxy(38,14); cout<<"Rh";
 	gotoxy(38,14); cout<<"Ir";
 	gotoxy(38,16); cout<<"Mt";
 	gotoxy(41,10); cout<<"Ni";
 	gotoxy(41,14); cout<<"Pd";
 	gotoxy(41,14); cout<<"Pt";
 	gotoxy(41,16); cout<<"Ds";
 	gotoxy(44,16); cout<<"Rg";
 	gotoxy(44,10); cout<<"Cu";
 	gotoxy(14,12); cout<<"Rb";
 	gotoxy(17,12); cout<<"Sr";
 	gotoxy(20,12); cout<<"Y";
 	gotoxy(23,12); cout<<"Zr";
	gotoxy(26,12); cout<<"Nb";
	gotoxy(29,12); cout<<"Mo";
	gotoxy(32,12); cout<<"Tc";
 	gotoxy(35,12); cout<<"Ru";
 	gotoxy(38,12); cout<<"Rh";
 	gotoxy(41,12); cout<<"Pd";
 	gotoxy(44,12); cout<<"Ag";
 	gotoxy(47,12); cout<<"Cd";
 	gotoxy(50,12); cout<<"In";
 	gotoxy(53,12); cout<<"Sn";
 	gotoxy(56,12); cout<<"Sb";
 	gotoxy(59,12); cout<<"Te";
	gotoxy(62,12); cout<<"I";
 	gotoxy(65,12); cout<<"Xe";
 	gotoxy(29,10); cout<<"Cr";
 	gotoxy(29,14); cout<<"W";
 	gotoxy(29,16); cout<<"Sg";
 	gotoxy(44,14); cout<<"Au";
 	gotoxy(47,10); cout<<"Zn";
 	gotoxy(47,14); cout<<"Cd";
 	gotoxy(47,14); cout<<"Hg";
 	gotoxy(50,10); cout<<"Ga";
 	gotoxy(50,14); cout<<"In";
 	gotoxy(50,14); cout<<"Tl";
 	gotoxy(53,10); cout<<"Ge";
 	gotoxy(53,14); cout<<"Sn";
 	gotoxy(53,14); cout<<"Pb";
 	gotoxy(56,10); cout<<"As";
 	gotoxy(56,14); cout<<"Sb";
 	gotoxy(56,14); cout<<"Bi";
 	gotoxy(59,10); cout<<"Se";
 	gotoxy(59,14); cout<<"Te";
 	gotoxy(59,14); cout<<"Po";
 	gotoxy(62,10); cout<<"Br";
 	gotoxy(62,14); cout<<"I";
 	gotoxy(62,14); cout<<"At";
 	gotoxy(65,10); cout<<"Kr";
 	gotoxy(65,14); cout<<"Xe";
 	gotoxy(65,14); cout<<"Rn";
 	gotoxy(23,20); cout<<"Ce";
 	gotoxy(26,20); cout<<"Pr";
 	gotoxy(29,20); cout<<"Nd";
 	gotoxy(32,20); cout<<"Pm";
 	gotoxy(35,20); cout<<"Sm";
 	gotoxy(38,20); cout<<"Eu";
 	gotoxy(41,20); cout<<"Gd";
 	gotoxy(44,20); cout<<"Tb";
 	gotoxy(47,20); cout<<"Dy";
 	gotoxy(50,20); cout<<"Ho";
 	gotoxy(53,20); cout<<"Er";
 	gotoxy(56,20); cout<<"Tm";
 	gotoxy(59,20); cout<<"Yb";
 	gotoxy(20,20); cout<<"La";
 	gotoxy(23,22); cout<<"Th";
 	gotoxy(26,22); cout<<"Pa";
 	gotoxy(29,22); cout<<"U";
 	gotoxy(32,22); cout<<"Np";
 	gotoxy(35,22); cout<<"Pu";
 	gotoxy(38,22); cout<<"Am";
 	gotoxy(41,22); cout<<"Cm";
 	gotoxy(44,22); cout<<"Bk";
 	gotoxy(47,22); cout<<"Cf";
 	gotoxy(50,22); cout<<"Es";
 	gotoxy(53,22); cout<<"Fm";
 	gotoxy(56,22); cout<<"Md";
 	gotoxy(59,22); cout<<"No";
 	gotoxy(20,22); cout<<"Ac";
 	gotoxy(47,16); cout<<" NOT YET DISCOVERED";
}

//**********************************************************
//                Class of elements
//**********************************************************

class element
	{	
		public:
 		Int atom_no;
 		char symbol[3];
		char name[15];
 		char type[20];
 
		void display()
 		{	  
			clrscr();
  			frame();
  			gotoxy(24,10);
  			cout<<"Atomic Number     : "<<atom_no;
  			gotoxy(24,11);
  			cout<<"Symbol            : "<<symbol;
  			gotoxy(24,12);
 			cout<<"Name              : "<<name;
  			gotoxy(24,13);
 			cout<<"Type              : "<<type;
  			gotoxy(24,25);
  			cout<<"  Press any key to return";
 		}

		
 		void getdata()
 		{       
			clrscr();
 			frame();
  			gotoxy(10,10);
  			cout<<"\t\tAtomic Number     : ";
  			cin>>atom_no;
  			gotoxy(10,11);
  			cout<<"\t\tSymbol            : ";
  			gets(symbol);
  			gotoxy(10,12);
			cout<<"\t\tName              : ";
			gets(name);
 			gotoxy(10,13);
			cout<<"\t\tType              : ";
  			gets(type);
 		}
 		int returnano()
 		{	  
			return atom_no;
 		}
	};

//**********************************************************
//      Function to write element data in .dat file
//**********************************************************
void write_element()
	{	
		element a;
 		ofstream f2;
 		f2.open("element.dat",ios::binary|ios::app);
 		a.getdata();
 		f2.write((char*)&a,sizeof(a));
 		f2.close();
	}

//**********************************************************
//   Function to delete an element detail from .dat file
//**********************************************************
void delete_element()
	{	 
		element a;
 		ofstream fout;
 		ifstream fin;
 		int n;
 		cin>>n;
 		fout.open("temp.dat",ios::binary);
 		fin.open("element.dat",ios::binary);
 		
		while(fin.read((char*)&a,sizeof(a)))
 		{	  
			 if(a.returnano()!=n)
  			 fout.write((char*)&a,sizeof(a));
 		}
 		fin.close();
 		fout.close();
 		remove("element.dat");
 		rename("temp.dat","element.dat");
	}

//**********************************************************
//   Function to search an element detail from .dat file
//**********************************************************
void search_element(int n)
	{	 
		clrscr();
 		element a;
 		ifstream fin;
 		fin.open("element.dat",ios::binary);
 
		while(fin.read((char*)&a,sizeof(a)))
 		{	  
			if(a.returnano()==n)
  			a.display();
 		} 
		fin.close();
	}

//**********************************************************
//   Function to search an element from .dat file by symbol
//**********************************************************
void search_element_sym(char as[])
	{	 
		clrscr();
 		element a;
 		ifstream fin;
 		fin.open("element.dat",ios::binary);
 		char s[3],t[3];
 		int i,k;

		while(fin.read((char*)&a,sizeof(a)))
 		{	  
			int i=0;
  			do
  			{
   				{  if((((a.symbol[i]>64)&&(a.symbol[i]<91))||((a.symbol[i]>96)&&(a.symbol[i]<123)))&&(((a.symbol[i+1]>64)&&(a.symbol[i+1]<91))||((a.symbol[i+1]>96)&&(a.symbol[i+1]<123))))
			  		{	    
						s[i]=tolower(a.symbol[i]);
    				   		s[i+1]=tolower(a.symbol[i+1]);
    					}
    				   else
    				   {	    
					   s[i]=tolower(a.symbol[i]);
   			    		   s[i+1]='´';
    				   }
		   		}
  				{  if((((as[i]>64)&&(as[i]<91))||((as[i]>96)&&(as[i]<123)))&&(((as[i+1]>64)&&(as[i+1]<91))||((as[i+1]>96)&&(as[i+1]<123))))
 				   {	     
					     t[i]=tolower(as[i]);
    			                     t[i+1]=tolower(as[i+1]);
    			 	   }
    				   else
    				   {	     
					   t[i]=tolower(as[i]);
     			     		   t[i+1]='´';
   	 			    }
   		         	}
  
				if((s[i]==t[i])&&(s[i+1]==t[i+1]))
  				{ 	  
					k=1;
  			 		break;
  				}
  				else
  				{	   
					k=0;
   			   		i++;
   			   		break;
  				}
		       }
			while(i<3);	
 
			if(k==1)
 			{	  
				a.display();
  			  	break;
 			}
		}
 	
		if(k==0)
		{	 
			clrscr();
 			frame();
 			gotoxy(25,10);
 			cout<<"Sorry ! No element of that symbol exist.";
 			gotoxy(37,12);
 			cout<<"Enter again.";
 			gotoxy(35,14);
 			cout<<"Redirecting....";
 			delay(2000);
 			sbs();
		}
 		 	fin.close();
		 	getch();
	}	

//**********************************************************
//   Function to search an element from .dat file by name
//**********************************************************
void search_element_nm(char as[])
	{	 
		clrscr();
 		element a;
 		ifstream fin;
 		fin.open("element.dat",ios::binary);
 		char s[15],t[15];
 		int i,k,l=1,m=2;
 
		while(fin.read((char*)&a,sizeof(a)))
		{	  
			int i=0;
  			do
  			{
   				{    
				     if(((a.name[i]>64)&&(a.name[i]<91))||((a.name[i]>96)&&(a.name[i]<123)))
    				     s[i]=tolower(a.name[i]);
    	                             else
    				     {	     
					    l=0;
     					    k=0;
    				     }
   			       }
		               {
    				     if(((as[i]>64)&&(as[i]<91))||((as[i]>96)&&(as[i]<123)))
    				     t[i]=tolower(as[i]);
                     		     else
      				     {	    m=0;
    					    k=0;
 					    break;
   				     }
			       }
   			       {	
				     if(s[i]==t[i])
 				     k=1;
      				     else
    				     { 	    k=0;
    					    break;
    				     } 
   				     i++;
			       }
  		         }while(i<15);
  
			 if((k==1)||((k==0)&&(l==m)))
		         {	a.display();
   			   	k=1;
   			  	break;
  			}
 		}
 
		if(k==0)
	 	{	
			clrscr();
  			frame();
  			gotoxy(25,10);
  			cout<<"Sorry ! No element of that name exist.";
  			gotoxy(37,12);
  			cout<<"Enter again.";
  			gotoxy(35,14);
  			cout<<"Redirecting....";
  			delay(2000);
  			sbn();
 		}

	 	fin.close();
 		getch();
	}

//**********************************************************
//Function to assign value of atomic number from coordinates
//**********************************************************
int element_coordinates(int x,int y)
	{	int n=0;
 		
	 	if(((x==14)||(x==15))&&(y==4))
		n=1;

		if(((x==65)||(x==66))&&(y==4))
 		n=2;
	
		if(((x==14)||(x==15))&&(y==6))
 		n=3;
 	
		if(((x==17)||(x==18))&&(y==6))
 		n=4;
 	
		if(((x==50)||(x==51))&&(y==6))
		n=5;
 
		if(((x==53)||(x==54))&&(y==6))
		n=6;
 	
		if(((x==56)||(x==57))&&(y==6))
 		n=7;
 	
		if(((x==59)||(x==60))&&(y==6))
 		n=8;
 	
		if(((x==62)||(x==63))&&(y==6))
 		n=9;
 	
		if(((x==65)||(x==66))&&(y==6))
 		n=10;
 
		if(((x==14)||(x==15))&&(y==8))
 		n=11;
 	
		if(((x==17)||(x==18))&&(y==8))
 		n=12;

		if(((x==50)||(x==51))&&(y==8))
		n=13;

		if(((x==53)||(x==54))&&(y==8))
 		n=14;
 	
		if(((x==56)||(x==57))&&(y==8))
		n=15;

		if(((x==59)||(x==60))&&(y==8))
 		n=16;

		if(((x==62)||(x==63))&&(y==8))
		n=17;

		if(((x==65)||(x==66))&&(y==8))
		n=18;
 
	 	if(((x==14)||(x==15))&&(y==10))
 		n=19;
 
		if(((x==17)||(x==18))&&(y==10))
 		n=20;
 
		if(((x==20)||(x==21))&&(y==10))
		n=21;

		if(((x==23)||(x==24))&&(y==10))
 		n=22;
 
		if(((x==26)||(x==27))&&(y==10))
		n=23;

	 	if(((x==29)||(x==30))&&(y==10))
 		n=24;
 
		if(((x==32)||(x==33))&&(y==10))
 		n=25;
 
		if(((x==35)||(x==36))&&(y==10))
 		n=26;
 
		if(((x==38)||(x==39))&&(y==10))
		n=27;

		if(((x==41)||(x==42))&&(y==10))
		n=28;
 
		if(((x==44)||(x==45))&&(y==10))
 		n=29;
 		
		if(((x==47)||(x==48))&&(y==10))
 		n=30;
 
		if(((x==50)||(x==51))&&(y==10))
		n=31;

		if(((x==53)||(x==54))&&(y==10))
		n=32;
 
		if(((x==56)||(x==57))&&(y==10))
		n=33;

		if(((x==59)||(x==60))&&(y==10))
		n=34;

		if(((x==62)||(x==63))&&(y==10))
		n=35;

		if(((x==65)||(x==66))&&(y==10))
		n=36;

		if(((x==14)||(x==15))&&(y==12))
		n=37;

		if(((x==17)||(x==18))&&(y==12))
		n=38;

		if(((x==20)||(x==21))&&(y==12))
		n=39;
	
		if(((x==23)||(x==24))&&(y==12))
		n=40;

		if(((x==26)||(x==27))&&(y==12))
		n=41;

		if(((x==29)||(x==30))&&(y==12))
		n=42;

		if(((x==32)||(x==33))&&(y==12))
		n=43;

		if(((x==35)||(x==36))&&(y==12))
 		n=44;
 
		if(((x==38)||(x==39))&&(y==12))
		n=45;

		if(((x==41)||(x==42))&&(y==12))
		n=46;

		if(((x==44)||(x==45))&&(y==12))
 		n=47;
 
		if(((x==47)||(x==48))&&(y==12))
		n=48;

		if(((x==50)||(x==51))&&(y==12))
 		n=49;
 
		if(((x==53)||(x==54))&&(y==12))
	        n=50;

		if(((x==56)||(x==57))&&(y==12))
		n=51;

		if(((x==59)||(x==60))&&(y==12))
		n=52;

		if(((x==62)||(x==63))&&(y==12))
		n=53;

		if(((x==65)||(x==66))&&(y==12))
 		n=54;
 
		if(((x==14)||(x==15))&&(y==14))
		n=55;

		if(((x==17)||(x==18))&&(y==14))
		n=56;

		if(((x==20)||(x==21))&&(y==14))
		n=71;

		if(((x==23)||(x==24))&&(y==14))
		n=72;

		if(((x==26)||(x==27))&&(y==14))
		n=73;

		if(((x==29)||(x==30))&&(y==14))
		n=74;
 
		if(((x==32)||(x==33))&&(y==14))
		n=75;
	
		if(((x==35)||(x==36))&&(y==14))
		n=76;

		if(((x==38)||(x==39))&&(y==14))
		n=77;
 
		if(((x==41)||(x==42))&&(y==14))
		n=78;

		if(((x==44)||(x==45))&&(y==14))
		n=79;

		if(((x==47)||(x==48))&&(y==14))
		n=80;

		if(((x==50)||(x==51))&&(y==14))
		n=81;

		if(((x==53)||(x==54))&&(y==14))
 		n=82;
 
		if(((x==56)||(x==57))&&(y==14))
		n=83;

		if(((x==59)||(x==60))&&(y==14))
		n=84;

		if(((x==62)||(x==63))&&(y==14))
		n=85;

		if(((x==65)||(x==66))&&(y==14))
		n=86;

		if(((x==14)||(x==15))&&(y==16))
		n=87;

		if(((x==17)||(x==18))&&(y==16))
		n=88;

		if(((x==20)||(x==21))&&(y==16))
		n=103;
 
		if(((x==23)||(x==24))&&(y==16))
 		n=104;
 
		if(((x==26)||(x==27))&&(y==16))
 		n=105;
 
		if(((x==29)||(x==30))&&(y==16))
		n=106;

		if(((x==32)||(x==33))&&(y==16))
 		n=107;
 
		if(((x==35)||(x==36))&&(y==16))
 		n=108;
 
		if(((x==38)||(x==39))&&(y==16))
 		n=109;
 
		if(((x==41)||(x==42))&&(y==16))
                n=110;

		if(((x==44)||(x==45))&&(y==16))
		n=111;

		if(((x==20)||(x==21))&&(y==20))
		n=57;

		if(((x==23)||(x==24))&&(y==20))
		n=58;
	
		if(((x==26)||(x==27))&&(y==20))
		n=59;
	
		if(((x==29)||(x==30))&&(y==20))
		n=60;

		if(((x==32)||(x==33))&&(y==20))
		n=61;

		if(((x==35)||(x==36))&&(y==20))
		n=62;

		if(((x==38)||(x==39))&&(y==20))
		n=63;

		if(((x==41)||(x==42))&&(y==20))
		n=64;

		if(((x==44)||(x==45))&&(y==20))
		n=65;

		if(((x==47)||(x==48))&&(y==20))
		n=66;

		if(((x==49)||(x==50))&&(y==20))
		n=67;
 		
		if(((x==52)||(x==53))&&(y==20))
                n=68;

		if(((x==56)||(x==57))&&(y==20))
		n=69;

		if(((x==59)||(x==60))&&(y==20))
		n=70;

		if(((x==20)||(x==21))&&(y==22))
		n=89;
	
		if(((x==23)||(x==24))&&(y==22))
		n=90;

		if(((x==26)||(x==27))&&(y==22))
		n=91;
	
		if(((x==29)||(x==30))&&(y==22))
 		n=92;
 
		if(((x==32)||(x==33))&&(y==22))
		n=93;

		if(((x==35)||(x==36))&&(y==22))
		n=94;

		if(((x==38)||(x==39))&&(y==22))
		n=95;

		if(((x==41)||(x==42))&&(y==22))
		n=96;

		if(((x==44)||(x==45))&&(y==22))
		n=97;

		if(((x==47)||(x==48))&&(y==22))
		n=98;

		if(((x==49)||(x==50))&&(y==22))
		n=99;

		if(((x==52)||(x==53))&&(y==22))
		n=100;

		if(((x==56)||(x==57))&&(y==22))
		n=101;

		if(((x==59)||(x==60))&&(y==22))
 		n=102;

		if(n!=0)
 		search_element(n);
	
	getch();
 	return(n);
	}	

//**********************************************************
//         Function to search by atomic number
//**********************************************************
void sban()
	{	 
		clrscr();
 		frame();
 		int ano;
 		gotoxy(20,25);
 		cout<<"Enter 0 to return to previous menu";
 		gotoxy(25,12);
 		cout<<"Enter atomic number : ";
 		gotoxy(47,12);
 		cin>>ano;
 		
		if((ano>0)&&(ano<112))
 		{
			search_element(ano);
  			getch();
  			sban();
 		}
 
		else if(ano==0)
 		start();
 
		else if (cin.fail())
 		{
			cin.clear();
  			char junk;
  			cin>>junk;
 			gotoxy(25,18);
  			cout<< "No more letters, please!" << endl;
 			delay(800);
  			sban();
 		}
 
		else
		sban();
	}

//**********************************************************
//         Function to search by atomic symbol
//**********************************************************
void sbs()
	{	 
		clrscr();
		frame();
 		char s[3];
 		gotoxy(20,25);
 		cout<<"Enter 0 to return to previous menu";
 		gotoxy(25,12);
 		cout<<"Enter atomic symbol : ";
 		gets(s);
 		
		if(s[0]=='0')
		start();

		else
		{
			search_element_sym(s);
  			sbs();
 		}
	}

//**********************************************************
//         Function to search by atomic name
//**********************************************************
void sbn()
	{	 
		 clrscr();
		 frame();
		 char s[15];
		 gotoxy(20,25);
		 cout<<"Enter 0 to return to previous menu";
		 gotoxy(25,12);
		 cout<<"Enter atomic name : ";
		 gets(s);
		
		 if(s[0]=='0')
		 start();
	
		 else
		 {	  
			search_element_nm(s);
  			sbn();
 		 }
	}
//**********************************************************
//               Function to control cursor
//**********************************************************

int x=2,y=2;
void control()
	{	 gotoxy(x,y);
 		char g;
 		do
 		{	  g=getch();
  			 if(g==80)        //for down arrow
  			{	   if(y==23)
  				   y=1;
  				   gotoxy(x,++y);
  			}
  
			else if(g==77)   //for righr arrow
  			{	   if(x==79)
  				   x=1;
  				   gotoxy(++x,y);
  			}
  
			else if(g==75)   //for left arrow
  			{	   if(x==2) x=80;
   				   gotoxy(--x,y);
  			}
  
			


			else if(g==72)   //for up arrow
  			{	   if(y==2)
   				   y=24;
  				   gotoxy(x,--y);
  			}
  
			else if(g==27)   //for esc key
  			start();
 		}while(g!=13);    //for enter key
 
	int n;
	 n=element_coordinates(x,y);

		 if(n==0)
		 control();
		 ptable();
	}



