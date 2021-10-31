#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>

//user defined functions //

void stage1(void);
void stage1_scr(void);
void stage2(void);
void stage2_scr(void);
void stage3(void);
void stage3_scr(void);
void stage4_scr(void);
void stage4(void);
void graph(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t,int u,int v,int w,int x,int y,int z,int semi,int dot,int comma,int slash,int max);
void first_scr(void);
void learn_scr(void);
void word_scr(void);
void para_scr(void);
void para(void);
void exit_prg(void);
void restart_prg(void);

//starts from here //

void main()
{

 clrscr();

 textcolor(WHITE);
 first_scr();
 
 getch();
}

//restart_prg user defined

void restart_prg(void)
{
 main();
}

//exit function //

void exit_prg(void)
{
  exit(0);
}

// first screen **main() //

void first_scr(void)
{
 clrscr();
 int a;
 char rs;
 printf("\n\n\n\t\tWELCOME to TYPO (self designed typing software)\n\n");
 printf("\t     This software is perfectly designed for the begineers\n\n");
 printf("\t        Enter number of your choice\n\n");
 printf("\t     1. LEARN TYPING\n\n");
 printf("\t     2. WORD GAME\n\n");
 printf("\t     3. PARAGRAPH\n\n");
 printf("\t     4. EXIT\n\n");
 label1:    //label1   label2     label3
 printf("\n\n\t\tEnter number : ");
 scanf("%d", &a);
    switch(a)
     {
      case 1:learn_scr();
	       break;
      case 2:word_scr();
	       break;
      case 3:para();
	       break;
      case 4:exit_prg();

      default :
	       printf("\n\t\t***************************\n");
	       printf("\t\t****ERROR IN INPUT DATA****     ****Press 4 to Exit****\n");
	       printf("\t\t***************************");
	       goto label1;
     }

}

// learn screen **user defined function**  //
void learn_scr(void)
{
 clrscr();
 int b;
 clrscr();
 printf("\n\n\n\t\t\t    WELCOME LEARNER\n\n");
 printf("\n\n\t\t Enter number of your choice\n\n");
 printf("\n\t\t 1. STAGE 1\n\n");
 printf("\t\t 2. STAGE 2\n\n");
 printf("\t\t 3. STAGE 3\n\n");
 printf("\t\t 4. STAGE 4\n\n");
 printf("\t\t 5. BACK");
 printf("\n\n\t\t 6. EXIT");
 label2:
 printf("\n\n\t\t Enter number : ");
 scanf("%d", &b);
 switch(b)
  {
   case 1: stage1_scr();
	   break;
   case 2: stage2_scr();
	   break;
   case 3: stage3_scr();
	   break;
   case 4: stage4_scr();
	   break;
   case 5: main();
	     break;
   case 6: exit_prg();
	     break;
   default:    printf("\n\t\t***********************\n");
	       printf("\t\t****ERROR IN INPUT****     ****Press 6 to Exit****\n");
	       printf("\t\t***********************");
	       goto label2;


  }
  getch();
}
void stage1_scr()
{
	clrscr();

	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\n\t\t\t    ");textcolor(GREEN);cprintf("Welcome Learner");textcolor(WHITE);
	printf("\n\n\n     This stage of programme is specially designed for practice of\n\n\t characters like");
	 textcolor(GREEN);cprintf("  a");printf(" , ");
	 textcolor(GREEN);cprintf("s");printf(" , ");
	 textcolor(GREEN);cprintf("d");printf(" , ");
	 textcolor(GREEN);cprintf("f");printf(" , ");
	 textcolor(GREEN);cprintf("g");printf(" , ");
	 textcolor(GREEN);cprintf("h");printf(" , ");
	 textcolor(GREEN);cprintf("j");printf(" , ");
	 textcolor(GREEN);cprintf("k");printf(" , ");
	 textcolor(GREEN);cprintf("l");printf(" , ");
	 textcolor(GREEN);cprintf(";");textcolor(WHITE);
	printf("\n\n\n\t   1.Put your index fingures on ");textcolor(GREEN);cprintf("F");printf(" and ");textcolor(GREEN);cprintf("J");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   2.Put your middle fingures on ");textcolor(GREEN);cprintf("D");printf(" and ");textcolor(GREEN);cprintf("K");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   3.Put your ring fingures on ");textcolor(GREEN);cprintf("S");printf(" and ");textcolor(GREEN);cprintf("L");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   4.Put your little fingures on ");textcolor(GREEN);cprintf("A");printf(" and ");textcolor(GREEN);cprintf(";");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   5.Use your index fingures to press  ");textcolor(GREEN);cprintf("G");printf(" and ");textcolor(GREEN);cprintf("H");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t\t\t\t\t      ");textcolor(GREEN);cprintf("Press any key to continue.....");textcolor(WHITE);
	getch();
	stage1();

}

void stage1()
{
   clrscr();

       int k;
   int a,b,c,pa=0,pb=0,pc=0,pd=0,pe=0,pf=0,pg=0,ph=0,pi=0,pj=0,pk=0,pl=0,pm=0,pn=0,po=0,pp=0,pq=0,pr=0,ps=0,pt=0,pu=0,pv=0,pw=0,px=0,py=0,pz=0,psemi=0,pdot=0,pcomma=0,pslash=0,max;
 char input,error,l;
 char st[15]="asdfghjkl;";
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
 printf("\n\nEnter :  a s d f g h j k l ; \n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput : ");
 for(a=0;a<strlen(st);a++)
   {
	input=getch();
	if(input!=st[a])
	{

	     error=st[a];
	     textcolor(RED);
	     cprintf(" %c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
	     }

	  }
	else
	 {
	   textcolor(GREEN);
	   cprintf(" %c",input);
	 }
   }
  }

       char st1[15]="a;sldkfjgh";

 printf("\n\nEnter :  a ; s l d k f j g h \n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput : ");
 for(a=0;a<strlen(st1);a++)
   {
	input=getch();
	if(input!=st1[a])
	{

	     error=st1[a];
	     textcolor(RED);
	    cprintf(" %c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf(" %c",input);
	 }
   }
  }

  char st2[15]="akfhslg;dj";

 printf("\n\nEnter :  a k f h s l g ; d j \n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput : ");
 for(a=0;a<strlen(st2);a++)
   {
	input=getch();
	if(input!=st2[a])
	{

	     error=st2[a];
	     textcolor(RED);
	     cprintf(" %c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
	     }

	  }
	else
	 {
	   textcolor(GREEN);
	   cprintf(" %c",input);
	 }
	  textcolor(WHITE);
   }
  }


   gotoxy(39,5);for(k=0;k<42;k++)printf("_");
   gotoxy(39,12);for(k=0;k<42;k++)printf("_");
   gotoxy(40,7);printf("ERRORS");
   gotoxy(40,9);if(pa>0)printf("a = %d\t", pa);if(ps>0)printf("s = %d\t", ps);if(pd>0)printf("d = %d\t", pd);if(pf>0)printf("f = %d\t", pf);if(pg>0)printf("g = %d\n\n", pg);
   gotoxy(40,11);if(ph>0)printf("h = %d\t", ph);if(pj>0)printf("j = %d\t", pj);if(pk>0)printf("k = %d\t", pk);if(pl>0)printf("l = %d\t", pl);if(psemi>0)printf("; = %d\t", psemi);
     textcolor(RED);
     for(k=1;k<=80;k++)
      {
	gotoxy(k,20);
	cprintf("_");
      }
      textcolor(WHITE);
      gotoxy(5,19);
   printf("\n\n\t\tEnter number of your choice");
   printf("\n\n\t\t1.Graph\t\t2.Retry\t\t3.Back\t\t4.Exit");
     label1:
   printf("\n\n\t\tEnter Number : ");
   scanf("%d", &c);
       pa++,ps++,pd++,pf++,pg++,ph++,pj++,pk++,pl++,psemi++;
       max=6;
     switch(c)
       {
	  case 1:graph(pa,pb,pc,pd,pe,pf,pg,ph,pi,pj,pk,pl,pm,pn,po,pp,pq,pr,ps,pt,pu,pv,pw,px,py,pz,psemi,pdot,pcomma,pslash,max);
		   printf("\n\t\tEnter number of your choice.");
		   printf("\n\n\t\t1.NEXT\t\t2.BACK\t\t3.EXIT");
		       label2:
		   printf("\n\n\t\tEnter Number : ");
		   scanf("%d", &k);
			 switch(k)
			   {
				  case 1:stage2_scr();
						 break;
				  case 2:stage1();
					   break;
				  case 3:exit_prg();
					    break;
				  default :printf("\n\t\t****ERROR****");
					   goto label2;
			   }
		  break;
	  case 2:stage1();
		     break;
	  case 3:learn_scr();
		 break;
	  case 4:exit_prg();
		 break;
	  default :printf("\n\t\t****ERROR****");
		   goto label1;
       }



   getch();
}




