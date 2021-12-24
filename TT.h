#define NLINES 5
#define PARAWIDTH 60
#define SCRWIDTH 80
#define SCRHEIGHT 24
#define PAGE  PARAWIDTH*NLINES
#define ESC 27
#define HB 205
#define VB 186
#define TRC 187
#define BRC 188
#define BLC 200
#define TLC 201
#define TBR 185
#define TBL 204
#define LF 10
#define CR 13

#define RUNNING 1
/*Main Menu*/
#define SELECTUSER 1
#define STAT 2
#define Games 3
#define HELP 4
#define ABOUT 5
#define	QUIT 6
/*User Select Menu*/
#define USERLIST 1
#define NEWUSER 2
#define BACK 3
/*Lesson Select Menu*/
#define LESSONLIST 1
#define NEWLESSON 2
#define BACK 3
#define N 8
#define ESC 27
#define CLRSCR  window(1,1,80,25);textbackground(0);clrscr();
/*keys*/
#define UP 72
#define DOWN 80
typedef struct
{
	char name[N];
}user;

typedef struct
{
	char title[N];
   unsigned long length;	/*total length of characters in the text file*/
}lesson;

typedef struct
{
	user u;	/*present user*/
   struct tm dtntm;	/*session date and time*/
   lesson  lsn;	/*lession title*/
   unsigned int wpm;	/*average words per minute*/
   float accuracy;
}session;
void loadFiles(void);
int mainmenu(void);
int userSelectMenu(void);
void viewStat(void);
void createUser(void);
int listUser(void);
int listLesson(void);
void beginSession(void);
void addRecord(session);
void sortSession(session[],int);
void LoadPage(int *,int,int,int);
void box(int x,int y,int width,int height,int fc,int bc);
void DrawMenu(int,char **,int);
int gamemenu(void);
void about1(void);
void help(void);
void viewRecords(void);

