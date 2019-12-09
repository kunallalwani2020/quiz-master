//MEHAR KHAN NIAZI  //KUNAL LALWANI  //HASEEB
//MUHAMMAD AZHAR
#include<stdio.h>
#include<conio.h>
#include<string.h>

void mainmenu();
void computerscience();
void science();
void physics();
void biology();      
void english();
void pakistanstudies();
void clanguage();
void javalanguage();
void cclanguage();
void scores();

void quizc();
void quizc2();
void qucc();
void qucc2();
void java();
void java2();
void phy();
void phy2();
void engl();
void engl2();
void bio2();
void kuha();


//################################################
void score_write_cc(int score, char[]);
void reset_score_cc();
void disp_record_cc();
void score_write_cc2(int score, char[]);
void reset_score_cc2();
void disp_record_cc2();
void score_write_e(int score,char[]);
void reset_score_e();
void disp_record_e();
void score_write_e2(int score,char[]);
void reset_score_e2();
void disp_record_e2();
void score_write_p(int score,char[]);
void reset_score_p();
void disp_record_p();
void score_write_j(int score,char[]);
void reset_score_j();
void disp_record_j();
void score_write_c(int score,char[]);
void reset_score_c();
void disp_record_c();
void score_write_p2(int score, char[]);
void disp_record_p2();
void reset_score_p2();
void score_write_b2(int score, char[]);
void disp_record_b2();
void reset_score_b2();
void score_write_j2(int score, char[]);
void reset_score_j2();
void disp_record_j2();
void score_write_c2(int score, char[]);
void reset_score_c2();
void disp_record_c2();

void sc_computerscience();
void sc_science();
void sc_physics();
void sc_biology();
void sc_english();
void sc_pakistanstudies();
void sc_clanguage();
void sc_javalanguage();
void sc_cclanguage();

void scores();
void cdata();
void c2data();
void jdata();
void pdata();
void edata();
void ccdata();
void cc2data();
void p2data();
void b2data();
void e2data();
void j2data();
//################################################
void allscore();
//################################################
void allreset();
//################################################
main()
{
 mainmenu();
 return 0;
}
//########################
void mainmenu()
{
 int userinp;
 clrscr();
 printf("\t\t\t--------------------------\n");
 printf("\t\t\t|WELCOME|\n");
 printf("\t\t\t--------------------------\n");
 printf("\n\t 1) COMPUTER SCIENCE");
 printf("\n\t 2) SCIENCE");
 printf("\n\t 3) ENGLISH");
 printf("\n\t 4) PAKISTAN STUDIES");
 printf("\n\t 5) SCORES");
 printf("\n\t 6) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  computerscience();
  break;

  case 2:
  science();
  break;

  case 3:
  english();
  break;

  case 4:
  pakistanstudies();
  break;

  case 5:
  scores();
  break;

  case 6:
  break;
 

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  mainmenu();
  break;
}
}
//#####################################################################
void computerscience()
{
 int userinp;
 clrscr();
 printf("\n\t|---------------------------|\n");
 printf("\n\t|WELCOME IN COMPUTER SCIENCE|\n");
 printf("\t|---------------------------|\n");
 printf("\n\t 1) C PROGRAMMING LANGUAGE");
 printf("\n\t 2) C++ PROGRAMMING LANGUAGE");
 printf("\n\t 3) JAVA PROGRAMMING LANGUAGE");
 printf("\n\t 4) BACK");
 printf("\n\t 5) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
   case 1:
   clanguage();
   break;

   case 2:
   cclanguage();
   break;
 
   case 3:
   javalanguage();
   break;

   case 4:
   mainmenu();
   break;
   
   case 5:
   break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  computerscience();
  break;
}
}
//#####################################
void science()
{
 int userinp;
 clrscr();
 printf("\n\t|------------------|\n");
 printf("\n\t|WELCOME IN SCIENCE|\n");
 printf("\t|------------------|\n");
 printf("\n\t 1) PHYSICS");
 printf("\n\t 2) BIOLOGY");
 printf("\n\t 3) BACK");
 printf("\n\t 4) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
   case 1:
   physics();
   break;

   case 2:
   biology();
   break;
 
   case 3:
   mainmenu();
   break;
   
   case 4:
   break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  science();
  break;
}
}
//#####################################
void physics()
{
 int userinp;
 clrscr();
 printf("\n\t|--------------------------|\n");
 printf("\n\t|WELCOME IN PHYSICS SECTION|\n");
 printf("\t|--------------------------|\n");
 printf("\n\t 1) PHYSICS QUIZ 1");
 printf("\n\t 2) PHYSICS QUIZ 2");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  phy();
  break;

  case 2:
  phy2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  science();
  break;

  case 5:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  physics();
  break;

 }
 }

//#####################################
 void biology()
 {
 int userinp;
 clrscr();
 printf("\n\t|--------------------------|\n");
 printf("\n\t|WELCOME IN BIOLOGY SECTION|\n");
 printf("\t|--------------------------|\n");
 printf("\n\t 1) BIOLOGY QUIZ 1");
 printf("\n\t 2) BIOLOGY QUIZ 2");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  /////////////////////////################# ADD BIOLOGY 1 FUNCTION################
  break;

  case 2:
  bio2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  science();
  break;

  case 5:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  biology();
  break;

 }
 }
//#####################################
void english()
{
 int userinp;
 clrscr();
 printf("\n\t|--------------------------|\n");
 printf("\n\t|WELCOME IN ENGLISH SECTION|\n");
 printf("\t|--------------------------|\n");
 printf("\n\t 1) ENGLISH QUIZ 1");
 printf("\n\t 2) ENGLISH QUIZ 2");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  engl();
  break;

  case 2:
  engl2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  english();
  break;

 }
 }
//#####################################
void pakistanstudies()
{
 int userinp;
 clrscr();
 printf("\n\t|-----------------------------------|\n");
 printf("\n\t|WELCOME IN PAKISTAN STUDIES SECTION|\n");
 printf("\t|-----------------------------------|\n");
 printf("\n\t 1) PAKISTAN STUDIES QUIZ 1");
 printf("\n\t 2) PAKISTAN STUDIES QUIZ 2");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  /////////############### ADD PAKISTAN STUDIES FUNCTION 1 ###########################
  break;

  case 2:
  /////////############### ADD PAKISTAN STUDIES FUNCTION 2 ###########################
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  pakistanstudies();
  break;

 }
 }
//#####################################

void clanguage() //DONE PROTOTYPE ?
{
 int userinp;
 clrscr();
 printf("\n\t|---------------------------------|\n");
 printf("\n\t|WELCOME IN C PROGRAMMING LANGUAGE|\n");
 printf("\t|---------------------------------|\n");
 printf("\n\t 1) C QUIZ 1");
 printf("\n\t 2) C QUIZ 2");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  quizc();
  break;

  case 2:
  quizc2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  computerscience();
  break;

  case 5:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  clanguage();
  break;

 }
 }

