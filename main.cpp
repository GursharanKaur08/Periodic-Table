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