void stage2_scr()
{
	clrscr();
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\n\t\t\t    ");textcolor(GREEN);cprintf("Welcome Learner");textcolor(WHITE);
	printf("\n\n\n     This stage of programme is specially designed for practice of\n\n\t characters like");
	 textcolor(GREEN);cprintf("  q");printf(" , ");
	 textcolor(GREEN);cprintf("w");printf(" , ");
	 textcolor(GREEN);cprintf("e");printf(" , ");
	 textcolor(GREEN);cprintf("r");printf(" , ");
	 textcolor(GREEN);cprintf("t");printf(" , ");
	 textcolor(GREEN);cprintf("y");printf(" , ");
	 textcolor(GREEN);cprintf("u");printf(" , ");
	 textcolor(GREEN);cprintf("i");printf(" , ");
	 textcolor(GREEN);cprintf("o");printf(" , ");
	 textcolor(GREEN);cprintf("p");textcolor(WHITE);
	printf("\n\n\n\t   1.Put your index fingures on ");textcolor(GREEN);cprintf("R");printf(" and ");textcolor(GREEN);cprintf("U");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   2.Put your middle fingures on ");textcolor(GREEN);cprintf("E");printf(" and ");textcolor(GREEN);cprintf("I");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   3.Put your ring fingures on ");textcolor(GREEN);cprintf("W");printf(" and ");textcolor(GREEN);cprintf("O");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   4.Put your little fingures on ");textcolor(GREEN);cprintf("Q");printf(" and ");textcolor(GREEN);cprintf("P");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   5.Use your index fingures to press  ");textcolor(GREEN);cprintf("T");printf(" and ");textcolor(GREEN);cprintf("Y");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t\t\t\t\t      ");textcolor(GREEN);cprintf("Press any key to continue.....");textcolor(WHITE);
	getch();
	stage2();

}



void stage2(void)
{
    clrscr();

      int k;
 int a,b,c,pa=0,pb=0,pc=0,pd=0,pe=0,pf=0,pg=0,ph=0,pi=0,pj=0,pk=0,pl=0,pm=0,pn=0,po=0,pp=0,pq=0,pr=0,ps=0,pt=0,pu=0,pv=0,pw=0,px=0,py=0,pz=0,psemi=0,pdot=0,pcomma=0,pslash=0,max;
 char input,error,l;
 char st[15]="qwertyuiop";
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
 printf("\n\nEnter :  q w e r t y u i o p \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st);a++)
   {
	input=getch();
	if(input!=st[a])
	{

	     error=st[a];
	     textcolor(RED);
	     cprintf(" %c", input);
	     switch(error)
	     {
		 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;
		 case 't':pt++;break;           case 'p':pp++;break;
	     }

	  }
	else
	 {
	      textcolor(GREEN);
		   cprintf(" %c",input);
	 }
   }
  }

  char st1[15]="qpwoeiruty";

 printf("\n\nEnter :  q p w o e i r u t y \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st1);a++)
   {
	input=getch();
	if(input!=st1[a])
	{

	     error=st1[a];
	     textcolor(RED);
	    cprintf(" %c", input);

	     switch(error)
	     {
		 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;
		 case 't':pt++;break;           case 'p':pp++;break;
	     }

	  }
	else
	 {
	       textcolor(GREEN);
		   cprintf(" %c",input);
	 }
   }
  }


 char st2[15]="quroeiytpw";

 printf("\n\nEnter :  q u r o e i y t p w \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st2);a++)
   {
	input=getch();
	if(input!=st2[a])
	{

	     error=st2[a];
	     textcolor(RED);
	    cprintf(" %c", input);
	     switch(error)
	     {
		 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;
		 case 't':pt++;break;           case 'p':pp++;break;
	     }

	  }
	else
	 {
	     textcolor(GREEN);
		   cprintf(" %c",input);
	 }
	   textcolor(WHITE);
   }
  }

   gotoxy(39,5);for(k=0;k<42;k++)printf("_");
   gotoxy(39,12);for(k=0;k<42;k++)printf("_");
   gotoxy(40,7);printf("ERRORS");
   gotoxy(40,9);
   if(pq>0)printf("q = %d\t", pq);
   if(pw>0)printf("w = %d\t", pw);
   if(pe>0)printf("e = %d\t", pe);
   if(pr>0)printf("r = %d\t", pr);
   if(pt>0)printf("t = %d", pt);
   gotoxy(40,11);
   if(py>0)printf("y = %d\t", py);
   if(pu>0)printf("u = %d\t", pu);
   if(pi>0)printf("i = %d\t", pi);
   if(po>0)printf("o = %d\t", po);
   if(pp>0)printf("p = %d\t", pp);
    textcolor(RED);
     for(k=1;k<=80;k++)
      {
	gotoxy(k,20);
	cprintf("_");
      }
      textcolor(WHITE);
   gotoxy(5,19);
   printf("\n\n\t\tEnter number of your choice");
   printf("\n\n\t\t1.Graph\t\t2.Retry\t\t3.Back\t\t4.Exit");
     label1:
   printf("\n\n\t\tEnter Number : ");
   scanf("%d", &c);
   max=6;
       pq++,pw++,pe++,pr++,pt++,py++,pu++,pi++,po++,pp++;
     switch(c)
       {
	  case 1:graph(pa,pb,pc,pd,pe,pf,pg,ph,pi,pj,pk,pl,pm,pn,po,pp,pq,pr,ps,pt,pu,pv,pw,px,py,pz,psemi,pdot,pcomma,pslash,max);
		   printf("\n\t\tEnter number of your choice.");
		   printf("\n\n\t\t1.NEXT\t\t2.BACK\t\t3.EXIT");
		       label2:
		   printf("\n\n\t\tEnter Number : ");
		   scanf("%d", &k);
			 switch(k)
			   {
				  case 1:stage3_scr();
						 break;
				  case 2:stage2();
					   break;
				  case 3:exit_prg();
					    break;
				  default :printf("\n\t\t****ERROR****");
					   goto label2;
			   }
		  break;
	  case 2:stage2();
		     break;
	  case 3:learn_scr();
		 break;
	  case 4:exit_prg();
		 break;
	  default :printf("\n\t\t****ERROR****");
		   goto label1;
       }



   getch();

}