//#####################################
void javalanguage() //DONE PROTOTYPE ?
{
 int userinp;
 clrscr();
 printf("\n\t|------------------------------------|\n");
 printf("\n\t|WELCOME IN JAVA PROGRAMMING LANGUAGE|\n");
 printf("\t|------------------------------------|\n");
 printf("\n\t 1) JAVA QUIZ 1");
 printf("\n\t 2) JAVA QUIZ 2");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  java();
  break;

  case 2:
  java2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  computerscience();
  break;

  case 5:
  break;

   default:
   printf("\n\t|------------|\n");
   printf("\n\tWRONGE INPUT\n");
   printf("\t|------------|\n");
   javalanguage();
   break;

 }
 }
//#####################################
void cclanguage() //DONE PROTOTYPE ?
{
 int userinp;
 clrscr();
 printf("\n\t|-----------------------------------|\n");
 printf("\n\t|WELCOME IN C++ PROGRAMMING LANGUAGE|\n");
 printf("\t|-----------------------------------|\n");
 printf("\n\t 1) C++ QUIZ 1");
 printf("\n\t 2) C++ QUIZ 2");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  qucc();
  break;

  case 2:
  qucc2();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  computerscience();
  break;

  case 5:
  break;

   default:
   printf("\n\t|------------|\n");
   printf("\n\tWRONGE INPUT\n");
   printf("\t|------------|\n");
   cclanguage();
   break;

 }
 }
//##################################### ????????????????????????
 void scores()
 {
 int userinp;
 clrscr();
 printf("\n\t|----------------------------|\n");
 printf("\t\t\t| WELCOME IN SCORE SECTION |\n");
 printf("\t|----------------------------|\n");
 printf("\n\t 1) COMPUTER SCIENCE");
 printf("\n\t 2) SCIENCE");
 printf("\n\t 3) ENGLISH");
 printf("\n\t 4) PAKISTAN STUDIES");
 printf("\n\t 5) ALL CATEGORIRS HIGHEST SCORES");
 printf("\n\t 6) RESET ALL CATEGORIRS HIGHEST SCORES");
 printf("\n\t 7) BACK");
 printf("\n\t 8) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  sc_computerscience();
  break;

  case 2:
  sc_science();
  break;

  case 3:
  sc_english();
  break;

  case 4:
  sc_pakistanstudies();
  break;

  case 5:
  allscore();
  break;

  case 6:
  allreset();
  break;


  case 7:
  mainmenu();
  break;

  case 8:
  break;
 

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  scores();
  break;
}
}
//#####################################################################
void sc_computerscience()
{
 int userinp;
 clrscr();
 printf("\n\t|-------------------------------------------|\n");
 printf("\n\t| WELCOME IN COMPUTER SCIENCE SCORE SECTION |\n");
 printf("\t|-------------------------------------------|\n");
 printf("\n\t 1) C PROGRAMMING LANGUAGE");
 printf("\n\t 2) C++ PROGRAMMING LANGUAGE");
 printf("\n\t 3) JAVA PROGRAMMING LANGUAGE");
 printf("\n\t 4) BACK");
 printf("\n\t 5) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
   case 1:
   sc_clanguage();
   break;

   case 2:
   sc_cclanguage();
   break;
 
   case 3:
   sc_javalanguage();
   break;

   case 4:
   scores();
   break;
   
   case 5:
   break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_computerscience();
  break;
}
}
//#####################################
void sc_science()
{
 int userinp;
 clrscr();
 printf("\n\t|----------------------------------|\n");
 printf("\n\t| WELCOME IN SCIENCE SCORE SECTION |\n");
 printf("\t|----------------------------------|\n");
 printf("\n\t 1) PHYSICS");
 printf("\n\t 2) BIOLOGY");
 printf("\n\t 3) BACK");
 printf("\n\t 4) Exit");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
   case 1:
   sc_physics();
   break;

   case 2:
   sc_biology();
   break;
 
   case 3:
   scores();
   break;
   
   case 4:
   break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_science();
  break;
}
}
//#####################################
void sc_physics()
{
 int userinp;
 clrscr();
 printf("\n\t|------------------------------------------|\n");
 printf("\n\t| WELCOME IN PHYSICS SECTION SCORE SECTION |\n");
 printf("\t|------------------------------------------|\n");
 printf("\n\t 1) PHYSICS QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) PHYSICS QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  pdata();
  break;

  case 2:
  p2data();
  break;
 
  case 3:
  sc_science();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_physics();
  break;

 }
 }

//#####################################
void sc_biology()  //########################### need work ###############
{
 int userinp;
 clrscr();
 printf("\n\t|------------------------------------------|\n");
 printf("\n\t| WELCOME IN BIOLOGY SECTION SCORE SECTION |\n");
 printf("\t|------------------------------------------|\n");
 printf("\n\t 1) BIOLOGY QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) BIOLOGY QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  /////////////////////////################# ADD BIOLOGY 1  b1data ################
  break;

  case 2:
  b2data();
  break;
 
  case 3:
  sc_science();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_biology();
  break;

 }
 }
//#####################################
void sc_english() //.............................................
{
 int userinp;
 clrscr();
 printf("\n\t|------------------------------------------|\n");
 printf("\n\t| WELCOME IN ENGLISH SECTION SCORE SECTION |\n");
 printf("\t|------------------------------------------|\n");
 printf("\n\t 1) ENGLISH QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) ENGLISH QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  edata();
  break;

  case 2:
  e2data();
  break;
 
  case 3:
  scores();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_english();
  break;

 }
 }
//#####################################
void sc_pakistanstudies()          // ############ need work
{
 int userinp;
 clrscr();
 printf("\n\t|---------------------------------------------------|\n");
 printf("\n\t| WELCOME IN PAKISTAN STUDIES SECTION SCORE SECTION |\n");
 printf("\t|---------------------------------------------------|\n");
 printf("\n\t 1) PAKISTAN STUDIES QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) PAKISTAN STUDIES QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) BACK");
 printf("\n\t 4) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  /////////############### ADD PAKISTAN STUDIES pdata 1 ###########################
  break;

  case 2:
  /////////############### ADD PAKISTAN STUDIES pdata  2 ###########################
  break;
 
  case 3:
  scores();
  break;

  case 4:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_pakistanstudies();
  break;

 }
 }
//#####################################

void sc_clanguage() //DONE PROTOTYPE ? ...........................................
{
 int userinp;
 clrscr();
 printf("\n\t|-------------------------------------------------|\n");
 printf("\n\t| WELCOME IN C PROGRAMMING LANGUAGE SCORE SECTION |\n");
 printf("\t|-------------------------------------------------|\n");
 printf("\n\t 1) C QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) C QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  cdata();
  break;

  case 2:
  c2data();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  sc_computerscience();
  break;

  case 5:
  break;

  default:
  printf("\n\t|------------|\n");
  printf("\n\t|WRONGE INPUT|\n");
  printf("\t|------------|\n");
  sc_clanguage();
  break;

 }
 }

