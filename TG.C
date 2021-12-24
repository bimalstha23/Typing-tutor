
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
int i,j,a,b,letter=0,score=0,E,frq=2000,y=11,y1=11;
void dat()
{
    struct date dt;
    getdate(&dt);
       textcolor(GREEN);

    textcolor(15);
    window(60,4,80,4);
    cprintf("DATE = %d-%d-%d",dt.da_day,dt.da_mon,dt.da_year);
}
void typingname()
{
   window(10,4,56,4);
   textcolor(15);
   cprintf("  T  Y  P  I  N  G      G  A  M  E");
}
void home()
{
  textcolor(3);
  window(28,y,30,y+1);
  cprintf("%c",16);
  textcolor(3);
  window(46,y,48,y+1);
  cprintf("%c",17);
   textcolor(14);
   window(33,11,50,12);
   cprintf("P ");
   textcolor(15);
   window(35,11,50,12);
   cprintf("L A Y");
     textcolor(2);
   window(33,14,50,15);
   cprintf("A ");
   textcolor(15);
   window(35,14,50,15);
   cprintf("B O U T");
     textcolor(1);
	textcolor(LIGHTCYAN);
   window(33,17,50,18);
   cprintf("S ");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" O U N D");
      textcolor(6);
   window(33,20,50,21);
   cprintf("B");
   textcolor(7);
   window(34,20,50,21);
   cprintf(" A C K");
}
void play()
{
  textcolor(3);
  window(28,y1,30,y1+1);
  cprintf("%c",16);

  textcolor(3);
  window(46,y1,48,y1+1);
  cprintf("%c",17);
   textcolor(2);
   window(32,11,50,12);
   cprintf("S ");
   textcolor(7);
   window(33,11,50,12);
   cprintf(" M A L L");
     textcolor(3);
   window(31,14,50,15);
   cprintf("C");
   textcolor(7);
   window(32,14,50,15);
   cprintf(" A P I T A L");
     textcolor(1);
   window(33,17,50,18);
   cprintf("B");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" A C K");
}
void theme()
{
  int x1=2,y1=3,x2=79,y2=8,color2=2,color3=7;
window(x1,y1,x2,y2);
   window(x1,8,x2,9);
   for(i=x1; i<=x2; i++)
   {
   textbackground(0);
      textcolor(color2);
      cprintf("_");
   }
  window(x1,9,x2,16);
    for(i=1; i<=9; i++)
    {
	 for(j=1; j<=80; j++)
	 {

	  textbackground(color3);
	  cprintf(" ");
	 }
     }
     window(x1,16,x2,17);
       for(i=1; i<=78; i++)
   {
      textcolor(color2);
      cprintf("_");
   }

}
void keysound()
{
 sound(frq);
 delay(100);
 nosound();

}
void small()
{
  score=0;
  letter=0;
  label1:
  theme();
   for(i=3; i<=80; i+=3)
   {

	repeat:
	  window(11,21,35,22);
	   textcolor(2);
	   textbackground(0);
	   cprintf("Score = %d    Wrong = %d",score,letter);
	 a=rand()%122;
	 textbackground(15);
	 if(a>=97)
	 {
	   keysound();
	 window(i,13,i+3,13);
	 textbackground(7);
	 textcolor(0);
	  cprintf("%c",a);
	   b=getch();
	   if(b==a)
	   {
	     score++;
	 window(i,13,i+3,13);
	 textcolor(1);

	  cprintf("%c",a);

	   }

	   else
	   {
	      letter++;

	     window(i,13,i+3,13);
	 textcolor(4);

	  cprintf("%c",a);

	   }

	}
	else if(i>75)
	{

	 goto label1;
	}
	else if(score+letter>49)
	{

	   system("cls");
	    textbackground(0);
	   typingname();
	   dat();
   textcolor(14);
   window(26,11,44,12);
   cprintf("Score        =");
   textcolor(15);
   window(42,11,50,12);
   cprintf("%d",score-1);
     textcolor(LIGHTRED);
   window(26,14,44,15);
   cprintf("Wrong letter =");
   textcolor(15);
   window(42,14,50,15);
   cprintf("%d",letter);
     textcolor(2);
   window(26,17,44,18);
   cprintf("Accurcy      =");
   textcolor(15);
   window(40,17,50,18);
   cprintf(" %d %",((score-1)*2));
       getch();
	break;
	}
	else
	{
	goto repeat;
	}
   }
}
void capital()
{
  score=0;
  letter=0;
  label1:
  theme();
   for(i=3; i<=80; i+=3)
   {

	repeat:
	  window(11,21,35,22);

	   textcolor(2);
	   textbackground(0);
	   cprintf("Score = %d ³ Wrong = %d",score,letter);


	 a=rand()%90;

	 if(a>=65)
	 {


	 window(i,13,i+3,13);
	 textbackground(7);
	 textcolor(0);

	  cprintf("%c",a);
	   b=getch();
	   if(b==a)
	   {
	     score++;

	 window(i,13,i+3,13);
	 textcolor(1);

	  cprintf("%c",a);

	   }
	   else
	   {
	     letter++;
	     window(i,13,i+3,13);
	 textcolor(4);

	  cprintf("%c",a);

	   }

	}
	else if(letter+score>49)
	{
	  label:
	   system("cls");
	    textbackground(0);
	   typingname();
	   dat();

   textcolor(14);
   window(26,11,44,12);
   cprintf("Score        =");
   textcolor(15);
   window(42,11,50,12);
   cprintf("%d",score);
     textcolor(LIGHTRED);
   window(26,14,44,15);
   cprintf("Wrong letter =");
   textcolor(15);
   window(42,14,50,15);
   cprintf("%d",letter);
     textcolor(2);
   window(26,17,44,18);
   cprintf("Accurcy      =");
   textcolor(15);
   window(40,17,50,18);
   cprintf(" %d %",(score*2));

       getch();
       exit(0);
       }
	else if(i>75)
	{

	 goto label1;
	}
	else if(b==13)
	{
	  goto label;
	}

	else
	{
	goto repeat;
	}
   }

}
void about()