void stage3_scr()
{
	clrscr();

	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\n\t\t\t    ");textcolor(GREEN);cprintf("Welcome Learner");textcolor(WHITE);
	printf("\n\n\n     This stage of programme is specially designed for practice of\n\n\t characters like");
	 textcolor(GREEN);cprintf("  z");printf(" , ");
	 textcolor(GREEN);cprintf("x");printf(" , ");
	 textcolor(GREEN);cprintf("c");printf(" , ");
	 textcolor(GREEN);cprintf("v");printf(" , ");
	 textcolor(GREEN);cprintf("b");printf(" , ");
	 textcolor(GREEN);cprintf("n");printf(" , ");
	 textcolor(GREEN);cprintf("m");printf(" , ");
	 textcolor(GREEN);cprintf(",");printf(" , ");
	 textcolor(GREEN);cprintf(".");printf(" , ");
	 textcolor(GREEN);cprintf("/");textcolor(WHITE);
	printf("\n\n\n\t   1.Put your index fingures on ");textcolor(GREEN);cprintf("V");printf(" and ");textcolor(GREEN);cprintf("M");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   2.Put your middle fingures on ");textcolor(GREEN);cprintf("C");printf(" and ");textcolor(GREEN);cprintf(",");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   3.Put your ring fingures on ");textcolor(GREEN);cprintf("X");printf(" and ");textcolor(GREEN);cprintf(".");printf(" respectively. ");textcolor(WHITE);
	printf("\n\n\t   4.Put your little fingures on ");textcolor(GREEN);cprintf("Z");printf(" and ");textcolor(GREEN);cprintf("/");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t   5.Use your index fingures to press  ");textcolor(GREEN);cprintf("B");printf(" and ");textcolor(GREEN);cprintf("N");printf(" respectively.");textcolor(WHITE);
	printf("\n\n\t\t\t\t\t      ");textcolor(GREEN);cprintf("Press any key to continue.....");textcolor(WHITE);
	getch();
	stage3();

}