//#####################################
void sc_javalanguage() //DONE PROTOTYPE ? ...............................
{
 int userinp;
 clrscr();
 printf("\n\t|----------------------------------------------------|\n");
 printf("\n\t| WELCOME IN JAVA PROGRAMMING LANGUAGE SCORE SECTION |\n");
 printf("\t|----------------------------------------------------|\n");
 printf("\n\t 1) JAVA QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) JAVA QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  jdata();
  break;

  case 2:
  j2data();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  sc_computerscience();
  break;

  case 5:
  break;

   default:
   printf("\n\t|------------|\n");
   printf("\n\tWRONGE INPUT\n");
   printf("\t|------------|\n");
   sc_javalanguage();
   break;

 }
 }
//#####################################
void sc_cclanguage() //DONE PROTOTYPE ? ..................................
{
 int userinp;
 clrscr();
 printf("\n\t|---------------------------------------------------|\n");
 printf("\n\t| WELCOME IN C++ PROGRAMMING LANGUAGE SCORE SECTION |\n");
 printf("\t|---------------------------------------------------|\n");
 printf("\n\t 1) C++ QUIZ 1 HIGHEST MARKS");
 printf("\n\t 2) C++ QUIZ 2 HIGHEST MARKS");
 printf("\n\t 3) MAIN MANU");
 printf("\n\t 4) BACK");
 printf("\n\t 5) EXIT");
 printf("\n\n\tENTER: ");
 scanf("%d",&userinp);
 clrscr();
 switch(userinp)
 {
  case 1:
  ccdata();
  break;

  case 2:
  cc2data();
  break;
 
  case 3:
  mainmenu();
  break;

  case 4:
  sc_computerscience();
  break;

  case 5:
  break;

   default:
   printf("\n\t|------------|\n");
   printf("\n\tWRONGE INPUT\n");
   printf("\t|------------|\n");
   sc_cclanguage();
   break;

 }
 }
//###############################################
//#####################################
//#####################################
//######################## start c,java,physics,...,etc.
void quizc(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThere are ______ loops in C.");
		printf("\n\n\t1. 2\n\t2. 3\n\t3. 4\n\t4. 5");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"3\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nC Language has been developed by __________________.");
		printf("\n\n\t1. Martin Richards\n\t2. Bijarne Stroustrup\n\t3. Dennis Ritche\n\t4.KenThompson");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Dennis Ritche\".");
			getch();
			clrscr();
		}
		break;

		case 2:
               
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nPointer holds _________________.");
		printf("\n\n\t1. Value of variable\n\t2. Address of variable\n\t3. Both\n\t4. Ken Always Null");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Address of Variable\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nTo accept 100 different values into the array we require ___________.");
		printf("\n\n\t1. loop\n\t2. if condition\n\t3. function\n\t4. structure");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"loop\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                quizc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following is allowed in a C Arithmatic Instruction?");
		printf("\n\n\t1. [ ]\n\t2. { }\n\t3. ( )\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"( )\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nIs it possible to run program without main() function?");
		printf("\n\n\t1. Yes\n\t2. No\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"No\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many main() function we can have in our project?");
		printf("\n\n\t1. 1\n\t2. 2\n\t3. No Limit\n\t4. Depends on compiler");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"1\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1: 
                quizc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;;
                }
                }
		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nIs it true that a function may have several declaration, but only one definition.");
		printf("\n\n\t1. True\n\t2. False\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"1\".");
			getch();
			clrscr();
		}
		break;
		
		case 8:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich programming language is more faster among these?");
		printf("\n\n\t1. Java\n\t2. PHP\n\t3. C\n\t4. Visual Basic");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"C\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following is executed by Preprocess?");
		printf("\n\n\t1. #include<stdio.h>\n\t2. return 0\n\t3. void main(int argc , char ** argv)\n\t4. None of above");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"#include<stdio.h>\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                quizc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_c(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
                default:
                break;
		}
		}
}

void qucc(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nWhat is the another name of language C++ ?\n");
		printf("\n\n\t1. PHP\n\t2. JAVA\n\t3. OOPS\n\t4. C");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"OOPS\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nC What is data hinding ?\n");
		printf("\n\n\t1. It is related with hinding internal\n\tobjects details\n\t2. It is related with showing\n\tinternal object detail\n\t3. It is relate with data types\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"It is related with hinding internal\n\tobjects details\".");
			getch();
			clrscr();
		}
		break;

		case 2:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nwhat is class in C++?");
		printf("\n\n\t1. when you define a class, \n\t you define a blue print for a data type\n\t2. When you define a class,\n\t you make get more functionatially\n\t3. When you define a class\n\t you define the logic\n\t4. when you define a class\n\t you make debugging");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"when you define a class, \n\t\t you define a blue print for a data type\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is object in C++?");
		printf("\n\n\t1. Object is part of syntex of \n\ta class.\n\t2. Object is datatype of a class\\n\t3. Object is an instance of a class\n\t4. Object is function of a class");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Object is an instance of a class\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }

		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is purpose of abstract class ?\n");
		printf("\n\n\t1. to provide help with database connectivily\n\t2. to provide help with data input to other classes\n\t3. to provide security to other classes\n\t4. to provide an appropriate base\n\tclass from which other classes \n\t can inherit");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"To provide an appropriate base\n\tclass from which other classes \n\t can inherit\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nClasses that can be used\n\t to instantate objects are called\n\tconcrete classes.");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"True\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is default visibility mode\n\tfor members of classes\n\tin C++?\n");
		printf("\n\n\t1. Private\n\t2. Public\n\t3. Protected\n\t4. Depends");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Private\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }

		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich is more memory efficient?");
		printf("\n\n\t1. Structure\n\t2. Union\n\t3. Both \n\t4. Depend on programmer");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Union\".");
			getch();
			clrscr();
		}
		break;

		case 8:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhichg among following is not a valid\nvisbility mode in C++ program?");
		printf("\n\n\t1. private\n\t2. Public\n\t3. Protected\n\t4. Limited");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Limited\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nEven if we deifnes a function\nin a class, then also we\n need to declare it first");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"False\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_cc(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
void java(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nHow many types of java language\n");
		printf("\n\n\t1. 2\n\t2. 3\n\t3. 4\n\t4. 5");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"2\".");
			getch();
			clrscr();
		}
		break;

		case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n________Makes java Platform independant.\n");
		printf("\n\n\t1. JVM\n\t2. java syntax\n\t3. Java API\n\t4. Bytecoddes");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Bytecoddes\".");
			getch();
			clrscr();
		}
		break;

		case 2:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nJava's kyword includes NULL");
		printf("\n\n\t1. True\n\t2.False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"False\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nwhich ocuupies more number\n of bits of memory.");
		printf("\n\n\t1. double\n\t2. long\n\t3. both\n\t4. occupies same");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"both\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }

		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe object is created with new keyword \n");
		printf("\n\n\t1. at compile time\n\t2. at run time\n\t3. depends on the code\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"at run time\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nint x=0,y=0,z=0,\nx=(++x+y--)*z++;\n What is the value of x after exexcution?\n 1)  2) False");
		printf("\n\n\t1. -2\n\t2. -1\n\t3. 0\n\t3. 1");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"0\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nint 4th house=1234;\n\tsystem.out.println(4th house);\n");
		printf("\n\n\t1. 1234\n\t2. Display error as the value assigned\n\tis more then the range of integer\n\t3. displays error as coding is not\n\tas per java rules\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"displays error as coding is not\n\tas per java rules\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }

		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich is more memory efficient?");
		printf("\n\n\t1. Structure\n\t2. Union\n\t3. Both \n\t4. Depend on programmer");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Union\".");
			getch();
			clrscr();
		}
		break;

		case 8:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many primitive data types java defines?");
		printf("\n\n\t1. 6\n\t2. 8\n\t3. 10\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"8\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nFinal methods cannot be overhidden\n\t but over loaded?");
		printf("\n\n\t1. True\n\t2. False");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"True\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                mainmenu();
		break;
		default:
                break;
		}
		}
	}
 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_j(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                java();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
 void phy(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
	        printf("|--------------|");
                printf("\nThe SI unit of Heat is________?\n");
                printf("\n\n\t1)Watt. \n\t2) volt. \n\t3)joule \n\t4)None\n");
                printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"joule\".");
			getch();
			clrscr();
		}
		break;
