///=========================================///
///     目標:check_answer()over             ///
///                                         ///
///=========================================///


/*      函示庫          */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <process.h>


/* define picture row&column */
#define picture_row 7
#define picture_column 8
#define miao_row 20
#define miao_column 40

/*   define color-number     */
#define color_blue 9
#define color_red  12
#define color_green 10
#define color_yellow 14

/*    define attack          */

#define speed 100
#define run_range 36
#define blance 5



/*     struct              */

struct fighter
{
    char body[picture_row][picture_column];
    int colornum;
    COORD currentposition;//blue man's current x,y
    boolean rightmax;
    boolean leftmax;
    boolean control_token;
    boolean punch_token;

};


/*    attack struct        */
struct arrow
{
    COORD nowpositon;

    char arrow_body[4];

    clock_t arrow_time;

    boolean hide;

    boolean can_shoot;

};



/*      副程式宣告         */
void hide(void);
void make_human (char *body);
void print_man (char *body, int colornum,COORD point);
void fighter_first (char *body);
void getxy (COORD *xy);
void gotoxy(COORD point);//===========================================
void sgame_set(struct fighter* blue_man);

void manright(struct fighter* blue_man);
void manleft(struct fighter* blue_man);
//void manup(struct fighter* blue_man);

void manact(struct fighter * blue_man);

void setmiaomiao(char *miao);
void print_miao(char *miao,int colornum);
void miao_gethurt(char *miao,struct fighter* blue_man);

void fun_hu_jao();

int check_answer(char *your_arr,char*ans_arr );
void clear_array(char *your_array,int volume);


void print_arr(char *array);
void bron_number(char *ans_array);

//void attack_WWWWWWWW(int num);

void gotoxy_xy(int x,int y);
void attack(struct arrow *arrow1);
void print_attack(COORD coordinate,char *array);
void creat_arrow(struct arrow *a_arrow);
void attack_start(struct arrow *a_arrow,struct fighter blue_man);


void setconsole_WH(int x,int y);

void miao_laught(char * miao);
void show_hp(void);
void show_bra_message(void);
void miao_nervous(char * miao);
void time_less_message(void);
void miao_happy(char * miao,struct fighter *blue_man);
void miao_very_happy(void);
void miao_you_wrong(char *miao);
void game_over(void);
void miao_die(void);
void mamiru(struct fighter blue_man);
void man_die(char * body,COORD currentposition);
void miao_messageclear(void);
void miao_clear(void);
void miao_ghost(char *miao);
void history_number(char *array);


HANDLE hStdout;//宣告consoleout控制碼:hStdout
double nowtime=0;
boolean punch_hurt=0;

boolean bra_broken=0;
int miaoHp=5;
int playerHp=5;
int leftest=0;
int rightest=50;
char your_array[4]= {0};
short array_count=0;
char answer_array[4]= {0};
int correct_point;
clock_t t1;
boolean numberchange=0;
boolean can_enter_number=1;
boolean attack_happen=0;
//attack//
int no_attack_locate;
int balance_attack;
int arrow_number=1500;//for max level:75
boolean attack_switch=0;
boolean check_switch=0;
boolean woody=0;//擊中後無敵時間
boolean broken_switch=0;
clock_t player_gethurt;
boolean hp_switch=1;
int your_attack_time;
boolean catched=0;
int console_H=35;
int console_W=110;
boolean outwhile=0;
int wrong_times=0;
int a_num=0,b_num=0;

/**************************
* int main()
* 功能:格鬥遊戲
* 參數:無        返回值:無
***************************/

int main()

{
    /* console&亂數 相關 ，必須在一開始就設定*/
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);//獲取輸出控制碼=>hStdout
    srand((unsigned)time(NULL));//亂樹種子
    setconsole_WH(console_W,console_H);//設定視窗大小
    hide();//hide CURSOR



    char buffer[100];
    int decide_TF;
    printf("please set your hp:");
    while((decide_TF=scanf("%d",&playerHp))<1||playerHp<1)
    {
        gets(buffer);
        system("cls");
        if(decide_TF<1)
        {
            printf("\nWrong!\nplease enter a \"number\" for your hp:\n");
        }
        else
        {
            printf("\nWrong!\nplease enter a number which >0 for your hp:\n");
        }
    }
    printf("please set MIAO-MIAO-Man hp:");
    while((decide_TF=scanf("%d",&miaoHp))<1||miaoHp<1)
    {
        gets(buffer);
        system("cls");
        if(decide_TF<1)
        {
            printf("\nWrong!\nplease enter a \"number\" for MIAO-MIAO-Man hp\n");
        }
        else
        {
            printf("\nWrong!\nplease enter a number which >0 for MIAO-MIAO-Man hp:\n");
        }

    }
    system("cls");

//preset


    /*       attack          */
    int Stdarrow_time;
    Stdarrow_time=clock();//標準射箭時間
    struct arrow a_arrow[arrow_number];//預先生成最大可能箭數
    balance_attack=time(NULL);//遊戲平衡用，該數值+=越大，遊戲越簡單
//attack;



    /**         ver.beta       ans_number         for test            **/
    answer_array[0]='0';
    answer_array[1]='1';
    answer_array[2]='2';
    answer_array[3]='3';
    //bron_number(answer_array);
///-------------------------------------------------------------------------------------------------------------------



    /*  crate & set MIAO-MIAO-MAN  */
    char miaomiao[20][40]= {0};
    setmiaomiao(miaomiao);
    print_miao(miaomiao,color_red);