{
  window(30,8,50,9);
  textcolor(7);
  cprintf(" %c A B O U T %c",16,17);
  window(12,13,25,14);
   textcolor(7);
   cprintf("Developers  :");
    window(30,13,70,14);
   textcolor(3);
   cprintf("Bimal, Rikesh, Nishan");
    window(12,14,25,15);
   textcolor(7);
   cprintf("Faculty     :");
    window(30,14,70,15);
   textcolor(3);
   cprintf("Bachelors in Computer Application");
    window(12,15,25,16);
   textcolor(7);
   cprintf("College     :");
    window(30,15,70,16);
   textcolor(3);
   cprintf("Kantipur City College");
     window(12,16,25,17);
   textcolor(7);
   cprintf("Address     :");
    window(30,16,70,17);
   textcolor(3);
   cprintf("Putalisadak, Kathmandu");

       window(49,18,70,19);
   textcolor(2);
   cprintf("T Y P I N G   G A M E");



}
void soundoption()
{
   textcolor(14);
   window(32,11,50,12);
   cprintf("S ");
   textcolor(15);
   window(34,11,50,12);
   cprintf("O U N D");
     textcolor(2);
   window(30,14,50,15);
   cprintf(" N ");
   textcolor(15);
   window(32,14,50,15);
   cprintf(" O S O U N D");
       textcolor(1);
   window(33,17,50,18);
   cprintf("B");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" A C K");




}
void loading()
{

    for(i=2,j=1; j<=100; i+=2,j++)
    {
    clrscr();
      textcolor(3);
      window(76,21,80,23);
      cprintf("%d%",j);
    textcolor(LIGHTGREEN);
    if(i>67)
    {
     i=2;

    }

     window(2,21,20,22);
     textcolor(2);

     cprintf("Loading...");
      textcolor(2);
      window(i,22,i+12,22);
      cprintf("|||||||");
      delay(70);
    }
    delay(500);

}
void gamemain()
{
    int S,H,k;
    char name[40];
     system("cls");
   textbackground(0);
   loading();
   system("cls");
   window(30,8,50,9);
   cprintf("ENTER YOUR NAME:",16,17);
   gets(name);
   start:
   system("cls");
   textbackground(0);
   typingname();
   dat();

   home();
    S=getch();
    keysound();
    if(S=='p'||S=='P')
    {

     goto play;
    }
    else if(S=='a'||S=='A')
    {
     goto about;
    }
    else if(S=='s'||S=='S')
	{
	 goto keysound;
	}
    else if(S=='b'||S=='B')
    {
      system("cls");
      main();
    }
	else if(S==' ')
	{

	  y+=3;
	  if(y==23)
	  {
	      y=11;
	  }
	  goto start;
	}

	else if(S==8)
	{
	  y-=3;
	  if(y<11)
	  {
	      y=20;
	  }
	  goto start;
	}
    else
    {
     goto start;
    }
    play:
	    system("cls");
	    dat();
	    typingname();
	   play();
	     H=getch();
	 keysound();
	 if(H=='s'||H=='S')
	{
	 goto  small;
	}
	else if(H=='c'||H=='C')
	{
	goto capital;
	}

	else if(H=='B'||H=='b')
	{
	goto start;
	}
	else if(H==' ')
	{

	  y1+=3;
	  if(y1==20)
	  {
	      y1=11;
	  }
	  goto play;
	}
	else if(H==8)
	{
	  y1-=3;
	  if(y1<11)
	  {
	      y1=17;
	  }
	  goto start;
	}
	else
	{
	goto play;
	}
	small:
	    system("cls");
	    dat();
	    typingname();
	    theme();
	     small();
	      goto start;
       capital:
	    system("cls");
	     dat();
	    typingname();
	    theme();
	    capital();
	    goto start;
    about:
	    system("cls");
	     dat();
	    typingname();
	    about();
	   getch();
	    goto start;
    keysound:
	    system("cls");
	    if(frq==2000)
	    {
	     textcolor(2);
	      window(27,11,50,12);
	     cprintf("%c",14);
	    }
	    else
	    {
	     textcolor(2);
	      window(27,14,50,15);
	     cprintf("%c",14);
	    }
	     dat();
	    typingname();
	    soundoption();
	     k=getch();
	     keysound();
	    if(k=='s'||k=='S')
	    {
	     frq=2000;
	      goto keysound;
	    }
	    else if(k=='n'||k=='N')
	    {
	     frq=0;
	     goto keysound;
	    }
	    else if(k=='b'||k=='B')
	    {
	     goto start;
	    }
	    else
	    {
	    goto keysound;
	    }
}