case 1:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe branch of science which deals with the properties of matter and energy is called__________?\n");
		printf("\n\n\t1. Biology\n\t2. Geography\n\t3. Physics\n\t4. chemistry\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"physcis\".");
			getch();
			clrscr();
		}
		break;
case 2:
               
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nPhysics is one of the branches of___________?");
		printf("\n\n\t1. Physical science\n\t2. social science\n\t3. Biological science\n\t4. life science\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"physical science\".");
			getch();
			clrscr();
		}
		break;
case 3:           
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nlinear expansion occurs in_________?");
		printf("\n\n\t1. solid\n\t2.liquid\n\t3. gas\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"solid\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhen body is in motion, ____________ always changes?");
		printf("\n\n\t1.its velocity\n\t2.its acceleration\n\t3.its momentum\n\t4. its position vector\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"its position vector\".");
			getch();
			clrscr();
		}
		break;
case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nArea under velocity time graph represent_____________________?");
		printf("\n\n\t1force\n\t2.displacement\n\t3.distance\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"displacement\".");
			getch();
			clrscr();
		}
		break;
case 6:
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n1st law of motion gives the definition of _________________________?");
		printf("\n\n\t1 rest\n\t2.motion\n\t3.force\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"force\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nTime rate of change of momentum is equal to____________________?");
		printf("\n\n\t1force\n\t2.impulse\n\t3.torque\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"force\".");
			getch();
			clrscr();
		}
		break;
case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe trajectory (or path) of a projectile is_________________?");
		printf("\n\n\t1parabola\n\t2.hyberbola\n\t3.ellipse\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"parabola\".");
			getch();
			clrscr();
		}
		break;