//crate MIAO;

    /*   crate & set blue_man   */
    struct fighter blue_man ;
    blue_man.colornum = color_blue;
    blue_man.rightmax=0;
    blue_man.leftmax=0;
    blue_man.control_token=1;
    blue_man.punch_token=1;
    sgame_set(&blue_man) ;
    fighter_first ( blue_man.body ) ;
    make_human ( blue_man.body ) ;
    getxy(&(blue_man.currentposition));
    print_man ( blue_man.body, blue_man.colornum, blue_man.currentposition) ;
//crate blue_man;





    ///==============================================================================================================




    //int i;///動畫用，之後可 delete
    /* multi-thread-------------------------(give up)
    CRITICAL_SECTION cs;
    InitializeCriticalSection( &cs );
    */







///-------------------------------------------------------------------------------

    while (1)
    {



        /*  attack  */
        if(attack_switch==1)
        {
            attack_happen=1;
            blue_man.punch_token=0;
            attack_switch=0;
            creat_arrow(a_arrow);
        }
        if(attack_happen==1)
        {
            attack_start(a_arrow,blue_man);
        }
        if(attack_happen==1&&clock()>Stdarrow_time+(a_arrow[arrow_number-1].arrow_time+2200))
        {
            can_enter_number=1;
            blue_man.punch_token=1;
            attack_happen=0;
            clear_array(your_array,4);
            setmiaomiao(miaomiao);
            print_miao(miaomiao,color_red);
            miao_laught(miaomiao);
        }
        //attack

        if(hp_switch==1)
        {
            show_hp();
        }
        if(outwhile==1)
        {
            break;
        }

        show_bra_message();

        if(broken_switch==1)
        {
            miao_messageclear();
            miao_nervous(miaomiao);
        }
        else if(bra_broken==1&&(your_attack_time+10)-time(NULL)<5)
        {
            time_less_message();   //防護罩倒數
        }

        if(time(NULL)>your_attack_time+10&&catched==0&&bra_broken==1)
        {
            miao_messageclear();
            bra_broken=0;//防護罩恢復
            if(blue_man.currentposition.X-34>=1)//秒殺確定
            {
                miao_happy(miaomiao,&blue_man);
            }
            else
            {
                /*bron_number(answer_array);*/
                clear_array(your_array,4);
                blue_man.control_token=1;
                blue_man.punch_token=1;
                setmiaomiao(miaomiao);
                print_miao(miaomiao,color_red);
                can_enter_number=1;
            }
        }

        if(catched==1&&time(NULL)>your_attack_time+3)//執行秒殺
        {
            miao_very_happy();
        }


        if(numberchange==1)
        {
            print_arr(your_array);   //顯示玩家猜的數字
        }


        // _beginthread(manact,100,&blue_man);-------multi thread 用，已放棄
        manact(&blue_man);

        if(punch_hurt==1)
        {
            miao_gethurt(miaomiao,&blue_man);
            punch_hurt=0;
        }

        if(check_switch==1)
        {
            if(correct_point==20)
            {
                bra_broken=1;
                broken_switch=1;
            }//打破防護罩
            else
            {
                arrow_number=(20-correct_point)*20;    //換算攻擊點數
                attack_switch=1;
                can_enter_number=0;
                wrong_times++;
                history_number(your_array);
            }
            check_switch=0;
            miao_you_wrong(miaomiao);
        }

        if(woody==1&&clock()>player_gethurt+500)//無敵時間結束
        {
            woody=0;
            print_man(blue_man.body,color_blue,blue_man.currentposition);
        }


        if(woody==0)
        {
            blue_man.colornum=color_blue;   //根據是否為無敵時間來決定blue_man的顏色
        }

        else
        {
            blue_man.colornum=color_yellow;
        }
        ///=================================================////////////***********************/////////////////////////////////////


    }
    ///-------------------畫出倒地的樣子
    if(catched==1)
    {
        mamiru(blue_man);
    }
    else if(playerHp==0)
    {
        man_die(blue_man.body,blue_man.currentposition);
    }
    else
    {
        miao_clear();
        miao_ghost(miaomiao);
        miao_messageclear();
        print_man(blue_man.body,color_blue,blue_man.currentposition);
        miao_die();
        print_man(blue_man.body,color_blue,blue_man.currentposition);
    }

    game_over();
    system("pause");

    return 0;
}
//===========================================================================




/* -------------------------
||                        ||
||       副程式code       ||
||                        ||
--------------------------*/
void hide(void)
{
    CONSOLE_CURSOR_INFO cci= {1,0};
    SetConsoleCursorInfo(hStdout,&cci);
}





void fighter_first(char *body)
{
    int i,j;

    for(i=0; i<picture_row; i++)
    {
        for(j=0; j<picture_column; j++)
        {
            body[i*picture_column+j]=' ';
        }
    }

}


void make_human(char *body)//設定人的樣子
{
    body[picture_column+2]='_';
    body[picture_column+3]='[';
    body[picture_column+4]=']';
    body[picture_column+5]='_';
    body[2*picture_column+1]='|';
    body[2*picture_column+2]='|';
    body[2*picture_column+3]=219;
    body[2*picture_column+4]=219;
    body[2*picture_column+5]='|';
    body[2*picture_column+6]='|';
    body[3*picture_column+1]='L';
    body[3*picture_column+2]='|';
    body[3*picture_column+3]=219;
    body[3*picture_column+4]=219;
    body[3*picture_column+5]='|';
    body[3*picture_column+6]='J';
    body[4*picture_column+2]='|';
    body[4*picture_column+3]='|';
    body[4*picture_column+4]='|';
    body[4*picture_column+5]='|';
    body[5*picture_column+2]='|';
    body[5*picture_column+3]='|';
    body[5*picture_column+4]='|';
    body[5*picture_column+5]='|';
}


