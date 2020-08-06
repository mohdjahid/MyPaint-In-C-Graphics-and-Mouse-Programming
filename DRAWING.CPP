#include <graphics.h>
#include <mouse.h>
#include <iostream.h>
#include <conio.h>
#include <dos.h>

void draw_line(int &x1,int &y1,int &x2,int &y2)
{

  int a; static int i=0;

  if(x1>x2 && y1==y2)
   {
       a=x1;  x1=x2;  x2=a;
       line(x1,y2,x2,y1);
      /* gotoxy(10,25);
       cout<<i++;    */
   }

  else   line(x2,y1,x1,y2);

 if(y1>y2 && x1==x2)
   {
      a=y1;  y1=y2;  y2=a;
      line(x2,y1,x1,y2);
     /* gotoxy(10,30);
      cout<<" 2 loop";    */
   }

  else line(x1,y2,x2,y1);

 /* gotoxy(10,15);
  cout<<" X1 : "<<x1<<" Y1 : "<<y1;
  cout<<" X2 : "<<x2<<" Y2 : "<<y2;   */
}

void header()
{
   rectangle(0,0,639,100);
   setcolor(BLUE);
   setfillstyle(CLOSE_DOT_FILL,RED);
   bar(0,0,639,100);
   setfillstyle(SOLID_FILL,RED);
   bar(0,0,100,100);
   outtextxy(5,5,"PENCIL");
   setfillstyle(SOLID_FILL,GREEN);
   bar(100,0,200,100);
   outtextxy(105,5,"NEW PAGE");
   setfillstyle(SOLID_FILL,CYAN);
   bar(200,0,300,100);
   outtextxy(205,5,"EXIT");
   setfillstyle(SOLID_FILL,BLUE);
   bar(200,40,300,100);
   setcolor(CYAN);
   /*  ARROW  */
   settextstyle(0,1,1);
   outtextxy(210,45,"TOOLS");
   rectangle(220,60,260,80);
   line(260,50,260,90);
   line(260,50,280,70);
   line(260,90,280,70);
   settextstyle(0,1,2);
   setfillstyle(SOLID_FILL,6);
   bar(400,0,500,100);
   outtextxy(420,1,"ERASER");




}

int sel_option()
{
  callmouse();
  int x,y,click=0;

    while(click==0)
     {
	mouseposi(x,y,click);
     }

    if( x<100 && y<40)
	return 1;

    else   if(x>100 && x<200 && y<40)
	    return 2;

	    else   if(x>200 && x<300 && y<40)
		   return 3;

		   else if(x >200 && x <300 && y >40 && y <100)
			   return 4;
			 else  if( x >400 && x <500 && y <100)
				return 5;
			       else
				  return 0;
}

void pencil_color()
{
  setfillstyle(SOLID_FILL,0);
  bar(0,40,20,60);

  setfillstyle(SOLID_FILL,1);
  bar(20,40,40,60);

  setfillstyle(SOLID_FILL,2);
  bar(40,40,60,60);

  setfillstyle(SOLID_FILL,3);
  bar(60,40,80,60);

  setfillstyle(SOLID_FILL,4);
  bar(80,40,100,60);

  setfillstyle(SOLID_FILL,5);
  bar(0,60,20,80);

  setfillstyle(SOLID_FILL,6);
  bar(20,60,40,80);

  setfillstyle(SOLID_FILL,7);
  bar(40,60,60,80);

  setfillstyle(SOLID_FILL,8);
  bar(60,60,80,80);

  setfillstyle(SOLID_FILL,9);
  bar(80,60,100,80);

  setfillstyle(SOLID_FILL,10);
  bar(0,80,100,100);

  setfillstyle(SOLID_FILL,11);
  bar(20,80,40,100);

  setfillstyle(SOLID_FILL,12);
  bar(40,80,60,100);

  setfillstyle(SOLID_FILL,13);
  bar(60,80,80,100);

  setfillstyle(SOLID_FILL,14);
  bar(80,80,100,100);

}

