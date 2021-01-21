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

void periodic_table_border()
	{	 int i,j;
 		gotoxy(13,3); cout<<"Ú";
 		gotoxy(49,5); cout<<"Ú";
 		gotoxy(64,3); cout<<"Ú";
 		
		for(i=5;i<=15;i=i+2)
 		{	  gotoxy(13,i); cout<<"ÃÄÄÅÄ";
 		}
 
		for(i=4;i<=16;i=i+2)
 		{	  gotoxy(13,i); cout<<"³";
 		}
 
		for(i=4;i<=16;i=i+2)
 		{	  gotoxy(64,i); cout<<"³";
 		}
 		
		for(i=5;i<=16;i=i+2)
		 {	  gotoxy(64,i); cout<<"Ã";
 		}
 		
		for(i=3;i<=16;i=i+2)
		 {	  gotoxy(65,i); cout<<"ÄÄ";
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
 		{	 for(j=15;j>=11;j=j-2)
  			{	   
				gotoxy(i,j); cout<<"ÄÄÅ";
  			}
 		}
	
 		for(i=49;i<=61;i=i+3)
 		{	for(j=6;j<=8;j=j+2)
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
 		{	 for(j=11;j<=15;j=j+2)
  			{	   
				gotoxy(i,j); cout<<"ÄÄÅ";
  			}
 		}
		
		for(i=46;i<=61;i=i+3)
 		{	 for(j=10;j<=16;j=j+2)
  			{	   
				gotoxy(i,j); cout<<"³";
  			}
 		}
		
		for(i=22;i<47;i=i+3)
 		{	 for(j=10;j<=16;j=j+2)
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
 		{	  for(j=19;j<=61;j=j+3)
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