void setmiaomiao(char * miao)//======================================================================================
{


    miao[miao_column+16]='/';
    miao[miao_column+17]='\\';
    miao[miao_column+23]='/';
    miao[miao_column+24]='\\';
    miao[2*miao_column+15]='/';
    miao[2*miao_column+18]='^';
    miao[2*miao_column+22]='^';
    miao[2*miao_column+25]='\\';
    miao[3*miao_column+3]='_';
    miao[3*miao_column+4]='_';
    miao[3*miao_column+5]='_';
    miao[3*miao_column+12]='_';
    miao[3*miao_column+13]='_';
    miao[3*miao_column+26]='_';
    miao[3*miao_column+27]='_';
    miao[3*miao_column+15]='\\';
    miao[3*miao_column+20]='o';
    miao[3*miao_column+25]='/';
    miao[4*miao_column+1]='|';
    miao[4*miao_column+2]='|';
    miao[4*miao_column+3]='|';
    miao[4*miao_column+4]='|';
    miao[4*miao_column+7]='\\';
    miao[4*miao_column+11]='(';
    miao[4*miao_column+28]=')';
    miao[4*miao_column+17]='_';
    miao[4*miao_column+18]='_';
    miao[4*miao_column+19]='_';
    miao[4*miao_column+21]='_';
    miao[4*miao_column+22]='_';
    miao[4*miao_column+23]='_';
    miao[5*miao_column+5]='\\';
    miao[5*miao_column+8]='\\';
    miao[5*miao_column+26]='\\';
    miao[5*miao_column+29]='\\';
    miao[5*miao_column+10]='(';
    miao[5*miao_column+13]='/';
    miao[5*miao_column+15]='|';
    miao[5*miao_column+20]='|';
    miao[5*miao_column+25]='|';
    miao[6*miao_column+20]='|';
    miao[6*miao_column+6]='\\';
    miao[6*miao_column+9]='\\';
    miao[6*miao_column+16]='\\';
    miao[6*miao_column+27]='\\';
    miao[6*miao_column+30]='\\';
    miao[6*miao_column+10]='(';
    miao[6*miao_column+13]='/';
    miao[6*miao_column+24]='/';
    miao[6*miao_column+17]='+';
    miao[6*miao_column+23]='+';
    miao[6*miao_column+18]='_';
    miao[6*miao_column+19]='_';
    miao[6*miao_column+21]='_';
    miao[6*miao_column+22]='_';
    miao[7*miao_column+7]='\\';
    miao[7*miao_column+28]='\\';
    miao[7*miao_column+31]='\\';
    miao[7*miao_column+12]='/';
    miao[7*miao_column+8]='_';
    miao[7*miao_column+9]='_';
    miao[7*miao_column+10]='_';
    miao[7*miao_column+11]='_';
    miao[7*miao_column+17]='|';
    miao[7*miao_column+18]='T';
    miao[7*miao_column+20]='I';
    miao[7*miao_column+22]='7';
    miao[7*miao_column+23]='|';
    miao[8*miao_column+17]='|';
    miao[8*miao_column+18]='T';
    miao[8*miao_column+20]='I';
    miao[8*miao_column+22]='7';
    miao[8*miao_column+23]='|';
    miao[8*miao_column+28]='/';
    miao[8*miao_column+31]='/';
    miao[9*miao_column+17]='[';
    miao[9*miao_column+18]='=';
    miao[9*miao_column+19]='=';
    miao[9*miao_column+20]='=';
    miao[9*miao_column+21]='=';
    miao[9*miao_column+22]='=';
    miao[9*miao_column+23]=']';
    miao[9*miao_column+27]='/';
    miao[9*miao_column+30]='/';
    miao[10*miao_column+16]='/';
    miao[10*miao_column+18]='\\';
    miao[10*miao_column+19]='_';
    miao[10*miao_column+20]='_';
    miao[10*miao_column+21]='_';
    miao[10*miao_column+22]='/';
    miao[10*miao_column+24]='\\';
    miao[10*miao_column+26]='|';
    miao[10*miao_column+27]='|';
    miao[10*miao_column+28]='|';
    miao[10*miao_column+29]='|';
    miao[11*miao_column+15]='/';
    miao[11*miao_column+18]='/';
    miao[11*miao_column+22]='\\';
    miao[11*miao_column+25]='\\';
    miao[12*miao_column+15]='|';
    miao[12*miao_column+18]='|';
    miao[12*miao_column+22]='|';
    miao[12*miao_column+25]='|';
    miao[13*miao_column+15]='|';
    miao[13*miao_column+18]='|';
    miao[13*miao_column+22]='|';
    miao[13*miao_column+25]='|';
    miao[14*miao_column+15]='|';
    miao[14*miao_column+18]='|';
    miao[14*miao_column+22]='|';
    miao[14*miao_column+25]='|';


}








void print_man(char *body,int colornum, COORD point)
{
    SetConsoleTextAttribute(hStdout,colornum);//改顏色
    gotoxy(point);

    int i,j;
    for( i=0 ; i<picture_row ; i++ )  //在螢幕上畫出人
    {
        for( j=0 ; j<picture_column ; j++ )
        {
            printf( "%c" , body[i*picture_column+j] );

        }
        point.Y++;
        gotoxy(point);
    }
    SetConsoleTextAttribute(hStdout,7);//將顏色改回初始值

}