case 9:
		if(count>=1)
                {
                count=0;
                printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWaves transmit ________________ from one place to another?");
		printf("\n\n\t1energy\n\t2.mass\n\t3.weight\n\t4. none\n");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"energy\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                phy();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
        }

}
}
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_p(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                qucc();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                case 3: break;
                default:
                break;
                }
                }
}
void engl(void)
{
 int userquiz,i,m,w,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\nAntonym of FALLACIOUS is _____?\n");
		printf("\n\n\t1. credit\n\t2. Truthful\n\t3. Dishonest\n\t4. Clean");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Truthful\".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nCantonym of FOREMOST is _____?\n");
		printf("\n\n\t1.Disposed\n\t\n\t2. Mature\n\t\n\t3. Unimportant\n\t4. hindmost");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Unimportant");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of QUIESCENT");
		printf("\n\n\t1. Fallow\n\t2. DEactivated\n\t3. Aslpeep\n\t4. Active");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Active\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of PHILISTINE?");
		printf("\n\n\t1. Uncultured\n\t2.Smutty\\n\t3. Uncultured\n\t4. Cultured");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Cultured\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of NIGGARDLY is _____?\n");
		printf("\n\n\t1.CLoseFriend\n\t2. Skimpy\n\t3. Chintzy\n\t4. Generous");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Generous.");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of GARBLED is _____?");
		printf("\n\n\t1. Unscramble\n\t2.Obscure");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Unscramble\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of SENILE is _____?\n");
		printf("\n\n\t1. Alert\n\t2. Ancient\n\t3.Doting\n\t4. Anile");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Alert\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of INORDINATE is _____?");
		printf("\n\n\t1. Moderate\n\t2. Wasteful\n\t3. Wanton \n\t4. dizzying");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Moderate\".");
			getch();
			clrscr();
		}
		break;

		case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of LUCID is _____?");
		printf("\n\n\t1.Obvious\n\t2.Vague\n\t3. Evident\n\t4. Explicit");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Vague\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAntonym of INGEST is _____?");
		printf("\n\n\t1. Disgorge\n\t2. Devour");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Disgorge\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		engl();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
                break;
		}
		}
	}

}
}
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_e(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		engl();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
                default:
                break;
		}
		}
}
//#######################################################################
void qucc2(void)
{
  int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
  char ch[10],playernm[20];
  printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
  printf("\n\n\tThere are 10 Questions. How many you want to play?");
  printf("\n\tEnter here please: ");
  scanf("%d",&userquiz);
  clrscr();
  printf("\n\n\n\t\t\tResister your name:");
  scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n For what values of the expression is an if-statement block not executed?");
		printf("\n\n\t1. 0 and all negative value\n\t2. 0 and -1\n\t3. 0\n\t4. 0, all negative values, all positive values");
		printf("\n\nEnter: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"0\".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <iostream>\n using namespace std; \n int f(int p, int q) {if (p > q)\n return p;\n else \n return q; }\n main() { \n int a = 5, b = 10;int k; \n bool x = true; \n bool y = f(a, b); \n k =((a * b) + (x + y));c");
		printf("\n\n\t1. 55\n\t2.62\n\t3. 52\n\t4. 75");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"52\".");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <iostream> using namespace std;\n int main() {int p;\n bool a = true;\n bool b = false;\n int x = 10;\n int y = 5;\n p = ((x | y) + (a + b));\n cout << p; return 0; }");
		printf("\n\n\t1.0\n\t2. 16\n\t3. 12\n\t4. 2");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"16\".");
			getch();
			clrscr();
		}
		break;

		case 3:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n Which of the following correctly declares an array?");
		printf("\n\n\t1. int array[10];\n\t2. int array\n\t3. array[10];\n\t4. array array[10];");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"int array[10];\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}

		case 4:

                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhat is the index number of the last element of an array with 9 elements?");
		printf("\n\n\t1. 9\n\t2. 8\n\t3. 0\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"8\".");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h>\n #include<iostream>\n using namespace std; \n int array1[] = {1200, 200, 2300, 1230, 1543}; \n int array2[] = {12, 14, 16, 18, 20}; \n int temp, result = 0;\n int main() { \n for (temp = 0; temp < 5; temp++) { \n result += array1[temp]; } \n for (temp = 0; temp < 4; temp++) { \n result += array2[temp];} \n cout << result;return 0; }");
		printf("\n\n\t1. 6553\n\t2. 6533\n\t3. 6522");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"6533\".");
			getch();
			clrscr();
		}
		break;

		case 6:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h>\n #include<iostream>\n using namespace std;\n int main () { \n int array[] = {0, 2, 4, 6, 7, 5, 3}; \n int n, result = 0; \n for (n = 0; n < 8; n++) { \n  result += array[n]; } \n cout << result;\n return 0; }");
		printf("\n\n\t1. 25\n\t2. 26\n\t3. 27\n\t4. 21");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"27\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}

		case 7:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <stdio.h>\n #include<iostream> \n using namespace std;\n int main() { \n int a = 5, b = 10, c = 15; \n int arr[3] = {&a, &b, &c}; \n cout << *arr[*arr[1] - 8]; \n return 0; }");
		printf("\n\n\t1. 15\n\t2. 18\n\t3. Compile time  error ");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Compile time error\".");
			getch();
			clrscr();
		}
		break;

		case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nHow many characters are specified in the ASCII scheme?");
		printf("\n\n\t1. 64\n\t2. 128\n\t3.256\n\t4.24");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"128\".");
			getch();
			clrscr();
		}
		break;

		case 9:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n What will be the output of the following C++ code?  \n #include <iostream> \n using namespace std; \n int main() { \n char c = 74; \n cout << c; \n return 0; }");
		printf("\n\n\t1. A\n\t2. N\n\t3. J\n\t4.I");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"J\".");
			getch();
			clrscr();
		}
		break;
		 }
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_cc2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		qucc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
                default:
                break;
		}
		}
}
////////////////############################################
void phy2(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
  clrscr();
  printf("\n\n\n\t\t\tResister your name:");
  scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe co efficient of linear expansion is equal to__________?");
		printf("\n\n\t1. ΔL = αLΔT\n\t2. ΔL/LΔT\n\t3. LΔT/ΔL\n\t4.  αLΔT-ΔL");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"ΔL = αLΔT\".");
			getch();
			clrscr();
		}
		break;

		case 1:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe unit of coefficient of linear expansion or volume expansion is__________?");
		printf("\n\n\t1. K\n\t2. K-1\n\t3. K-2\n\t4.None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"K-1\".");
			getch();
			clrscr();
		}
		break;

		case 2:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nInertia of an object is quantitative measure of its__________________?");
		printf("\n\n\t1. Volume\n\t2. Density\n\t3. Mass\n\t4. Temperature");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Mass\".");
			getch();
			clrscr();
		}
		break;

		case 3:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe dimension of force is____________________?");
		printf("\n\n\t1. MLT-2\n\t2. ML2T-2\n\t3. ML2T2\n\t4. ML-2T-2");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"MLT-2\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		phy2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}
		}
		case 4:
		if(atg==0)
		break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhen car takes turn around a curve road, the passengers feel a force acting on them in a direction away from the center of the curve. It is due to__________________?");
		printf("\n\n\t1. Centripetal force\n\t2. Gravitational force\n\t3. Their Inertia\n\t4. Centrifugal force");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Centrifugal force\".");
			getch();
			clrscr();
		}
		break;

		case 5:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nDistance covered by a freely falling body in 2 seconds will be__________________?");
		printf("\n\n\t1. 4.9m\n\t2. 19.6m\n\t3. 44.1m");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"19.6m\".");
			getch();
			clrscr();
		}
		break;

		case 6:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nAt which angle the range of the projectile is maximum____________________?");
		printf("\n\n\t1. 45\n\t2. 60\n\t3. 30 \n\t4. none");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"45\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		phy2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}
		case 7:
		if(atg==0)
		break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nMotorcycle safety helmet extends the time of collision hence decreasing the________________?");
		printf("\n\n\t1. force acting\n\t2. velocity\n\t3. Impulse");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Impulse\".");
			getch();
			clrscr();
		}
		break;
		case 8:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nA body is falling freely under gravity. How much distance it falls during an interval of time between 1st and 2nd seconds of its motion, taking g=10 ?");
		printf("\n\n\t1. 14m\n\t2. 20m\n\t3. 5m\n\t4. 25m");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"14m\".");
			getch();
			clrscr();
		}
		break;

		case 9:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe trajectory (or path) of a projectile is_________________?");
		printf("\n\n\t1.Straight line\n\t2. Parabola\n\t3. Hyperbola\n\t4. None of above");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Parabola\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		phy2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_p2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		phy2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
		default:
		break;
		}
		}
}

////////////////######################################################

