#include <stdio>
#include <stdlib>
#include <windows>
#include <conio>
#include <iostream>
void draw(char main[][75] , int score);
void reset(char main[][75]);
void movie(char main[][75], int &parts , int pastcounter, int past[][2] , int &apple , int &score, int &quit );
void check (int &direction);
void direction (int direction , int &pastcounter , int past[][2]);
void apple(int &apples , char main[][75]);
void quitgame (int score);

int main()
{
	 int past[1000][2];
	 int parts=3;
	 char main[23][75];
	 int pastcounters=6;
	 int direction=0;
	 int apples=0;
	 int score=0;
	 int quit=0;
	 int playagain=1;
	 unsigned time;
	 srand(time(0));
	 
	 
	 
	    for ( int x=0; x<1000; x++)
	    {
		   for (int y=0; y<2; y++)
		   {
		   	   past [x][y]=0;
		   }
	}
	past[ pastCounter] [0]=1;
	past[pastCounter][1]=1;
	while(quit==0)
	{
	
	      draw(main ,score);
	      check(direction);
	      direction(direction , pastcounter, past);
	      
	      reset(main);
	      mobe(main , parts ,pastounter, past, apples ,score ,quit);
	      if (apples==0)
	      {
	      	   apple(apple , main);
	      	   
		  }
} 
   quitgame(score);
	      


}
void draw (char main[][75], int score)
{
         system("cls");
         cout<<"score : %d\n"<<score;
         for (int x=0; x<23; x++)
         {
         	  for (int y=0; x<23; x++)
         	  {
         	  	  for (int y=0; y<75; y++)
         	  	  {
         	  	  	  cout<<"%c"<<main[x][y];
					 }
					  cout<<"\n";
					  
			}
		}
	void reset (char main[][75])
{   
for (int x=0; x<23; x++)
     {  
        for (int y=0; y<75; y++)
        {
           if (main[x][y] =='@')
        {
        	  main[x][y]=='@';
		
		}
		else
		{
			if(x==0 || x==22 || y==0 || y==74)
			     {
			     	main[x][y]=177;
			     	
				 }
				 else
				 {
				 	main[x][y]=' ';
				 	
				 }
			}
		}
	}
}
       void move (char main[][75] , int &parts, int pastcounter , int pass[][2], int &apples , int &score , int &quit )
       {
       	  
	   
	   if (past[pastcounter][0] ==22 || past [pastcounter][0]==0)
	   {
	   	  quit =1;
	   	  
	   	  
	   }
	    if (past [pastcounter][1]==74) || past[pastcounter][1]==0)
	   {
	   	   quit=1;
	   	
	   }
	   for (int x=0; x<parts; x++)
	   {
			if (main[past[pastcounter-x][0]]
			[past[pastcounter-x][1]]=='@')
			{
				 apples--;
				 parts++;
				 score+=10;
				
			}
			if (main [past[pastcounter-x][0]][past[pastcounter-x][1]=='o'])		
		
     {
	       quit =1;
	 
	 }	 
	 else 
	 {
	 	 main [past[pastcounter-x][0]][past[pastcounter-x[1]}='o'
	 }  
}
 
  }

    void check (int &direction)
    {
    	    int key=0;
    	    if (kbhit() )
    	    {
    	    	 key = -getch();
				 switch (key)
				 {
				 	case -72:
				 		 direction=2;
				 		 break;
				 	case -77:
				 		direction =0;
				 		break;
				 	case -80:
				 	direction =3;
				 	break;
				case -75:
					direction=1;
					break;
				}
			}
		}
		void direction (int direction , int &pastcounter, int past[][2])
		{
		   int down;
		   right=past[pastcounter][1];
		   down=past[pastcounter][0];
		   switch (direction)
		   {
		   	 case 0:
		   	 	right ++;
		   	 	break;
		   	case 1:
		   		right --;
		   		break;
		   	case 2:
		   		down --;
		   		break;
		   	case 3:
		   		down ++;
		   		
		   }
		    
		    
		    pastcounter ++;
		    past[pastcounter][0]=down;
		    past[pastcounter][1]=right;
		}
		void apple (int &apples, char main [][75])
		{
			   
			   
			   int up =0;
			   int left=0;
			   apples =3;
			   
			   
			   for (int x=0; x<apples; x++)
			   {
			   	  up= (rand() %22);
			   	  left=(rand()%74 );
			   	  
			   	  if (main[up][left]=='o' )
			   	  {
			   	  	 apple(apple , main);
			   	  	 
			   	  	
				 }
				 if (main[up} [left]=='*')
				 {
				 	apple(apple , main);
				 }
				 else 
				 {
				 	main[up][left] =='@';
					 
				 }
			}
	}
	    void quitgame(int score)
	    {
	    	int quit =0;
	    	system ("cls");
	    	cout<<"game over!!! \n \n ";
	    	cout<<" you got a score of %d\n"<<score;
		}
			   
		
										
	



										
		
         	 
		 
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

