void print_miao(char *miao,int colornum)
{
    SetConsoleTextAttribute(hStdout,colornum);
    COORD miaostart;
    miaostart.X=43,miaostart.Y=10;
    gotoxy(miaostart);
    int i,j;
    for( i=0 ; i<miao_row ; i++ )  //在螢幕上畫出miao==============================================/
    {
        for( j=0 ; j<miao_column ; j++ )
        {
            printf( "%c" , miao[i*miao_column+j] );

        }
        miaostart.Y++;
        gotoxy(miaostart);
    }
    COORD oringin;
    oringin.X=0,oringin.Y=0;
    gotoxy(oringin);

}
void miao_gethurt(char *miao,struct fighter* blue_man)
{
    print_miao(miao,color_green);
    miao[2*miao_column+18]='.';
    miao[2*miao_column+22]='Q';
    miao[3*miao_column+20]=127;
    print_miao(miao,color_red);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:NO~~~   |                  ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                ",192,217);
    Sleep(25);
    miaoHp--;
    print_miao(miao,color_red);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:NO~~~   |                  ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                ",192,217);
    SetConsoleTextAttribute(hStdout,7);
    hp_switch=1;
    if(miaoHp==0)
    {
        miao_die();
    }

}



void getxy(COORD *xy)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdout, &csbi);
    (*xy).X = csbi.dwCursorPosition.X;
    (*xy).Y = csbi.dwCursorPosition.Y;
}


void gotoxy(COORD point)
{
    SetConsoleCursorPosition(hStdout, point);
}



void sgame_set(struct fighter*blue_man)
{

    (*blue_man).currentposition.X=0;
    (*blue_man).currentposition.Y=20;
    gotoxy((*blue_man).currentposition);

}
/*
void manup(struct fighter* blue_man)
{
    (*blue_man).currentposition.Y--;
    gotoxy((*blue_man).currentposition);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);Sleep(177);
    (*blue_man).currentposition.Y--;
    gotoxy((*blue_man).currentposition);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);Sleep(175);
            /*
            coCurrent.Y--;
            gotoxy(coCurrent);
            print_man(blue_man.body, blue_man.colornum,coCurrent);Sleep(100);
            coCurrent.Y++;
            gotoxy(coCurrent);
            print_man(blue_man.body, blue_man.colornum,coCurrent);Sleep(100);

    (*blue_man).currentposition.Y++;
    gotoxy((*blue_man).currentposition);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);Sleep(175);
    (*blue_man).currentposition.Y++;
    gotoxy((*blue_man).currentposition);
    print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);Sleep(177);


}


*/
void manleft(struct fighter * blue_man)
{
    (*blue_man).currentposition.X--;
    gotoxy((*blue_man).currentposition);
    print_man ( (*blue_man).body, (*blue_man).colornum , (*blue_man).currentposition) ;

}
void manright(struct fighter *blue_man)
{
    (*blue_man).currentposition.X++;
    gotoxy((*blue_man).currentposition);
    print_man ( (*blue_man).body , (*blue_man).colornum ,(*blue_man).currentposition) ;

}