void bio2(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];                                 
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for(i=0;i<userquiz;i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich is not a vertebrate ?");
		printf("\n\n\t1. Reptiles\n\t2. Fish\n\t3. Insect\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Insect\".");
			getch();
			clrscr();
		}
		break;

		case 1:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following is the less important organ in human body?");
		printf("\n\n\t1. Hair\n\t2. Appendix\n\t3. Hip Bone\n\t4.Navel");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Appendix\".");
			getch();
			clrscr();
		}
		break;

		case 2:
               
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWho is the father of Genetics?");
		printf("\n\n\t1. Robert Hook\n\t2. Robert Brown\n\t3.Gregor Mendal\n\t4. All of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Gregol Mendel\".");
			getch();
			clrscr();
		}
		break;

		case 3:
                if(count>=1)
                {
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nwhich of the following hepatitis is more contagious ?");
		printf("\n\n\t1. HDV\n\t2. HCV\n\t3. HBV\n\t4. HAV");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"HCV\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
		clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                bio2();
	        clrscr();
	        break;
                case 2:
		mainmenu();
                break;
                default:
		break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe vascular plants are termed as____________?");
		printf("\n\n\t1. Pteridophytes\n\t2. Bryophytes\n\t3. Tracheophytes\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Tracheophytes\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nTobacco mosaic virus was crystallized by__________?");
		printf("\n\n\t1. Stanely\n\t2. Pasteur\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Stanely\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nFlagella are composed of");
		printf("\n\n\t1. Micro tubules\n\t2. Micro filamets\n\t3. Intermediate filaments\n\t4.None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Micro tubules\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
		clrscr();
                switch(w)
                {
		case 1:
                bio2();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;;
                }
		}
		case 7:
                if(atg==0)
		break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe simplest amino acid is_________?");
		printf("\n\n\t1. Alanine\n\t2. Glycine\n\t3. I don't know");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Glycine\".");
			getch();
			clrscr();
		}
		break;
		case 8:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSnails belong to_________?");
		printf("\n\n\t1. Gastropods\n\t2. Bivalves\n\t3. Arthopods\n\t4. Platyhelminthes");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Arthopods\".");
			getch();
			clrscr();
		}
		break;

		case 9:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nGram +ve bacteria on treatment with crystal violet dye give _________colour?");
		printf("\n\n\t1. Red\n\t2. Green\n\t3. Purple\n\t4. None of above");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score= score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Purple\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		bio2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_b2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		bio2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
		default:
		break;
		}
		}
}
//####################################
void engl2(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of ARROGANT is _____________?");
		printf("\n\n\t1. Conceited\n\t2. Humble\n\t3. Progressive\n\t4. Noble");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Conceited\".");
			getch();
			clrscr();
		}
		break;

		case 1:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of ALERT is _____________?");
		printf("\n\n\t1. Intelligent\n\t2. Energetics\n\t3.Observant\n\t4.Watchfull");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Watchfull\".");
			getch();
			clrscr();
		}
		break;

		case 2:

		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of Doleful is__________?");
		printf("\n\n\t1. Sad\n\t2. Happy\n\t3. Famous\n\t4. Enemy");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Sad\".");
			getch();
			clrscr();
		}
		break;

		case 3:
		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of Facile is _____________?");
		printf("\n\n\t1. Cheerful\n\t2. Clean\n\t3. Easy\n\t4. Humorous");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] ==3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Easy\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl2();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
                }
		case 4:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nThe Synonym of Abreast is________?");
		printf("\n\n\t1. smart\n\t2. Informed\n\t3. Opposite\n\t4. None of these");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Informed\".");
			getch();
			clrscr();
		}
		break;

		case 5:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of INFRINGE is__________?");
		printf("\n\n\t1. Breach\n\t2. Hard\n\t3. Bound");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Breach\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of Mull is __________ ?");
		printf("\n\n\t1. Help\n\t2. Discourage\n\t3. Think\n\t4. Provoke");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Think\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1: 
                engl2();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;;
                }
                }
		case 7:
                if(atg==0)
                break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of “GAINSAY” is _____________?");
		printf("\n\n\t1. Suppress\n\t2. Oppose\n\t3. Animation");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Oppose\".");
			getch();
			clrscr();
		}
		break;
		case 8:
                
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of backbone is _____________?");
		printf("\n\n\t1. Front bone\n\t2. Spine\n\t3. Back\n\t4. b&C both");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"B&C Both\".");
			getch();
			clrscr();
		}
		break;

		case 9:
                if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nSynonym of ” Plunder ” is _____________?");
		printf("\n\n\t1. Loot\n\t2. Blush\n\t3. Ease\n\t4. None of above");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Loot\".");
			getch();
			clrscr();
		}
		break;
                }
                else
                {
                clrscr();
                atg=0;
                printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
                printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
                scanf("%d",&w);
                clrscr();
                switch(w)
                {
                case 1:
                engl2();
	        clrscr();
	        break;
                case 2:
                mainmenu();
                break;
                default:
                break;
                }
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_e2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		engl2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
                default:
                break;
		}
		}
}