int set_pencil_color()
{
     xyz:

		 setposi(0,40);

		 limit_mouse_ver(40,100);
		 limit_mouse_hor(0,100);

     int x,y,click=0;
     while(click==0)
	   mouseposi(x,y,click);

	if(y >40  && y <60)
	  {
	    if( x < 20 )
	       setcolor(0);
	     else if( x >20 && x <40)
		     setcolor(1);
		   else if( x >40 && x <60)
			  setcolor(2);
			 else if( x >60 && x <80)
				 setcolor(3);
			       else if( x >80 && x <100)
				      setcolor(4);
				     else goto xyz;
	    }
	 else if( y >60 && y <80)
		{
		 if( x < 20 )
		   setcolor(5);
		  else if( x >20 && x <40)
			  setcolor(6);
			else if( x >40 && x <60)
				setcolor(7);
			      else if( x >60 && x <80)
				      setcolor(8);
				    else if( x >80 && x <100)
					    setcolor(9);
					  else goto xyz;
		 }
	       else if( y >80 && y<100)
		      {
		       if( x < 20 )
			  setcolor(10);
			 else if( x >20 && x <40)
				 setcolor(11);
			       else if( x >40 && x <60)
				      setcolor(12);
				    else if( x >60 && x <80)
					   setcolor(13);
					 else if( x >80 && x <100)
						 setcolor(14);
						else goto xyz;
		 }

		 else goto xyz;


}

void bkg_color()
{
  setfillstyle(SOLID_FILL,0);
  bar(100,40,120,60);

  setfillstyle(SOLID_FILL,1);
  bar(120,40,140,60);

  setfillstyle(SOLID_FILL,2);
  bar(140,40,160,60);

  setfillstyle(SOLID_FILL,3);
  bar(160,40,180,60);

  setfillstyle(SOLID_FILL,4);
  bar(180,40,200,60);

  setfillstyle(SOLID_FILL,5);
  bar(100,60,120,80);

  setfillstyle(SOLID_FILL,6);
  bar(120,60,140,80);

  setfillstyle(SOLID_FILL,7);
  bar(140,60,160,80);

  setfillstyle(SOLID_FILL,8);
  bar(160,60,180,80);

  setfillstyle(SOLID_FILL,9);
  bar(180,60,200,80);

  setfillstyle(SOLID_FILL,10);
  bar(100,80,200,100);

  setfillstyle(SOLID_FILL,11);
  bar(120,80,140,100);

  setfillstyle(SOLID_FILL,12);
  bar(140,80,160,100);

  setfillstyle(SOLID_FILL,13);
  bar(160,80,180,100);

  setfillstyle(SOLID_FILL,14);
  bar(180,80,200,100);

}

int new_sheet()
{
    xyz:
		 setposi(100,40);
		 limit_mouse_ver(40,100);
		 limit_mouse_hor(100,200);


     int x,y,click=0;
     while(click==0)
	   mouseposi(x,y,click);

	if(y >40  && y <60)
	  {
	    if(x >100 && x < 120 )
	       return(0);
	     else if( x >120 && x <140)
		     return(1);
		   else if( x >140 && x <160)
			  return(2);
			 else if( x >160 && x <180)
				 return(3);
			       else if( x >180 && x <200)
				      return(4);
				     else goto xyz;
	    }
	 else if( y >60 && y <80)
		{
		 if(x >100  &&  x < 120 )
		   return(5);
		  else if( x >120 && x <140)
			  return(6);
			else if( x >140 && x <160)
				return(7);
			      else if( x >160 && x <180)
				      return(8);
				    else if( x >180 && x <200)
					    return(9);
					  else goto xyz;
		 }
	       else if( y >80 && y<100)
		      {
		       if( x >100 && x <120 )
			  return(10);
			 else if( x >120 && x <140)
				 return(11);
			       else if( x >140 && x <160)
				      return(12);
				    else if( x >160 && x <180)
					   return(13);
					 else if( x >180 && x <200)
						 return(14);
						else goto xyz;
		 }

		 else goto xyz;
}

void toolkit()
{
       settextstyle(0,0,0);
       setfillstyle(SOLID_FILL,BLUE);
       bar(300,0,400,100);

       rectangle(300,0,400,100);
       line(350,0,350,100);
       line(300,50,400,50);

       outtextxy(302,3,"LINE");
       line(340,10,310,40);

       outtextxy(352,3,"RECTAN");
       outtextxy(360,10,"GLE");
       rectangle(355,17,390,45);

       outtextxy(302,53,"CIRCLE");
       circle(325,75,10);


}