void manact(struct fighter * blue_man)
{

    int vectorkey;
    int kb;

    if(_kbhit()==1)
    {
        kb=getch();
        if (kb==224)
        {

            if((*blue_man).control_token==0)
            {
                getch();//<75,>77,^72,V80
            }
            else
            {
                vectorkey=getch();

                if((*blue_man).rightmax==0&&vectorkey==77)
                {
                    manright(blue_man);

                }
                if((*blue_man).leftmax==0&&vectorkey==75)
                {
                    manleft(blue_man);

                }
                /*
                        if(vectorkey==72&&(*blue_man).control_token==1)
                        {

                            (*blue_man).control_token=0;
                            nowtime=time(NULL);

                            manup(blue_man);
                        }
                */
            }//end vector key
        }//end whether vector key
        else if (kb==32&&(*blue_man).control_token==1&&(*blue_man).punch_token==1)//=========use punch
        {
            (*blue_man).control_token=0;
            (*blue_man).punch_token=0;
            t1=clock();
            SetConsoleTextAttribute(hStdout,color_blue);
            COORD punch;
            punch.X=(*blue_man).currentposition.X+6;
            punch.Y=(*blue_man).currentposition.Y+3;
            gotoxy(punch);
            printf(" ");
            punch.Y--;
            gotoxy(punch);
            printf("=");
            Sleep(100);
            punch.X++;
            gotoxy(punch);
            printf("=");
            punch.X++;
            gotoxy(punch);
            printf(">");
            Sleep(100);
            gotoxy(punch);
            printf(" ");
            if(punch.X==58)
            {
                punch_hurt=1;
            }
            print_man((*blue_man).body, (*blue_man).colornum,(*blue_man).currentposition);

        }
        else if(kb>=48&&kb<=57&&array_count<4&&can_enter_number==1)
        {
            numberchange=1;
            your_array[array_count]=kb;
            array_count++;
        }
        else if(kb==8&&array_count>0&&can_enter_number==1)
        {
            numberchange=1;
            array_count--;
            your_array[array_count]=0;

        }
        else if(kb==13&&array_count==4&&can_enter_number==1)
        {
            can_enter_number=0;
            correct_point=check_answer(your_array, answer_array);
            check_switch=1;
        }





        //checkcurrentx;
        if((*blue_man).currentposition.X>=rightest)
        {
            (*blue_man).rightmax=1;
        }
        else
        {
            (*blue_man).rightmax=0;
        }
        if((*blue_man).currentposition.X<=leftest)
        {
            (*blue_man).leftmax=1;
        }
        else
        {
            (*blue_man).leftmax=0;
        }

    }


    if((*blue_man).control_token==0&&clock()>=t1+350)
    {
        (*blue_man).control_token=1;
        (*blue_man).punch_token=1;
    }


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/*
          /\_____/\
         /  ^   ^  \       ____
      __ \    3    /__    |  ||||
     (     ___ ___    )   | ] _|
    (   /|    |    |\  \  /  /
   {   /  \+__|__+/  \  \/  /
    (  \   |T I 7|    \____/
     (  \  |T I 7|
      |  | [=====]
      /// / \___/ \
         /  /   \  \
         | |     | |
         | |     | |
         | |     | |
*/
/*     01234567890123456789012345678901234567890
       1 |             /\_____/\
       2 |            /  ^   ^  \
       3 |___      __ \    o    /__
       4||||  \   (     ___ ___    )
       5    \  \ (   /|    |    |\  \
       6     \  \(  /  \+__|__+/  \  \
       7      \____/    |T I 7|    \  \
       8                |T I 7|    /  /
       9                [=====]   /  /
       0               / \___/ \ ||||
       1              /  /   \  \
       2              | |     | |
       3              | |     | |
       4              | |     | |

*/

void fun_hu_jao()
{
    SetConsoleTextAttribute(hStdout,11);
    COORD protect_bra;
    protect_bra.X=42;
    int i;
    for(protect_bra.Y=9; protect_bra.Y<27; protect_bra.Y++)
    {
        gotoxy(protect_bra);
        printf("*");
    }
    SetConsoleTextAttribute(hStdout,7);
}

int check_answer(char *your_arr,char* ans_arr)
{
    a_num=0;
    b_num=0;
    int i,j;
    for(i=0; i<4; i++) //ans
    {
        for(j=0; j<4; j++) //ent
        {

            if(ans_arr[i]==your_arr[j])
            {
                if (i==j)
                {
                    a_num++;
                }
                else
                {
                    b_num++;
                }
                break;
            }

        }
    }
    COORD ab;
    ab.X=10,ab.Y=7;
    gotoxy(ab);
    printf("%dA%dB",a_num,b_num);
    return 5*a_num+2*b_num;
}

void clear_array(char *your_array,int volume)
{
    int i;
    for(i=0; i<volume; i++)
    {
        your_array[i]=' ';
    }
    array_count=0;
    numberchange=1;

}




void print_arr(char *array)
{
    SetConsoleTextAttribute(hStdout,7);

    gotoxy_xy(10,6);
    printf("your number:");
    int i;
    for(i=0; i<4; i++)
    {
        printf("%c",*(array+i));
    }
    numberchange=0;
}

void bron_number(char *ans)
{
    char std_arr[10];
    int i;
    int counter,temp;
    for(i=0; i<10; i++)
    {
        std_arr[i]=48+i;
    }
    counter=10;//-----------reset//有多少數字可用
    for(i=0; i<4; i++)
    {
        temp=rand()%counter;
        ans[i]=std_arr[temp];
        std_arr[temp]=std_arr[counter-1];
        counter--;

    }
}

void gotoxy_xy(int x,int y)
{
    COORD point;
    point.X=x;
    point.Y=y;
    SetConsoleCursorPosition(hStdout, point);
}

void attack(struct arrow *arrow1)
{

    if((*arrow1).nowpositon.Y==22&&(*arrow1).hide==0)
    {
        (*arrow1).arrow_body[0]=' ';
        (*arrow1).arrow_body[1]=' ';
        (*arrow1).arrow_body[2]=' ';
        (*arrow1).arrow_body[3]=' ';
        print_attack((*arrow1).nowpositon,(*arrow1).arrow_body);
        (*arrow1).hide=1;

    }

    else if(clock()>(*arrow1).arrow_time+1&&(*arrow1).nowpositon.Y<22)
    {
        (*arrow1).nowpositon.Y++;
        print_attack((*arrow1).nowpositon,(*arrow1).arrow_body);
        (*arrow1).arrow_time+=speed;
    }

}
void print_attack(COORD coordinate,char *array)//coord 不可傳指標
{
    int i;

    for(i=0; i<4; i++)
    {
        gotoxy_xy(coordinate.X,coordinate.Y);
        printf("%c",array[i]);
        coordinate.Y++;
    }

}

void creat_arrow(struct arrow *a_arrow)
{
    int i;
    int Stdarrow_time;
    Stdarrow_time=clock();
    for(i=0; i<arrow_number; i++) //用成函式
    {
        a_arrow[i].nowpositon.Y=1;
        a_arrow[i].nowpositon.X=(rand()%run_range)+1;//=============++++
        a_arrow[i].arrow_body[0]=' ';
        a_arrow[i].arrow_body[1]='|';
        a_arrow[i].arrow_body[2]='|';
        a_arrow[i].arrow_body[3]='V';
        a_arrow[i].arrow_time=Stdarrow_time+i*speed;

        a_arrow[i].can_shoot=1;
        a_arrow[i].hide=0;
    }

}
void attack_start(struct arrow *a_arrow,struct fighter blue_man)
{
    int i;
    if(time(NULL)>=balance_attack)
    {
        no_attack_locate=((rand()%(run_range/3)))*3+4;    //平衡用
        balance_attack+=blance;
    }
    gotoxy_xy(0,1);
    printf("%d ",no_attack_locate);
    for(i=0; i<arrow_number; i++)
    {
        if(
            ((abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+4))==1//右半腦
              &&(a_arrow[i].nowpositon.Y+3>blue_man.currentposition.Y+1))
             ||
             (abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+3))==1//左半腦
              &&(a_arrow[i].nowpositon.Y+3>blue_man.currentposition.Y+1))
             ||
             (abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+4))>1//右半邊
              &&abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+4))<3
              &&a_arrow[i].nowpositon.Y+3>blue_man.currentposition.Y+2)
             ||(abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+3))>1//右半邊
                &&abs(a_arrow[i].nowpositon.X-(blue_man.currentposition.X+3))<3
                &&a_arrow[i].nowpositon.Y+3>blue_man.currentposition.Y+2))
            &&woody==0
            &&a_arrow[i].can_shoot==1
            &&a_arrow[i].hide==0)
        {
            playerHp--;
            print_man(blue_man.body,color_yellow,blue_man.currentposition);
            woody=1;
            player_gethurt=clock();
            hp_switch=1;

            a_arrow[i].can_shoot=1;

        }
        /***************************************************************************************************************************/

        if(((!(no_attack_locate<a_arrow[i].nowpositon.X+4&&no_attack_locate>a_arrow[i].nowpositon.X-4))||
                (a_arrow[i].nowpositon.Y>1&&no_attack_locate<a_arrow[i].nowpositon.X+4&&no_attack_locate>a_arrow[i].nowpositon.X-4))
                &&a_arrow[i].can_shoot==1)
        {
            attack(a_arrow+i);
        }
        else if(clock()>a_arrow[i].arrow_time)
        {
            a_arrow[i].can_shoot=0;
        }


    }
}
void setconsole_WH(int x,int y)
{
    COORD console_size;//設定最大buffer
    console_size.X=x;
    console_size.Y=y;
    SetConsoleScreenBufferSize(hStdout,console_size);


    SMALL_RECT rc = {0, 0, x-1, y-1};     // 重置窗口位置和大小
    SetConsoleWindowInfo(hStdout, 1, &rc);
}
void miao_messageclear(void)
{
    gotoxy_xy(69,9);
    printf("                                          ");
    gotoxy_xy(69,10);
    printf("                                      ");
    gotoxy_xy(69,11);
    printf("                                         ");
}
void miao_laught(char * miao)
{
    print_miao(miao,color_red);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c---------------------------------%c",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:you can't defeat me|");
    gotoxy_xy(69,11);
    printf("%c-|/------------------------------%c",192,217);
}
void show_hp(void)
{
    COORD hp;
    hp.X=10,hp.Y=1;
    gotoxy(hp);
    printf("your HP:%d\t MiaoMiaoMan HP:%d          ",playerHp,miaoHp);
    hp_switch=0;
    if(playerHp==0)
    {
        gotoxy(hp);
        SetConsoleTextAttribute(hStdout,color_red);
        printf("               you lose...                                 ");
        outwhile=1;
    }
    else if(miaoHp==0)
    {
        SetConsoleTextAttribute(hStdout,color_yellow);
        gotoxy(hp);
        printf("               you win!!!                                 ");
        outwhile=1;
    }
}