//#################################### 
void java2(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\t\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhat is the order of variables in Enum?");
		printf("\n\t\n\t1. Acending order\n\t2. Decending order\n\t3. Random order\n\t4. Depend on the order");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"Acending order \".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tC  What will be the output of the following Java code? \n\tenum Season { \n\tWINTER, SPRING, SUMMER, FALL }; \n\tSystem.out.println(Season.WINTER.ordinal());");
		printf("\n\t\n\t1. 0\n\t2.1\n\t3. 2\n\t4.3");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"0\".");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhich class does all the Enums extend?");
		printf("\n\t\n\t1. Object\n\t2. Enums\n\t3. Enum\n\t4. Enum class");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"Enum\".");
			getch();
			clrscr();
		}
		break;

		case 3:
		if(count>=1)
		{
		count=0;

		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\t Which of these are selection statements in Java?");
		printf("\n\t\n\t1. if()\n\t2. for()\n\t3. continue\n\t4. break");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"if()\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\t\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		java2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}
		}
		case 4:
  		if(atg==0)
		break;
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhat will be the output of the following Java program? \n\tclass comma_operator\n\t{ public static void main(String args[])\n\t int sum = 0;  \n\t for (int i = 0, j = 0; i < 5 & j < 5; ++i, j = i + 1)\n\t sum += i; \n\t System.out.println(sum);}");
		printf("\n\t\n\t1. 5\n\t2. 6\n\t3. 14\n\t4. compilation error");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"6\".");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\t Which of these is returned by “greater than”, “less than” and “equal to” operators?");
		printf("\n\t\n\t1. integers\n\t2. floating-point numbers\n\t3. Boolean");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"Boolean\".");
			getch();
			clrscr();
		}
		break;

		case 6:
                if(count>=1)
                {
                count=0;
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhich of these operators can skip evaluating right hand operand?");
		printf("\n\t\n\t1. !\n\t2. |\n\t3. &\n\t4. &&");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"&&\".");
			getch();
			clrscr();
		}
		break;

		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\t\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		java2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}

		case 7:
		if(atg==0)
		break;
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhat will be the output of the following Java code? \n\t class Relational_operator { \n\t public static void main(String args[]) \n\t{ int var1 = 5;\n\t int var2 = 6; \n\t System.out.print(var1 > var2);} }");
		printf("\n\t\n\t1. 1\n\t2. 0\n\t3.false");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 3)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"false\".");
			getch();
			clrscr();
		}
		break;

		case 8:
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhat will be the output of the following Java code? \n\t class bool_operator{ \n\t public static void main(String args[]){\n\t boolean a = true;\n\t boolean b = !true;\n\t boolean c = a | b; \n\t boolean d = a & b; \n\t boolean e = d ? b : c; \n\t System.out.println(d + " " + e);} }");
		printf("\n\t\n\t1. false false\n\t2. true true\n\t3. true false\n\t4. false true");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"false true\".");
			getch();
			clrscr();
		}
		break;

		case 9:
 		if(count>=1)
		{
		count=0;
		printf("\n\t|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\t\n\tWhat will be the output of the following Java program? \n\t class box { \n\t int width; \n\t int height; \n\t int length; } \n\t class mainclass { \n\t public static void main(String args[]) { \n\t box obj = new box(); \n\t obj.width = 10; \n\t obj.height = 2; \n\t obj.length = 10; \n\t int y = obj.width * obj.height * obj.length; \n\t System.out.print(y); }");
		printf("\n\t\n\t1. 12\n\t2.200\n\t3. 400\n\t4. 100");
		printf("\n\t\n\tEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\n\tAnswer Not Correct.");
			printf("\n\tCorrect Answer is \"200\".");
			getch();
			clrscr();
		}
		break;

		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\t\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		java2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		}

	}

    }
}
}
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n\t|-------------------------------------------------|");
printf("\n\t\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n\t|-------------------------------------------------|");
score_write_j2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n\t");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		java2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
		default:
		break;
		}
		}
}
//###############################################################
void quizc2(void)
{
 int userquiz,i,w,m,atg=1,score=0,count=0,c[10];
 char ch[10],playernm[20];
 printf("\t\t\t|------------\n\t\t\t\tQuiz\n\t\t\t\t------------|");
 printf("\n\n\tThere are 10 Questions. How many you want to play?");
 printf("\n\tEnter here please: ");
 scanf("%d",&userquiz);
 clrscr();
 printf("\n\n\n\t\t\tRegister your name:");
 scanf("%s",playernm);

 for( i=0; i<userquiz; i++)
 {
  if(atg==0)
  break;
  else
      {
	switch(i)
	{
		case 0:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include<conio.h> \n #include<stdio.h> \n void m();  { \n  printf(\"hi\");  \n } \n void main() \n { \n m();return 0; \n }\n");
		printf("\n\n\t1. hi\n\t2. Run time error\n\t3. Nothing\n\t4. Varies");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"hi\".");
			getch();
			clrscr();
		}
		break;

		case 1:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n   #include<stdio.h> \n void foo(); \n int main() \n { \n  void foo(int); \n  foo(1); \n  return 0; \n  } \n void foo(int i) \n { \n printf(\"2\"); \n }\n");
		printf("\n\n\t1. 2\n\t2. Compile time error\n\3.Depends on the compiler\n\t4. Depends on the standard");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"2\".");
			getch();
			clrscr();
		}
		break;

		case 2:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n  #include <stdio.h> \n int main() \n { \n	int a = 1, b = 1, c; \n	c = a++ + b; \n	printf( \"%d, %d\", a, b); \n }");
		printf("\n\n\t1.  a = 1, b = 1\n\t2.a = 2,b = 1\n\t3. a = 1, b= 2\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"a=2,b=1\".");
			getch();
			clrscr();
		}
		break;

		case 3:
 		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h> \n int main() \n { \n int a = 1, b = 1, d = 1; \n printf(\"%d, %d,%d\", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++); \n  }");
		printf("\n\n\t1. 15,4,5\n\t2. 9,6,9\n\t3. both\n\t4. Undefined(Compiler Dependent)");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Undefined(Compiler Dependent)\".");
			getch();
			clrscr();
		}
		break;
 		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\t\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}

		case 4:
		if(atg==0)
		break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n What is the precedence of arithmetic operators (from highest to lowest)? \n");
		printf("\n\n\t1. %,*,/,+,-\n\t2. 5,-,/,*,-\n\t3. +,-,%,*,/\n\t4. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"%,*,/,+,-\".");
			getch();
			clrscr();
		}
		break;

		case 5:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\nWhich of the following data type will throw an error on modulus operation(%)?");
		printf("\n\n\t1. char\n\t2. short\n\t3. int\n\t4. float");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"float\".");
			getch();
			clrscr();
		}
		break;

		case 6:
		if(count>=1)
                {
                count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n    #include <stdio.h> \n int main() \n { \n int a = 10; \n	double b = 5.6; \n int c; \n c = a + b; \n printf(\"%d\", c); \n }");
		printf("\n\n\t1. 15\n\n\t2. 16\n\t3.15.6\n\t4. 10\n\t5. None");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 1)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"15");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;;
		}
		}

		case 7:
		if(atg==0)
		break;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <stdio.h> \n const int a = 1,  b = 2; \n int main() \n { \n	int x = 1; \n	switch (x) \n	{ \n	   case a: \n	      printf(\"yes \"); \n	   case b: \n	      printf(\"no\"); \n	      break; \n	} \n }");
		printf("\n\n\t1. yes no\n\t2. yes\n\t3. no \n\t4. Compile time error");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Compile tiime error\".");
			getch();
			clrscr();
		}
		break;
 		
		case 8:
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <stdio.h> \n void main() \n { \n     int i = 0; \n     if (i == 0) \n     { \n         printf(\"Hello\"); \n         continue; \n     } \n }");
		printf("\n\n\t1. Hello is printed infinite times\n\t2. Hello\n\t3. Varies\n\t4. Compile time error");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 4)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"Compile time error\".");
			getch();
			clrscr();
		}
		break;

		case 9:
 		if(count>=1)
		{
		count=0;
		printf("\n|--------------|");
		printf("Question No. %d|",i+1);
		printf("|--------------|");
		printf("\n\n #include <stdio.h> \n int main() \n { \n int i = 0; \n	char c = 'a'; \n while (i < 2) \n{ \n  i++; \n   switch (c) \n { \n case 'a': \n printf(\"%c \", c); \n   break; \n  break; \n } \n \n	printf(\"after loop\"); \n }");
		printf("\n\n\t1. a after loop\n\t2. a a after loop ");
		printf("\n\nEnter only 1 option here: ");
		scanf("%d",&c[i]);
		if(c[i] == 2)
		{
			score = score + 1;
			printf("Correct Answer.");count++;
			getch();
			clrscr();
		}
		else
		{
			printf("\nAnswer Not Correct.");
			printf("\nCorrect Answer is \"a a after loop\".");
			getch();
			clrscr();
		}
		break;
		}
		else
		{
		clrscr();
		atg=0;
		printf("\n\n\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU 3) EXIT\n\t:");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc2();
		break;
		case 2:
		mainmenu();
		break;
		default:
		break;
		 }
		}
	}

 }
 }
for(m=0; m<1; m++)
{
if(atg==0)
break;
else
printf("\n|-------------------------------------------------|");
printf("\n\n\tSCORE OUT OF %d QUESTIONS IS :%d",userquiz,score);
printf("\n|-------------------------------------------------|");
score_write_c2(score,playernm);
getch();
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) PLAY AGAIN \n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
		case 1:
		quizc2();
		clrscr();
		break;
		case 2:
		mainmenu();
		break;
		case 3: break;
                default:
                break;
		}
		}
}
//###############################################################

///////########################################################################

void disp_record_c()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorec.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}

void reset_score_c()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorec.txt","w");
	fprintf(f,"%s\n%d",nm,sc);
	fclose(f);
        kuha();
        getch();
      }
void score_write_c(int score, char playernm[20])//score_write_c(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorec.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorec.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}

///////########################################################################
void disp_record_j()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorej.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_j()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorej.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_j(int score, char playernm[20])//score_write_j(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorej.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorej.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_p()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorep.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_p()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorep.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_p(int score, char playernm[20])//score_write_p(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorep.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorep.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_e()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scoree.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_e()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scoree.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_e(int score, char playernm[20])//score_write_e(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scoree.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scoree.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_cc()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorecc.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}

void reset_score_cc()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorecc.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_cc(int score, char playernm[20])//score_write_cc(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorecc.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorecc.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////########################################################################
void disp_record_cc2()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorecc2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}

void reset_score_cc2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorecc2.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_cc2(int score, char playernm[20])//score_write_cc(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorecc2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorecc2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
///////################################################
void disp_record_p2()
{

	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorep2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 kuha();
	 getch();
}

void reset_score_p2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorep2.txt","w");
	fprintf(f,"%s\n%d",nm,sc);
	fclose(f);
	kuha();
	getch();
      }