void stage3(void)
{
    clrscr();

     int k;
 int a,b,c,pa=0,pb=0,pc=0,pd=0,pe=0,pf=0,pg=0,ph=0,pi=0,pj=0,pk=0,pl=0,pm=0,pn=0,po=0,pp=0,pq=0,pr=0,ps=0,pt=0,pu=0,pv=0,pw=0,px=0,py=0,pz=0,psemi=0,pdot=0,pcomma=0,pslash=0,max;
 char input,error,l;
 char st[15]="zxcvbnm,./";
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
 printf("\n\nEnter :  z x c v b n m , . / \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st);a++)
   {
	input=getch();
	if(input!=st[a])
	{

	     error=st[a];
	     textcolor(RED);
	     cprintf(" %c", input);
	     switch(error)
	     {
		 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	  }
	else
	 {
		textcolor(GREEN);
		   cprintf(" %c",input);
	 }
   }
  }

   char st1[15]="z/x.c,vmbn";

 printf("\n\nEnter :  z / x . c , v m b n \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st1);a++)
   {
	input=getch();
	if(input!=st1[a])
	{

	     error=st1[a];
	     textcolor(RED);
	     cprintf(" %c", input);

	     switch(error)
	     {
		 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	  }
	else
	 {
	      textcolor(GREEN);
		   cprintf(" %c",input);
	 }

   }
  }

    char st2[15]="zm/x.vncb,";

 printf("\n\nEnter :  z m / x . v n c b , \n");
 for(b=1;b<=2;b++)
 {

     printf("\nInput : ");
  for(a=0;a<strlen(st2);a++)
   {
	input=getch();
	if(input!=st2[a])
	{

	     error=st2[a];
	     textcolor(RED);
	     cprintf(" %c", input);

	     switch(error)
	     {
		 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	  }
	else
	 {
	       textcolor(GREEN);
		   cprintf(" %c",input);
	 }
	   textcolor(WHITE);
   }
  }


   gotoxy(39,5);for(k=0;k<42;k++)printf("_");
   gotoxy(39,12);for(k=0;k<42;k++)printf("_");
   gotoxy(40,7);printf("ERRORS");
   gotoxy(40,9);
   if(pz>0)printf("z = %d\t", pz);
   if(px>0)printf("x = %d\t", px);
   if(pc>0)printf("c = %d\t", pc);
   if(pv>0)printf("v = %d\t", pv);
   if(pb>0)printf("b = %d", pb);
   gotoxy(40,11);
   if(pn>0)printf("n = %d\t", pn);
   if(pm>0)printf("m = %d\t", pm);
   if(pcomma>0)printf(", = %d\t", pcomma);
   if(pdot>0)printf(". = %d\t", pdot);
   if(pslash>0)printf("/ = %d\t", pslash);
   textcolor(RED);
     for(k=1;k<=80;k++)
      {
	gotoxy(k,20);
	cprintf("_");
      }
      textcolor(WHITE);
      gotoxy(5,19);
   printf("\n\n\t\tEnter number of your choice");
   printf("\n\n\t\t1.Graph\t\t2.Retry\t\t3.Back\t\t4.Exit");
      label1:
   printf("\n\n\t\tEnter Number : ");
   scanf("%d", &c);
   max=6;
       pz++,px++,pc++,pv++,pb++,pn++,pm++,pcomma++,pdot++,pslash++;
     switch(c)
       {
	  case 1:graph(pa,pb,pc,pd,pe,pf,pg,ph,pi,pj,pk,pl,pm,pn,po,pp,pq,pr,ps,pt,pu,pv,pw,px,py,pz,psemi,pdot,pcomma,pslash,max);
		   printf("\n\t\tEnter number of your choice.");
		   printf("\n\n\t\t1.NEXT\t\t2.BACK\t\t3.EXIT\t\t4.MAIN MENU");
		       label2:
		   printf("\n\n\t\tEnter Number : ");
		   scanf("%d", &k);
			 switch(k)
			   {
				  case 1:stage4_scr();
					    break;
				  case 2:stage3();
					   break;
				  case 3:exit_prg();
					    break;
				  case 4:main();
				  default :printf("\n\t\t****ERROR****");
					   goto label2;
			   }
		  break;
	  case 2:stage3();
		     break;
	  case 3:learn_scr();
		 break;
	  case 4:exit_prg();
		 break;
	  default :printf("\n\t\t****ERROR****");
		   goto label1;
       }



   getch();

}

void stage4_scr(void)
{
	clrscr();

	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\n\t\t\t    ");textcolor(GREEN);cprintf("Welcome Learner");textcolor(WHITE);
	printf("\n\n\n         This stage of programme is specially designed to practice \n\n\t all characters from ");textcolor(GREEN);cprintf("a");printf(" to ");textcolor(GREEN);cprintf("z");printf(" and also some special characters.");


	printf("\n\n\n\n\n\t\t\t\t\t      ");textcolor(GREEN);cprintf("Press any key to continue.....");textcolor(WHITE);
	getch();
	stage4();

}

void stage4(void)
{
    clrscr();
    int a,b,c,pa=0,pb=0,pc=0,pd=0,pe=0,pf=0,pg=0,ph=0,pi=0,pj=0,pk=0,pl=0,pm=0,pn=0,po=0,pp=0,pq=0,pr=0,ps=0,pt=0,pu=0,pv=0,pw=0,px=0,py=0,pz=0,psemi=0,pdot=0,pcomma=0,pslash=0,pspace=0;
    char input,error;
    char st[100]="the quick brown fox jumps over the lazy dog";
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
 printf("\n\nEnter :  the quick brown fox jumps over the lazy dog \n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput :  ");
 for(a=0;a<strlen(st);a++)
   {
	input=getch();
	if(input!=st[a])
	{

	     error=st[a];
	     textcolor(RED);
	     cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	  }
	else
	 {
	   textcolor(GREEN);
	   cprintf("%c",input);
	 }
   }
  }
   char st1[100]="how are you. hope you like this programme.";

 printf("\n\nEnter :   how are you. hope you like this programme. \n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput :   ");
 for(a=0;a<strlen(st1);a++)
   {
	input=getch();
	if(input!=st1[a])
	{

	     error=st1[a];
	     textcolor(RED);
	    cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf("%c",input);
	 }
   }
  }
   int k;
   gotoxy(56,5);for(k=0;k<25;k++)printf("_");
   gotoxy(56,24);for(k=0;k<25;k++)printf("_");
   gotoxy(57,7);printf("ERRORS");
   gotoxy(56,9);printf(" ");if(pa<=0){textcolor(GREEN);cprintf("a");}else{printf("a");}printf(" = ");if(pa>0){textcolor(RED);cprintf("%d", pa);}else{printf("%d", pa);}
   gotoxy(63,12);printf(" ");if(ps<=0){textcolor(GREEN);cprintf("s");}else{printf("s");}printf(" = ");if(ps>0){textcolor(RED);cprintf("%d", ps);}else{printf("%d", ps);}
   gotoxy(56,12);printf(" ");if(pd<=0){textcolor(GREEN);cprintf("d");}else{printf("d");}printf(" = ");if(pd>0){textcolor(RED);cprintf("%d", pd);}else{printf("%d", pd);}
   gotoxy(56,14);printf(" ");if(pf<=0){textcolor(GREEN);cprintf("f");}else{printf("f");}printf(" = ");if(pf>0){textcolor(RED);cprintf("%d", pf);}else{printf("%d", pf);}
   gotoxy(56,15);printf(" ");if(pg<=0){textcolor(GREEN);cprintf("g");}else{printf("g");}printf(" = ");if(pg>0){textcolor(RED);cprintf("%d", pg);}else{printf("%d", pg);}
   gotoxy(56,16);printf(" ");if(ph<=0){textcolor(GREEN);cprintf("h");}else{printf("h");}printf(" = ");if(ph>0){textcolor(RED);cprintf("%d", ph);}else{printf("%d", ph);}
   gotoxy(56,18);printf(" ");if(pj<=0){textcolor(GREEN);cprintf("j");}else{printf("j");}printf(" = ");if(pj>0){textcolor(RED);cprintf("%d", pj);}else{printf("%d", pj);}
   gotoxy(56,19);printf(" ");if(pk<=0){textcolor(GREEN);cprintf("k");}else{printf("k");}printf(" = ");if(pk>0){textcolor(RED);cprintf("%d", pk);}else{printf("%d", pk);}
   gotoxy(56,20);printf(" ");if(pl<=0){textcolor(GREEN);cprintf("l");}else{printf("l");}printf(" = ");if(pl>0){textcolor(RED);cprintf("%d", pl);}else{printf("%d", pl);}
   gotoxy(70,9);printf(" ");if(psemi<=0){textcolor(GREEN);cprintf("colon");}else{printf("colon");}printf(" = ");if(psemi>0){textcolor(RED);cprintf("%d", psemi);}else{printf("%d", psemi);}
   gotoxy(63,10);printf(" ");if(pq<=0){textcolor(GREEN);cprintf("q");}else{printf("q");}printf(" = ");if(pq>0){textcolor(RED);cprintf("%d", pq);}else{printf("%d", pq);}
   gotoxy(63,16);printf(" ");if(pw<=0){textcolor(GREEN);cprintf("w");}else{printf("w");}printf(" = ");if(pw>0){textcolor(RED);cprintf("%d", pw);}else{printf("%d", pw);}
   gotoxy(56,13);printf(" ");if(pe<=0){textcolor(GREEN);cprintf("e");}else{printf("e");}printf(" = ");if(pe>0){textcolor(RED);cprintf("%d", pe);}else{printf("%d", pe);}
   gotoxy(63,11);printf(" ");if(pr<=0){textcolor(GREEN);cprintf("r");}else{printf("r");}printf(" = ");if(pr>0){textcolor(RED);cprintf("%d", pr);}else{printf("%d", pr);}
   gotoxy(63,13);printf(" ");if(pt<=0){textcolor(GREEN);cprintf("t");}else{printf("t");}printf(" = ");if(pt>0){textcolor(RED);cprintf("%d", pt);}else{printf("%d", pt);}
   gotoxy(63,18);printf(" ");if(py<=0){textcolor(GREEN);cprintf("y");}else{printf("y");}printf(" = ");if(py>0){textcolor(RED);cprintf("%d", py);}else{printf("%d", py);}
   gotoxy(63,14);printf(" ");if(pu<=0){textcolor(GREEN);cprintf("u");}else{printf("u");}printf(" = ");if(pu>0){textcolor(RED);cprintf("%d", pu);}else{printf("%d", pu);}
   gotoxy(56,17);printf(" ");if(pi<=0){textcolor(GREEN);cprintf("i");}else{printf("i");}printf(" = ");if(pi>0){textcolor(RED);cprintf("%d", pi);}else{printf("%d", pi);}
   gotoxy(56,23);printf(" ");if(po<=0){textcolor(GREEN);cprintf("o");}else{printf("o");}printf(" = ");if(po>0){textcolor(RED);cprintf("%d", po);}else{printf("%d", po);}
   gotoxy(63,9);printf(" ");if(pp<=0){textcolor(GREEN);cprintf("p");}else{printf("p");}printf(" = ");if(pp>0){textcolor(RED);cprintf("%d", pp);}else{printf("%d", pp);}
   gotoxy(63,19);printf(" ");if(pz<=0){textcolor(GREEN);cprintf("z");}else{printf("z");}printf(" = ");if(pz>0){textcolor(RED);cprintf("%d", pz);}else{printf("%d", pz);}
   gotoxy(63,17);printf(" ");if(px<=0){textcolor(GREEN);cprintf("x");}else{printf("x");}printf(" = ");if(px>0){textcolor(RED);cprintf("%d", px);}else{printf("%d", px);}
   gotoxy(56,11);printf(" ");if(pc<=0){textcolor(GREEN);cprintf("c");}else{printf("c");}printf(" = ");if(pc>0){textcolor(RED);cprintf("%d", pc);}else{printf("%d", pc);}
   gotoxy(63,15);printf(" ");if(pv<=0){textcolor(GREEN);cprintf("v");}else{printf("v");}printf(" = ");if(pv>0){textcolor(RED);cprintf("%d", pv);}else{printf("%d", pv);}
   gotoxy(56,10);printf(" ");if(pb<=0){textcolor(GREEN);cprintf("b");}else{printf("b");}printf(" = ");if(pb>0){textcolor(RED);cprintf("%d", pb);}else{printf("%d", pb);}
   gotoxy(56,22);printf(" ");if(pn<=0){textcolor(GREEN);cprintf("n");}else{printf("n");}printf(" = ");if(pn>0){textcolor(RED);cprintf("%d", pn);}else{printf("%d", pn);}
   gotoxy(56,21);printf(" ");if(pm<=0){textcolor(GREEN);cprintf("m");}else{printf("m");}printf(" = ");if(pm>0){textcolor(RED);cprintf("%d", pm);}else{printf("%d", pm);}
   gotoxy(70,10);printf(" ");if(pcomma<=0){textcolor(GREEN);cprintf("comma");}else{printf("comma");}printf(" = ");if(pcomma>0){textcolor(RED);cprintf("%d", pcomma);}else{printf("%d", pcomma);}
   gotoxy(70,11);printf(" ");if(pdot<=0){textcolor(GREEN);cprintf("dot");}else{printf("dot");}printf(" = ");if(pdot>0){textcolor(RED);cprintf("%d", pdot);}else{printf("%d", pdot);}
   gotoxy(70,12);printf(" ");if(pslash<=0){textcolor(GREEN);cprintf("slash");}else{printf("slash");}printf(" = ");if(pslash>0){textcolor(RED);cprintf("%d", pslash);}else{printf("%d", pslash);}
   gotoxy(70,13);printf(" ");if(pspace<=0){textcolor(GREEN);cprintf("space");}else{printf("space");}printf(" = ");if(pspace>0){textcolor(RED);cprintf("%d", pspace);}else{printf("%d", pspace);}
   textcolor(WHITE);


   gotoxy(2,20);
    printf("\n\tEnter number of your choice.");
		   printf("\n\n\t1.RETRY  2.BACK  3.EXIT  4.MAIN MENU");
		       label2:
		   printf("\n\n\tEnter Number : ");
		   scanf("%d", &k);
			 switch(k)
			   {
				  case 1:stage4();
					   break;
				  case 2:learn_scr();
					    break;
				  case 3:exit_prg();
					   break;
				  case 4:main();
				  default :printf("\n\t\t****ERROR****");
					   goto label2;
			   }







}



//global graph function
void graph(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t,int u,int v,int w,int x,int y,int z,int semi,int dot,int comma,int slash,int max)
{
   clrscr();
   int gr,trt,trt1;

	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);

    gotoxy(13,16);
   trt1=17;
   for(trt=0;trt<=max+3;trt++)
     {
       printf("___");
     }
   for(trt=1;trt<=max;trt++)
     {
	gotoxy(trt1,17);textcolor(RED+BLINK);
	cprintf("%d", trt);
	trt1+=3; textcolor(WHITE);
     }
   gotoxy(trt1,17);printf("TOTAL");


   trt1++;
   gotoxy(3,5);

    if(a>0){printf("\n\t  ");if(a-1==0){textcolor(GREEN);cprintf("A");}else{textcolor(YELLOW);cprintf("A");}printf(" | ");for(gr=0;gr<a-1;gr++){printf("***");delay(5);} gotoxy(trt1,6); textcolor(RED);cprintf(" %d",gr);}
    if(s>0){printf("\n\t  ");if(s-1==0){textcolor(GREEN);cprintf("S");}else{textcolor(YELLOW);cprintf("S");}printf(" | ");for(gr=0;gr<s-1;gr++){printf("***");delay(5);} gotoxy(trt1,7); textcolor(RED);cprintf(" %d",gr);}
    if(d>0){printf("\n\t  ");if(d-1==0){textcolor(GREEN);cprintf("D");}else{textcolor(YELLOW);cprintf("D");}printf(" | ");for(gr=0;gr<d-1;gr++){printf("***");delay(5);} gotoxy(trt1,8); textcolor(RED);cprintf(" %d",gr);}
    if(f>0){printf("\n\t  ");if(f-1==0){textcolor(GREEN);cprintf("F");}else{textcolor(YELLOW);cprintf("F");}printf(" | ");for(gr=0;gr<f-1;gr++){printf("***");delay(5);} gotoxy(trt1,9); textcolor(RED);cprintf(" %d",gr);}
    if(g>0){printf("\n\t  ");if(g-1==0){textcolor(GREEN);cprintf("G");}else{textcolor(YELLOW);cprintf("G");}printf(" | ");for(gr=0;gr<g-1;gr++){printf("***");delay(5);} gotoxy(trt1,10); textcolor(RED);cprintf(" %d",gr);}
    if(h>0){printf("\n\t  ");if(h-1==0){textcolor(GREEN);cprintf("H");}else{textcolor(YELLOW);cprintf("H");}printf(" | ");for(gr=0;gr<h-1;gr++){printf("***");delay(5);} gotoxy(trt1,11); textcolor(RED);cprintf(" %d",gr);}
    if(j>o){printf("\n\t  ");if(j-1==0){textcolor(GREEN);cprintf("J");}else{textcolor(YELLOW);cprintf("J");}printf(" | ");for(gr=0;gr<j-1;gr++){printf("***");delay(5);} gotoxy(trt1,12); textcolor(RED);cprintf(" %d",gr);}
    if(k>0){printf("\n\t  ");if(k-1==0){textcolor(GREEN);cprintf("K");}else{textcolor(YELLOW);cprintf("K");}printf(" | ");for(gr=0;gr<k-1;gr++){printf("***");delay(5);} gotoxy(trt1,13); textcolor(RED);cprintf(" %d",gr);}
    if(l>0){printf("\n\t  ");if(l-1==0){textcolor(GREEN);cprintf("L");}else{textcolor(YELLOW);cprintf("L");}printf(" | ");for(gr=0;gr<l-1;gr++){printf("***");delay(5);} gotoxy(trt1,14); textcolor(RED);cprintf(" %d",gr);}
    if(semi>0){printf("\n\t  ");if(semi-1==0){textcolor(GREEN);cprintf(";");}else{textcolor(YELLOW);cprintf(";");}printf(" | ");for(gr=0;gr<semi-1;gr++){printf("***");delay(5);} gotoxy(trt1,15); textcolor(RED);cprintf(" %d",gr);}
    if(q>0){printf("\n\t  ");if(q-1==0){textcolor(GREEN);cprintf("Q");}else{textcolor(YELLOW);cprintf("Q");}printf(" | ");for(gr=0;gr<q-1;gr++){printf("***");delay(5);} gotoxy(trt1,6); textcolor(RED);cprintf(" %d",gr);}
    if(w>0){printf("\n\t  ");if(w-1==0){textcolor(GREEN);cprintf("W");}else{textcolor(YELLOW);cprintf("W");}printf(" | ");for(gr=0;gr<w-1;gr++){printf("***");delay(5);} gotoxy(trt1,7); textcolor(RED);cprintf(" %d",gr);}
    if(e>0){printf("\n\t  ");if(e-1==0){textcolor(GREEN);cprintf("E");}else{textcolor(YELLOW);cprintf("E");}printf(" | ");for(gr=0;gr<e-1;gr++){printf("***");delay(5);} gotoxy(trt1,8); textcolor(RED);cprintf(" %d",gr);}
    if(r>0){printf("\n\t  ");if(r-1==0){textcolor(GREEN);cprintf("R");}else{textcolor(YELLOW);cprintf("R");}printf(" | ");for(gr=0;gr<r-1;gr++){printf("***");delay(5);} gotoxy(trt1,9); textcolor(RED);cprintf(" %d",gr);}
    if(t>0){printf("\n\t  ");if(t-1==0){textcolor(GREEN);cprintf("T");}else{textcolor(YELLOW);cprintf("T");}printf(" | ");for(gr=0;gr<t-1;gr++){printf("***");delay(5);} gotoxy(trt1,10); textcolor(RED);cprintf(" %d",gr);}
    if(y>0){printf("\n\t  ");if(y-1==0){textcolor(GREEN);cprintf("Y");}else{textcolor(YELLOW);cprintf("Y");}printf(" | ");for(gr=0;gr<y-1;gr++){printf("***");delay(5);} gotoxy(trt1,11); textcolor(RED);cprintf(" %d",gr);}
    if(u>0){printf("\n\t  ");if(u-1==0){textcolor(GREEN);cprintf("U");}else{textcolor(YELLOW);cprintf("U");}printf(" | ");for(gr=0;gr<u-1;gr++){printf("***");delay(5);} gotoxy(trt1,12); textcolor(RED);cprintf(" %d",gr);}
    if(i>0){printf("\n\t  ");if(i-1==0){textcolor(GREEN);cprintf("I");}else{textcolor(YELLOW);cprintf("I");}printf(" | ");for(gr=0;gr<i-1;gr++){printf("***");delay(5);} gotoxy(trt1,13); textcolor(RED);cprintf(" %d",gr);}
    if(o>0){printf("\n\t  ");if(o-1==0){textcolor(GREEN);cprintf("O");}else{textcolor(YELLOW);cprintf("O");}printf(" | ");for(gr=0;gr<o-1;gr++){printf("***");delay(5);} gotoxy(trt1,14); textcolor(RED);cprintf(" %d",gr);}
    if(p>0){printf("\n\t  ");if(p-1==0){textcolor(GREEN);cprintf("P");}else{textcolor(YELLOW);cprintf("P");}printf(" | ");for(gr=0;gr<p-1;gr++){printf("***");delay(5);} gotoxy(trt1,15); textcolor(RED);cprintf(" %d",gr);}
    if(z>0){printf("\n\t  ");if(z-1==0){textcolor(GREEN);cprintf("Z");}else{textcolor(YELLOW);cprintf("Z");}printf(" | ");for(gr=0;gr<z-1;gr++){printf("***");delay(5);} gotoxy(trt1,6); textcolor(RED);cprintf(" %d",gr);}
    if(x>0){printf("\n\t  ");if(x-1==0){textcolor(GREEN);cprintf("X");}else{textcolor(YELLOW);cprintf("X");}printf(" | ");for(gr=0;gr<x-1;gr++){printf("***");delay(5);} gotoxy(trt1,7); textcolor(RED);cprintf(" %d",gr);}
    if(c>0){printf("\n\t  ");if(c-1==0){textcolor(GREEN);cprintf("C");}else{textcolor(YELLOW);cprintf("C");}printf(" | ");for(gr=0;gr<c-1;gr++){printf("***");delay(5);} gotoxy(trt1,8); textcolor(RED);cprintf(" %d",gr);}
    if(v>0){printf("\n\t  ");if(v-1==0){textcolor(GREEN);cprintf("v");}else{textcolor(YELLOW);cprintf("V");}printf(" | ");for(gr=0;gr<v-1;gr++){printf("***");delay(5);} gotoxy(trt1,9); textcolor(RED);cprintf(" %d",gr);}
    if(b>0){printf("\n\t  ");if(b-1==0){textcolor(GREEN);cprintf("B");}else{textcolor(YELLOW);cprintf("B");}printf(" | ");for(gr=0;gr<b-1;gr++){printf("***");delay(5);} gotoxy(trt1,10); textcolor(RED);cprintf(" %d",gr);}
    if(n>0){printf("\n\t  ");if(n-1==0){textcolor(GREEN);cprintf("N");}else{textcolor(YELLOW);cprintf("N");}printf(" | ");for(gr=0;gr<n-1;gr++){printf("***");delay(5);} gotoxy(trt1,11); textcolor(RED);cprintf(" %d",gr);}
    if(m>o){printf("\n\t  ");if(m-1==0){textcolor(GREEN);cprintf("M");}else{textcolor(YELLOW);cprintf("M");}printf(" | ");for(gr=0;gr<m-1;gr++){printf("***");delay(5);} gotoxy(trt1,12); textcolor(RED);cprintf(" %d",gr);}
    if(comma>0){printf("\n\t  ");if(comma-1==0){textcolor(GREEN);cprintf(",");}else{textcolor(YELLOW);cprintf(",");}printf(" | ");for(gr=0;gr<comma-1;gr++){printf("***");delay(5);} gotoxy(trt1,13); textcolor(RED);cprintf(" %d",gr);}
    if(dot>0){printf("\n\t  ");if(dot-1==0){textcolor(GREEN);cprintf(".");}else{textcolor(YELLOW);cprintf(".");}printf(" | ");for(gr=0;gr<dot-1;gr++){printf("***");delay(5);} gotoxy(trt1,14); textcolor(RED);cprintf(" %d",gr);}
    if(slash>0){printf("\n\t  ");if(slash-1==0){textcolor(GREEN);cprintf("/");}else{textcolor(YELLOW);cprintf("/");}printf(" | ");for(gr=0;gr<slash-1;gr++){printf("***");delay(5);} gotoxy(trt1,15); textcolor(RED);cprintf(" %d",gr);}
	  textcolor(RED);
    for(trt1=1;trt1<=80;trt1++)
      {
	gotoxy(trt1,18);
	cprintf("_");
      }
       textcolor(WHITE);
}