void show_bra_message(void)
{
    COORD protect_bra_message;
    protect_bra_message.X=10,protect_bra_message.Y=8;
    gotoxy(protect_bra_message);
    if (bra_broken==0)
    {
        rightest=34;//broken_switch=1;
        if(catched==0)
        {
            printf("MiaoMiaoman set a fun hu jao between you and he,you can't hurt him\n until you know what number he think");
        }
        else
        {
            printf("...............why?   I can not move my body                                                                                                   ");
            Sleep(5000);
        }
        fun_hu_jao();
    }
    else if(broken_switch==1)
    {
        rightest=50;
        printf("now you can attack him!                                                                                     ");
    }

}


void miao_nervous(char * miao)
{
    miao[2*miao_column+18]='O';
    miao[2*miao_column+22]='O';
    miao[3*miao_column+20]='^';
    print_miao(miao,color_red);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:Oh!     |                  ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                ",192,217);
    SetConsoleTextAttribute(hStdout,7);
    broken_switch=0;
    your_attack_time=time(NULL);
}

void time_less_message(void)
{
    gotoxy_xy(20,0);
    printf("run away!!! %d",(your_attack_time+10)-time(NULL));
}

void miao_happy(char * miao,struct fighter *blue_man)
{
    (*blue_man).punch_token=0;
    (*blue_man).control_token=0;
    t1+=999999;
    fun_hu_jao();
    Sleep(2000);
    miao[2*miao_column+18]=96;
    miao[2*miao_column+22]=39;
    miao[3*miao_column+20]='w';
    print_miao(miao,color_red);
    print_man((*blue_man).body,color_blue,(*blue_man).currentposition);
    fun_hu_jao();
    Sleep(2000);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c----------------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:%cNya~HA HA....|                  ",1);
    gotoxy_xy(69,11);
    printf("%c-|/-------------------------%c                ",192,217);
    Sleep(2000);
    catched=1;
    SetConsoleTextAttribute(hStdout,7);
    broken_switch=0;
    your_attack_time=time(NULL);

}