void score_write_p2(int score, char playernm[20])//score_write_cc(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorep2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  {
	sc=score;
	    fclose(f);
	    f=fopen("scorep2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc);
	    fclose(f);
      }
}
//####################################
void disp_record_b2()
{

	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scoreb2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
	 kuha();
	 getch();
}

void reset_score_b2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scoreb2.txt","w");
	fprintf(f,"%s\n%d",nm,sc);
	fclose(f);
	kuha();
	getch();
      }
void score_write_b2(int score, char playernm[20])
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scoreb2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  {
	sc=score;
	    fclose(f);
	    f=fopen("scoreb2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc);
	    fclose(f);
      }
}

//#####################################################
void disp_record_e2()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scoree2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_e2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scoree2.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_e2(int score, char playernm[20])
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scoree2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scoree2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}

//#################################### 
void disp_record_j2()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorej2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_j2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorej2.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_j2(int score, char playernm[20])//score_write_j2(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorej2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorej2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
//#################################### 
void disp_record_c2()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f;
	 f=fopen("scorec2.txt","r");
	 fscanf(f,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	 fclose(f);
         kuha();
	 getch();
}
void reset_score_c2()
{
	int sc=0;
	char nm[5]={"RESET"};
	FILE *f;
	f=fopen("scorec2.txt","w");
	fprintf(f,"%s\n%d",nm,sc); 
	fclose(f);
        kuha();
        getch();
      }
void score_write_c2(int score, char playernm[20])//score_write_c2(score,playernm);
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("scorec2.txt","r");
	fscanf(f,"%s%d",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("scorec2.txt","w");
	    fprintf(f,"%s\n%d",playernm,sc); 
	    fclose(f);
      }
}
//##################################################

//#####################################################
void cdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_c();
		clrscr();
		break;
		case 2:
		reset_score_c();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void jdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_j();
		clrscr();
		break;
		case 2:
		reset_score_j();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void pdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_p();
		clrscr();
		break;
		case 2:
		reset_score_p();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void edata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_e();
		clrscr();
		break;
		case 2:
		reset_score_e();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void ccdata()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_cc();
		clrscr();
		break;
		case 2:
		reset_score_cc();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void cc2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_cc2();
		clrscr();
		break;
		case 2:
		reset_score_cc2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void p2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_p2();
		clrscr();
		break;
		case 2:
		reset_score_p2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//#####################################################
void b2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_b2();
		clrscr();
		break;
		case 2:
		reset_score_b2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//####################################
void e2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_e2();
		clrscr();
		break;
		case 2:
		reset_score_e2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
///////################################################
void j2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_j2();
		clrscr();
		break;
		case 2:
		reset_score_j2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//####################################
void c2data()
{
int k;
clrscr();
printf("\n\tWHAT YOU WANT?\n\t1) SHOW RECORD \n\t2) RESET DATA\n\t3) EXIT\n");
scanf("%d",&k);
		clrscr();
		switch(k)
		{
		case 1:
		disp_record_c2();
		clrscr();
		break;
		case 2:
		reset_score_c2();
		break;
		case 3: 
                break;
		default:
		break;
		}
		
getch();
}
//##########################################

void kuha()         //JUST LIKE AGAIN FUNCTION
{
int w;
printf("\n\n\tWHAT YOU WANT?\n\n\t1) BACK\n\t2) MAIN MENU\n\t3) EXIT\n");
		scanf("%d",&w);
		clrscr();
		switch(w)
		{
                case 1:
		scores();
		break;

		case 2:
		mainmenu();
		break;

		case 3: 
                break;
                default:
                break;
		}

getch();
}
//################## below all score fn start

void allscore()
{
     
	 char name[20];
	 int scr=0;
	 FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f10,*f11;
	 f1=fopen("scorec.txt","r");
	 fscanf(f1,"%s%d",&name,&scr);
	 printf("\n|--------------------------------------------------|");
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 fclose(f1);

	 
	 f2=fopen("scorej.txt","r");
	 fscanf(f2,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	
	 fclose(f2);
         

	
	 f3=fopen("scorep.txt","r");
	 fscanf(f3,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	
	 fclose(f3);
         

	
	 f4=fopen("scoree.txt","r");
	 fscanf(f4,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 
	 fclose(f4);

	
	 f5=fopen("scorecc.txt","r");
	 fscanf(f5,"%s%d",&name,&scr);
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	
	 fclose(f5);

	
	 f6=fopen("scorecc2.txt","r");
	 fscanf(f6,"%s%d",&name,&scr);
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 fclose(f6);

	 
	 f7=fopen("scorep2.txt","r");
	 fscanf(f7,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 fclose(f7);
        

	
	 f8=fopen("scoreb2.txt","r");
	 fscanf(f8,"%s%d",&name,&scr);
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 fclose(f8);

	 
	 f9=fopen("scoree2.txt","r");
	 fscanf(f9,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 
	 fclose(f9);
         
	 
	 f10=fopen("scorej2.txt","r");
	 fscanf(f10,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 fclose(f10);
	 
	 f11=fopen("scorec2.txt","r");
	 fscanf(f11,"%s%d",&name,&scr);
	
	 printf("\n\n\t %s HAS SECURED THE HIGHEST SCORE %d",name,scr);
	 printf("\n|--------------------------------------------------|");
	
	 fclose(f11);
kuha();
}
//######################## end of all score fn
//######################## all the score reset fn start

void allreset()
{
	int score=0;
	char name[5]={"RESET"};
	FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f10,*f11;
	f1=fopen("scorec.txt","w");
	fprintf(f1,"%s\n%d",name,score);
	fclose(f1);
	
	f2=fopen("scorej.txt","w");
	fprintf(f2,"%s\n%d",name,score); 
	fclose(f2);
	
	f3=fopen("scorep.txt","w");
	fprintf(f3,"%s\n%d",name,score); 
	fclose(f3);
	
	f4=fopen("scoree.txt","w");
	fprintf(f4,"%s\n%d",name,score); 
	fclose(f4);
	
	f5=fopen("scorecc2.txt","w");
	fprintf(f5,"%s\n%d",name,score); 
	fclose(f5);
	
	f6=fopen("scorecc.txt","w");
	fprintf(f6,"%s\n%d",name,score); 
	fclose(f6);
	
	f7=fopen("scorep2.txt","w");
	fprintf(f7,"%s\n%d",name,score);
	fclose(f7);
	
	f8=fopen("scoreb2.txt","w");
	fprintf(f8,"%s\n%d",name,score);
	fclose(f8);
	
	f9=fopen("scoree2.txt","w");
	fprintf(f9,"%s\n%d",name,score); 
	fclose(f9);
	
	f10=fopen("scorej2.txt","w");
	fprintf(f10,"%s\n%d",name,score); 
	fclose(f10);

	f11=fopen("scorec2.txt","w");
	fprintf(f11,"%s\n%d",name,score); 
	fclose(f11);
printf("\n\n\t||--------------------------------||");
printf("\n\n\t  ALL RECORD RESET SUCCESSFULLY");
printf("\n\n\t||--------------------------------||");
scores();
      }
//#################################### all reset fn end