void word_scr(void)
{
   clrscr();
  printf("\n\n\n\t\t\t NO DATA FOUND  \n\n\t\t\t DATA WILL BE ADDED SOON");
  getch();
  main();

}
void para(void)
{
	clrscr();
    textcolor(WHITE);
    int a,b,c,pa=0,pb=0,pc=0,pd=0,pe=0,pf=0,pg=0,ph=0,pi=0,pj=0,pk=0,pl=0,pm=0,pn=0,po=0,pp=0,pq=0,pr=0,ps=0,pt=0,pu=0,pv=0,pw=0,px=0,py=0,pz=0,psemi=0,pdot=0,pcomma=0,pslash=0,pspace=0;
    char input,error;
    char st[100]="consumer taste and preferences play an important role in determining";
    char st1[100]="the demand for a product. taste and preference depends, generally, on";
    char st2[100]="the social customs, religious values attached to a commodity, habits";
    char st3[100]="of the people, the general life style ofthe society and also the age";
    char st4[100]="and sex of the consumers.";
	printf("\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
	printf("\n\n\t\t\t ");textcolor(GREEN);cprintf("T");printf("\t");textcolor(GREEN);cprintf("Y");printf("\t");textcolor(GREEN);cprintf("P");printf("\t");textcolor(GREEN);cprintf("O");textcolor(WHITE);
	printf("\n\t\t");textcolor(RED);cprintf("________________________________________");textcolor(WHITE);
 printf("\n\nEnter :  consumer taste and preferences play an important role in determining");
 printf("\n         the demand for a product. taste and preference depends, generally, on");
 printf("\n         the social customs, religious values attached to a commodity, habits");
 printf("\n         of the people, the general life style ofthe society and also the age");
 printf("\n         and sex of the consumers.\n");
 for(b=1;b<=2;b++)
 {
  printf("\nInput :  ");
 for(a=0;a<strlen(st);a++)
   {
	input=getch();
	if(input!=st[a])
	{

	     error=st[a];
	     textcolor(RED);
	     cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	  }
	else
	 {
	   textcolor(GREEN);
	   cprintf("%c",input);
	 }
   }

     printf("\n         ");
 for(a=0;a<strlen(st1);a++)
   {
	input=getch();
	if(input!=st1[a])
	{

	     error=st1[a];
	     textcolor(RED);
	    cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf("%c",input);
	 }
   }
    printf("\n         ");
 for(a=0;a<strlen(st2);a++)
   {
	input=getch();
	if(input!=st2[a])
	{

	     error=st2[a];
	     textcolor(RED);
	    cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf("%c",input);
	 }
   }
    printf("\n         ");
 for(a=0;a<strlen(st3);a++)
   {
	input=getch();
	if(input!=st3[a])
	{

	     error=st3[a];
	     textcolor(RED);
	    cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf("%c",input);
	 }
   }
    printf("\n         ");
 for(a=0;a<strlen(st4);a++)
   {
	input=getch();
	if(input!=st4[a])
	{

	     error=st4[a];
	     textcolor(RED);
	    cprintf("%c", input);

	     switch(error)
	     {
		 case 'a':pa++;break;           case 'h':ph++;break;      case ' ':pspace++;break;
		 case 's':ps++;break;           case 'j':pj++;break;
		 case 'd':pd++;break;           case 'k':pk++;break;
		 case 'f':pf++;break;           case 'l':pl++;break;
		 case 'g':pg++;break;           case ';':psemi++;break;
			 case 'q':pq++;break;           case 'y':py++;break;
		 case 'w':pw++;break;           case 'u':pu++;break;
		 case 'e':pe++;break;           case 'i':pi++;break;
		 case 'r':pr++;break;           case 'o':po++;break;    case 't':pt++;break;
			case 'p':pp++;break;
				 case 'z':pz++;break;           case 'n':pn++;break;
		 case 'x':px++;break;           case 'm':pm++;break;
		 case 'c':pc++;break;           case ',':pcomma++;break;
		 case 'v':pv++;break;           case '.':pdot++;break;
		 case 'b':pb++;break;           case '/':pslash++;break;
	     }

	 }
	else
	 {
	       textcolor(GREEN);
		   cprintf("%c",input);
	 }
   }

  }


     int k;
		   printf("\n\n\t1. ANALYSE\t2. RETRY\t3. MAIN MENU\t4. EXIT");
		       label2:
		   printf("\n\n\tEnter Number : ");
		   scanf("%d", &k);
			 switch(k)
			   {
				  case 1:clrscr();
					   int k;
   for(k=0;k<80;k++)printf("_");
   printf("\n\t\t\t\tERRORS\n\n");
   for(k=0;k<80;k++)printf("_");
   printf("\n");
   printf(" ");if(pa<=0){textcolor(GREEN);cprintf("a");}else{printf("a");}printf(" = ");if(pa>0){textcolor(RED);cprintf("%d", pa);}else{printf("%d", pa);}printf("\t\t  ");
   printf(" ");if(pi<=0){textcolor(GREEN);cprintf("i");}else{printf("i");}printf(" = ");if(pi>0){textcolor(RED);cprintf("%d", pi);}else{printf("%d", pi);}printf("\t\t  ");
   printf(" ");if(pq<=0){textcolor(GREEN);cprintf("q");}else{printf("q");}printf(" = ");if(pq>0){textcolor(RED);cprintf("%d", pq);}else{printf("%d", pq);}printf("\t\t  ");
   printf(" ");if(py<=0){textcolor(GREEN);cprintf("y");}else{printf("y");}printf(" = ");if(py>0){textcolor(RED);cprintf("%d", py);}else{printf("%d", py);}printf("\t");printf("\n");

   printf(" ");if(pb<=0){textcolor(GREEN);cprintf("b");}else{printf("b");}printf(" = ");if(pb>0){textcolor(RED);cprintf("%d", pb);}else{printf("%d", pb);}printf("\t\t  ");
   printf(" ");if(pj<=0){textcolor(GREEN);cprintf("j");}else{printf("j");}printf(" = ");if(pj>0){textcolor(RED);cprintf("%d", pj);}else{printf("%d", pj);}printf("\t\t  ");
   printf(" ");if(pr<=0){textcolor(GREEN);cprintf("r");}else{printf("r");}printf(" = ");if(pr>0){textcolor(RED);cprintf("%d", pr);}else{printf("%d", pr);}printf("\t\t  ");
   printf(" ");if(pz<=0){textcolor(GREEN);cprintf("z");}else{printf("z");}printf(" = ");if(pz>0){textcolor(RED);cprintf("%d", pz);}else{printf("%d", pz);}printf("\t");printf("\n");

   printf(" ");if(pc<=0){textcolor(GREEN);cprintf("c");}else{printf("c");}printf(" = ");if(pc>0){textcolor(RED);cprintf("%d", pc);}else{printf("%d", pc);}printf("\t\t  ");
   printf(" ");if(pk<=0){textcolor(GREEN);cprintf("k");}else{printf("k");}printf(" = ");if(pk>0){textcolor(RED);cprintf("%d", pk);}else{printf("%d", pk);}printf("\t\t  ");
   printf(" ");if(ps<=0){textcolor(GREEN);cprintf("s");}else{printf("s");}printf(" = ");if(ps>0){textcolor(RED);cprintf("%d", ps);}else{printf("%d", ps);}printf("\t\t  ");
   printf(" ");if(psemi<=0){textcolor(GREEN);cprintf("colon");}else{printf("colon");}printf(" = ");if(psemi>0){textcolor(RED);cprintf("%d", psemi);}else{printf("%d", psemi);}printf("\t");printf("\n");

   printf(" ");if(pd<=0){textcolor(GREEN);cprintf("d");}else{printf("d");}printf(" = ");if(pd>0){textcolor(RED);cprintf("%d", pd);}else{printf("%d", pd);}printf("\t\t  ");
   printf(" ");if(pl<=0){textcolor(GREEN);cprintf("l");}else{printf("l");}printf(" = ");if(pl>0){textcolor(RED);cprintf("%d", pl);}else{printf("%d", pl);}printf("\t\t  ");
   printf(" ");if(pt<=0){textcolor(GREEN);cprintf("t");}else{printf("t");}printf(" = ");if(pt>0){textcolor(RED);cprintf("%d", pt);}else{printf("%d", pt);}printf("\t\t  ");
   printf(" ");if(pcomma<=0){textcolor(GREEN);cprintf("comma");}else{printf("comma");}printf(" = ");if(pcomma>0){textcolor(RED);cprintf("%d", pcomma);}else{printf("%d", pcomma);}printf("\t");printf("\n");

   printf(" ");if(pe<=0){textcolor(GREEN);cprintf("e");}else{printf("e");}printf(" = ");if(pe>0){textcolor(RED);cprintf("%d", pe);}else{printf("%d", pe);}printf("\t\t  ");
   printf(" ");if(pm<=0){textcolor(GREEN);cprintf("m");}else{printf("m");}printf(" = ");if(pm>0){textcolor(RED);cprintf("%d", pm);}else{printf("%d", pm);}printf("\t\t  ");
   printf(" ");if(pu<=0){textcolor(GREEN);cprintf("u");}else{printf("u");}printf(" = ");if(pu>0){textcolor(RED);cprintf("%d", pu);}else{printf("%d", pu);}printf("\t\t  ");
   printf(" ");if(pslash<=0){textcolor(GREEN);cprintf("slash");}else{printf("slash");}printf(" = ");if(pslash>0){textcolor(RED);cprintf("%d", pslash);}else{printf("%d", pslash);}printf("\t");printf("\n");

   printf(" ");if(pf<=0){textcolor(GREEN);cprintf("f");}else{printf("f");}printf(" = ");if(pf>0){textcolor(RED);cprintf("%d", pf);}else{printf("%d", pf);}printf("\t\t  ");
   printf(" ");if(pn<=0){textcolor(GREEN);cprintf("n");}else{printf("n");}printf(" = ");if(pn>0){textcolor(RED);cprintf("%d", pn);}else{printf("%d", pn);}printf("\t\t  ");
   printf(" ");if(pv<=0){textcolor(GREEN);cprintf("v");}else{printf("v");}printf(" = ");if(pv>0){textcolor(RED);cprintf("%d", pv);}else{printf("%d", pv);}printf("\t\t  ");
   printf(" ");if(pspace<=0){textcolor(GREEN);cprintf("space");}else{printf("space");}printf(" = ");if(pspace>0){textcolor(RED);cprintf("%d", pspace);}else{printf("%d", pspace);}printf("\t");printf("\n");

   printf(" ");if(pg<=0){textcolor(GREEN);cprintf("g");}else{printf("g");}printf(" = ");if(pg>0){textcolor(RED);cprintf("%d", pg);}else{printf("%d", pg);}printf("\t\t  ");
   printf(" ");if(po<=0){textcolor(GREEN);cprintf("o");}else{printf("o");}printf(" = ");if(po>0){textcolor(RED);cprintf("%d", po);}else{printf("%d", po);}printf("\t\t  ");
   printf(" ");if(pw<=0){textcolor(GREEN);cprintf("w");}else{printf("w");}printf(" = ");if(pw>0){textcolor(RED);cprintf("%d", pw);}else{printf("%d", pw);}printf("\t\t  ");
   printf(" ");if(pdot<=0){textcolor(GREEN);cprintf("dot");}else{printf("dot");}printf(" = ");if(pdot>0){textcolor(RED);cprintf("%d", pdot);}else{printf("%d", pdot);}printf("\t");printf("\n");

   printf(" ");if(ph<=0){textcolor(GREEN);cprintf("h");}else{printf("h");}printf(" = ");if(ph>0){textcolor(RED);cprintf("%d", ph);}else{printf("%d", ph);}printf("\t\t  ");
   printf(" ");if(pp<=0){textcolor(GREEN);cprintf("p");}else{printf("p");}printf(" = ");if(pp>0){textcolor(RED);cprintf("%d", pp);}else{printf("%d", pp);}printf("\t\t  ");
   printf(" ");if(px<=0){textcolor(GREEN);cprintf("x");}else{printf("x");}printf(" = ");if(px>0){textcolor(RED);cprintf("%d", px);}else{printf("%d", px);}printf("\t\t  ");printf("\n");


     printf("\n\t\t1. BACK\t\t2. MAIN MENU\t\t3. EXIT");
     label3:
     printf("\n\t\tEnter Number : ");
     scanf("%d", &k);
     switch(k)
       { case 1: para();
		 break;
	 case 3: exit_prg();
		break;
	 case 2: main();
	 default :printf("\n\t\t****ERROR****");
		   goto label3;
       }

					   break;
				  case 2:para();
					    break;
				  case 4:exit_prg();
					   break;
				  case 3:main();
				  default :printf("\n\t\t****ERROR****");
					   goto label2;
			   }


}