void miao_very_happy(void)
{
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c--------------------------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:%cNya~HA HA HA HAHAHAHAHA|                  ",1);
    gotoxy_xy(69,11);
    printf("%c-|/-----------------------------------%c                ",192,217);
    Sleep(5000);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                      ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:D       |                       ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                     ",192,217);
    Sleep(1000);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                      ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:DI      |                       ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                     ",192,217);
    Sleep(1000);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                      ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:DIE     |                       ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                     ",192,217);
    Sleep(1000);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                      ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:DIE%c    |                       ",3);
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                     ",192,217);
    Sleep(5000);
    SetConsoleTextAttribute(hStdout,color_red);
    gotoxy_xy(44,13);
    printf("      ");
    gotoxy_xy(44,14);
    printf("       ");
    gotoxy_xy(44,15);
    printf("        ");
    gotoxy_xy(44,16);
    printf("        ( ");
    gotoxy_xy(44,17);
    printf("       /   ");
    gotoxy_xy(44,18);
    printf("      /   /");
    gotoxy_xy(44,19);
    printf("     /   / ");
    gotoxy_xy(39,20);
    printf("_________/   /____");
    gotoxy_xy(39,21);
    printf("|");
    gotoxy_xy(56,21);
    printf("|");
    Sleep(1000);
    int i;
    for(i=1; i<9; i++)
    {
        gotoxy_xy(39+i-1,20);
        printf(" ");
        gotoxy_xy(57-i,20);
        printf(" ");
        if(i==7)
        {
            printf("/");
        }
        gotoxy_xy(39+i-2,21);
        printf(" ||");
        gotoxy_xy(56-i,21);
        printf("|| ");
        Sleep(200);
    }
    playerHp=0;
    hp_switch=1;
}

void miao_you_wrong(char *miao)
{
    miao[2*miao_column+18]='+';
    miao[2*miao_column+22]='+';
    miao[3*miao_column+20]='W';
    print_miao(miao,color_red);
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(69,9);
    printf("%c----------------------%c                 ",218,191);
    gotoxy_xy(69,10);
    printf("|miao miao man:wrong!!!|                  ");
    gotoxy_xy(69,11);
    printf("%c-|/-------------------%c                ",192,217);
    SetConsoleTextAttribute(hStdout,7);
}

void game_over(void)
{
    Sleep(5000);
    system("cls");
    if(playerHp==0)
    {
        SetConsoleTextAttribute(hStdout,color_red);
    }
    else
    {
        SetConsoleTextAttribute(hStdout,color_yellow);
    }
    gotoxy_xy(40,16);
    printf(" ======================================");
    gotoxy_xy(40,17);
    printf(" |            Game Over                |");
    gotoxy_xy(40,18);
    printf(" |               ***                   |");
    gotoxy_xy(40,19);
    printf(" |      Thanks For Your Playing        |");
    gotoxy_xy(40,20);
    printf(" ======================================");
    Sleep(5000);
}
void miao_clear(void)
{
    COORD miaostart;
    miaostart.X=43,miaostart.Y=10;
    gotoxy(miaostart);
    int i,j;
    for( i=0 ; i<miao_row ; i++ )
    {
        for( j=0 ; j<miao_column ; j++ )
        {
            printf(" ");

        }
        miaostart.Y++;
        gotoxy(miaostart);
    }
}


void miao_die(void)
{
    SetConsoleTextAttribute(hStdout,color_red);
    COORD miaostart;
    miaostart.X=58,miaostart.Y=20;
    gotoxy(miaostart);
    int i,j,k;

    for( j=0 ; j<5 ; j++ )
    {
        for(k=0; k<5-j; k++)
        {
            printf(" ");
        }
        for(k=0; k<5+j; k++)
        {
            printf("%c",219);
        }
        for(k=0; k<5+j; k++)
        {
            printf("%c",219);
        }
        miaostart.Y++;
        gotoxy(miaostart);
    }
    SetConsoleTextAttribute(hStdout,color_green);
    printf("_  .");
    gotoxy_xy(62,22);
    printf("%c",219);
    gotoxy_xy(68,21);
    printf("%c",219);
    gotoxy_xy(69,20);
    printf("%c",219);
    gotoxy_xy(71,20);
    printf("%c",219);
    gotoxy_xy(63,23);
    printf("%c",219);
    gotoxy_xy(68,23);
    printf("%c",219);
    gotoxy_xy(69,23);
    printf("%c",219);
    gotoxy_xy(71,24);
    printf("%c",219);
    gotoxy_xy(77,24);
    printf("__");
}

void miao_ghost(char *miao)
{
    COORD miaostart;
    miaostart.X=43,miaostart.Y=10;
    gotoxy(miaostart);
    int i,j;
    for( i=0 ; i<4 ; i++ )  //在螢幕上畫出miao==============================================/
    {
        for( j=0 ; j<miao_column ; j++ )
        {
            printf( "%c" , miao[i*miao_column+j] );

        }
        miaostart.Y++;
        gotoxy(miaostart);
    }
    gotoxy_xy(61,9);
    printf("R.I.P");
    gotoxy_xy(43,13);
    printf("              ");
    gotoxy_xy(69,13);
    printf("              ");
    miaostart.X=68,miaostart.Y=14;
    for(i=0; i<5; i++)
    {
        gotoxy_xy(miaostart.X,miaostart.Y+i);
        printf("|");
    }
    miaostart.X=59,miaostart.Y=14;
    for(i=0; i<5; i++)
    {
        gotoxy_xy(miaostart.X+i*2,miaostart.Y+i);
        printf("\\");
    }
}