int set_toolkit()
{
     int x,y,click=0;
     setposi(301,1);

     limit_mouse_ver(0,100);
     limit_mouse_hor(300,400);

     while(click==0)
	mouseposi(x,y,click);

	    if( x >300 && x <350 )
	       {
		   if( y < 50 )
		     return 1;
		      else if( y <100)
			     return 2;
		}
	      else if( x >350 && x <400)
		      {
			 if( y < 50 )
			    return 3;
			  else if( y <100)
			     return 4;
		      }
}

void loading()
{
  circle(640,50,10);
  delay(1000);
  delay(1000);
  delay(1000);
  setcolor(1);
  circle(640,50,9);
  delay(1000);
  setcolor(2);
  circle(640,50,9);
  delay(1000);
  setcolor(3);
  circle(640,50,11);
  delay(1000);
  setcolor(4);
  circle(640,50,10);
  delay(1000);
  setcolor(5);
  circle(640,50,9);

}



void main()
{
   int gdriver=DETECT,gmode=0;
   initgraph(&gmode,&gdriver," ");
   callmouse();
   int x1,y1,x2,y2,click=0,sheet=0;;
    header();
    pencil_color();
    bkg_color();

   int choice;
   do
   {
       choice=sel_option();

       switch(choice)
       {
	  case 1:
		 setfillstyle(INTERLEAVE_FILL,RED);
		 bar(80,0,100,20);

		 set_pencil_color();

		  setposi(11,101);	// SET MOUSE WITHIN SHEET

		 back:
		 limit_mouse_ver(100,460);
		 limit_mouse_hor(10,620);

		 click=0;
		 while(click==0)            // FIRST POSITION OF MOUSE ON SHEET
		    {
			mouseposi(x1,y1,click);
		    }


		 while(click==1)    // EVERY POSITION OF MOUSE FOR CONTINUOUS DRAWING
		    {
			mouseposi(x2,y2,click);
			draw_line(x1,y1,x2,y2);
			x1=x2;y1=y2;
		    }
		    limit_mouse_ver(0,479);
		    limit_mouse_hor(0,640);

		 while(click==0)      // IF CILCK WITHIN SHEET CONTINOUS DRAWING
		      {	mouseposi(x1,y1,click);    }
		       if(y1 >100)
		       goto back;
			  setfillstyle(SOLID_FILL,RED);
		    bar(80,0,100,20);
		    break;

	  case 2:
		       setfillstyle(INTERLEAVE_FILL,GREEN);
		       bar(180,0,200,20);
		       sheet=new_sheet();
		       setfillstyle(SOLID_FILL,sheet);
		       bar(0,100,639,479);
		       setfillstyle(SOLID_FILL,GREEN);
		       bar(180,0,200,20);
		       limit_mouse_ver(0,479);
		       limit_mouse_hor(0,640);

		   break;

	   case 4:     toolkit();
		       delay(500);
		       int p=set_toolkit();
		       setposi(11,101);	// SET MOUSE WITHIN SHEET
		       limit_mouse_ver(100,460);
		       limit_mouse_hor(10,620);
		       delay(1000);
		      click=0;
		      while(click==0)
		      {
			   mouseposi(x1,y1,click);
		      }

		      while(click==1)
		      {
			   mouseposi(x2,y2,click);
			   line(x1,y1,x1,y1);
		      }
		     if(p==1)
		     line(x1,y1,x2,y2);
		       else if(p==3)
			  rectangle(x1,y1,x2,y2);
			   else if(p==2)
			     circle((x1+x2)/2,y1,(x1>x2)?(x1-x2)/2:(x2-x1)/2);
		     setfillstyle(SOLID_FILL,RED);
		     bar(300,0,400,100);
	   //	     cout<<p;
		     limit_mouse_ver(0,479);
		     limit_mouse_hor(0,640);
		     break;

	   case 5:
		      delay(200);
		      click=0;
		      while(click==0)
		      {
			   mouseposi(x1,y1,click);
		      }

		      while(click==1)
		      {
			   mouseposi(x2,y2,click);
			   line(x1,y1,x1,y1);
		      }
		      setfillstyle(SOLID_FILL,sheet);
		      bar(x1,y1,x2,y2);
		      break;
       }

   }
      while(choice!=3);

/*   gotoxy(5,15);
   cout<<click;      */
   getch();
   closegraph();
}