void man_die(char * body,COORD currentposition)
{
    COORD point=currentposition;
    point.X+=1,point.Y+=1;
    gotoxy(point);
    int i,j;
    SetConsoleTextAttribute(hStdout,color_blue);
    for( i=1 ; i<picture_row ; i++ )  //在螢幕上畫出人(左半)
    {
        for( j=1 ; j<4 ; j++ )
        {
            printf( "%c" , body[i*picture_column+j] );

        }
        point.Y++;
        gotoxy(point);
    }
    SetConsoleTextAttribute(hStdout,color_yellow);
    for(i=1 ; i<picture_row-1 ; i++)
    {
        gotoxy_xy(currentposition.X+4,currentposition.Y+i);
        printf("%c",177);
    }
    SetConsoleTextAttribute(hStdout,color_blue);
    point=currentposition;
    point.X+=5,point.Y+=1;
    gotoxy(point);
    for( i=1 ; i<picture_row ; i++ )  //在螢幕上畫出人(右半)
    {
        for( j=4 ; j<picture_column-1 ; j++ )
        {
            printf( "%c" , body[i*picture_column+j] );

        }
        point.Y++;
        gotoxy(point);
    }
    Sleep(2000);
    point=currentposition;
    for( i=2 ; i<picture_row ; i++ )  //清除人
    {
        for( j=1 ; j<picture_column+1 ; j++ )
        {
            printf(" ");

        }
        point.Y++;
        gotoxy(point);
    }
    int x,y;
    x=currentposition.X;
    y=currentposition.Y;
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(x-1,y+5);
    printf("_");
    gotoxy_xy(x+5,y+6);
    printf("-");
    gotoxy_xy(x+7,y+5);
    printf("%c",220);
    gotoxy_xy(x+1,y+4);
    printf("%c",177);
    gotoxy_xy(x+2,y+4);
    printf("%c",177);
    gotoxy_xy(x+3,y+4);
    printf("%c",177);

    SetConsoleTextAttribute(hStdout,color_blue);
    gotoxy_xy(x,y+5);
    printf("%c",189);
    gotoxy_xy(x+1,y+6);
    printf("%c",192);

    gotoxy_xy(x+1,y+5);
    printf("%c",219);
    gotoxy_xy(x+2,y+6);
    printf("%c",196);
    gotoxy_xy(x+3,y+6);
    printf("%c",190);
    gotoxy_xy(x+2,y+5);
    printf("%c",219);
    gotoxy_xy(x+3,y+5);
    printf("%c",219);
    gotoxy_xy(x+4,y+5);
    printf("%c",220);
    gotoxy_xy(x+5,y+5);
    printf("%c",220);

    SetConsoleTextAttribute(hStdout,7);

}
void mamiru(struct fighter blue_man)
{
    COORD point=blue_man.currentposition;
    int i,j;
    for( i=2 ; i<picture_row ; i++ )  //清除人
    {
        for( j=1 ; j<picture_column ; j++ )
        {
            printf(" ");

        }
        point.Y++;
        gotoxy(point);
    }
    int x,y;
    x=blue_man.currentposition.X;
    y=blue_man.currentposition.Y;
    SetConsoleTextAttribute(hStdout,color_yellow);
    gotoxy_xy(x-2,y+6);
    printf("%c",196);
    gotoxy_xy(x-1,y+6);
    printf("%c",196);
    gotoxy_xy(x,y+6);
    printf("%c",193);
    gotoxy_xy(x,y+5);
    printf("%c",221);
    gotoxy_xy(x+1,y+6);
    printf("%c",196);//blood
    SetConsoleTextAttribute(hStdout,color_blue);
    gotoxy_xy(x,y+4);
    printf("%c",179);
    gotoxy_xy(x+1,y+4);
    printf("%c",220);
    gotoxy_xy(x+1,y+5);
    printf("%c",219);
    gotoxy_xy(x+2,y+6);
    printf("%c",196);
    gotoxy_xy(x+3,y+6);
    printf("%c",190);
    gotoxy_xy(x+2,y+4);
    printf("%c",220);
    gotoxy_xy(x+2,y+5);
    printf("%c",219);
    gotoxy_xy(x+1,y+3);
    printf("_");
    gotoxy_xy(x+2,y+3);
    printf("_");
    gotoxy_xy(x+3,y+3);
    printf("=");
    gotoxy_xy(x+3,y+4);
    printf("%c",220);
    gotoxy_xy(x+3,y+5);
    printf("%c",219);
    gotoxy_xy(x+4,y+4);
    printf("%c",220);
    gotoxy_xy(x+4,y+5);
    printf("%c",220);
    gotoxy_xy(x+5,y+4);
    printf("%c",220);
    gotoxy_xy(x+5,y+5);
    printf("%c",220);
}



void history_number(char *array)
{
    COORD history_posit;
    history_posit.X=85,history_posit.Y=0;
    if(wrong_times>=6)
    {
        history_posit.Y-=((wrong_times%5)+4);
    }
    if(wrong_times==1)
    {
        gotoxy(history_posit);
        printf("history:");
    }
    if(wrong_times>=1)
    {
        history_posit.Y+=wrong_times;
        gotoxy(history_posit);
        int i;
        for(i=0; i<4; i++)
        {
            printf("%c",*(array+i));
        }
        printf("   %dA%dB <last>",a_num,b_num);
        if(history_posit.Y==1)
        {
            gotoxy_xy(97,history_posit.Y+4);
            printf("        ");
        }//清空上一個的<last>}
        else
        {
            gotoxy_xy(97,history_posit.Y-1);    //清空上一個的<last>
            printf("        ");
        }
        numberchange=0;
    }


}

