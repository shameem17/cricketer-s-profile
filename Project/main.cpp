#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
class bating
{
public:
    int oin;
    int tin;
    int ttin;
    int oscore;
    int tscore;
    int ttscore;
    double ostr;
    double tstr;
    double ttstr;
    double oavg;
    double tavg;
    double ttavg;
    int ofi;
    int tfi;
    int ttfi;
    int oh;
    int th;
    int tth;
    int of;
    int tf;
    int ttf;
    int obf;
    int tbf;
    int ttbf;
    int ohs;
    int ths;
    int tths;
    int ono;
    int tno;
    int ttno;
    bating()
    {
        oavg=tavg=ttavg=0;
        ostr=tstr=ttstr=0;
    }
    void display();
};
class bowling
{
public:
    //bowling();
    int  oins;
    int tins;
    int ttins;
    int obb;
    int tbb;
    int ttbb;
    int orun;
    int trun;
    int ttrun;
    int ow;
    int tw;
    int ttw;
    int o5;
    int t5;
    int tt5;
    double oeco;
    double teco;
    double tteco;
    double obavg;
    double tbavg;
    double ttbavg;
    void display();
    bowling()
    {
        oeco=teco=obavg=tbavg=ttbavg=0;
    }

};
class player :virtual public bating,virtual public bowling
{
public:
    string name;
    string born;
    string role;
    string pl;
    int omatch;
    int tmatch;
    int ttmatch;
    void input_info();
    void update_match();
    void display();
    friend double average(int,int,int);
    friend double strike(int,int);
    friend double economy(int,int);
    friend double baverage(int,int);
    void add_file(int);
};
double baverage(int run,int wi)
{
    double a=run;
    double b=wi;
    if(wi!=0)
    {
        return a/b;
    }
    else
    {
        return 0;
    }
}
double average(int score,int inn,int no)
{
    double a=score;
    double b=inn;
    double c=no;
    if(b!=0&&b-c!=0)
    {
        return (a/(b-c));
    }
    else
    {
        return 0;
    }

}
double strike(int run,int ball)
{
    double a=run;
    double b=ball;
    if(b!=0)
    {
        return (a/b)*100;
    }
    else
    {
        return 0;
    }
}
double economy(int run,int ball)
{
    double a=run;
    double b=ball;
    if(b!=0)
    {
        return (a/b)*6;
    }
    else
    {
        return 0;
    }
}
void player:: input_info()
{
    int a;
    cout<<"Enter player name"<<endl;
    cin>>name;
    cout<<"Enter role:\n";
    cin>>role;
    cout<<"Enter birthday"<<endl;
    cin>>born;
    cout<<"Enter Place:"<<endl;
    cin>>pl;
A:
    cout<<"Enter 1 for odi\n\t2 for test\n\t3 for T20\n\t0 to exit"<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<"Enter ODI information"<<endl;
        cout<<"Enter match"<<endl;
        cin>>omatch;
        cout<<"Enter ings"<<endl;
        cin>>oin;
        cout<<"Enter not out"<<endl;
        cin>>ono;
        cout<<"Enter score"<<endl;
        cin>>oscore;
        cout<<"Enter high score"<<endl;
        cin>>ohs;
        cout<<"Enter ball faced"<<endl;
        cin>>obf;
        cout<<"Enter no of hundred"<<endl;
        cin>>oh;
        cout<<"Enter no of fifty"<<endl;
        cin>>ofi;
        cout<<"Enter the ings of bowling"<<endl;
        cin>>oins;
        cout<<"Enter the no of ball bowled"<<endl;
        cin>>obb;
        cout<<"Enter the run given"<<endl;
        cin>>orun;
        cout<<"Enter the wicket gotten"<<endl;
        cin>>ow;
        cout<<"Enter the number of 5 wickets"<<endl;
        cin>>o5;
        oavg=average(oscore,oin,ono);
        ostr=strike(oscore,obf);
        oeco=economy(orun,obb);
        obavg=baverage(orun,ow);
    }
    else if(a==2)
    {
        cout<<"Enter test information"<<endl;
        cout<<"Enter match"<<endl;
        cin>>tmatch;
        cout<<"Enter ings"<<endl;
        cin>>tin;
        cout<<"Enter not out"<<endl;
        cin>>tno;
        cout<<"Enter score"<<endl;
        cin>>tscore;
        cout<<"Enter high score"<<endl;
        cin>>ths;
        cout<<"Enter ball faced"<<endl;
        cin>>tbf;
        cout<<"Enter no of hundred"<<endl;
        cin>>th;
        cout<<"Enter no of fifty"<<endl;
        cin>>tfi;
        cout<<"Enter the ings of bowling"<<endl;
        cin>>tins;
        cout<<"Enter the no of ball bowled"<<endl;
        cin>>tbb;
        cout<<"Enter the run given"<<endl;
        cin>>trun;
        cout<<"Enter the wicket gotten"<<endl;
        cin>>tw;
        cout<<"Enter the number of 5 wickets"<<endl;
        cin>>t5;
        tavg=average(tscore,tin,tno);
        tstr=strike(tscore,tbf);
        teco=economy(trun,tbb);
        tbavg=baverage(trun,tw);
    }
    else if(a==3)
    {
        cout<<"Enter T20 information"<<endl;
        cout<<"Enter match"<<endl;
        cin>>ttmatch;
        cout<<"Enter ings"<<endl;
        cin>>ttin;
        cout<<"Enter not out"<<endl;
        cin>>ttno;
        cout<<"Enter score"<<endl;
        cin>>ttscore;
        cout<<"Enter high score"<<endl;
        cin>>tths;
        cout<<"Enter ball faced"<<endl;
        cin>>ttbf;
        cout<<"Enter no of hundred"<<endl;
        cin>>tth;
        cout<<"Enter no of fifty"<<endl;
        cin>>ttfi;
        cout<<"Enter the ings of bowling"<<endl;
        cin>>ttins;
        cout<<"Enter the no of ball bowled"<<endl;
        cin>>ttbb;
        cout<<"Enter the run given"<<endl;
        cin>>ttrun;
        cout<<"Enter the wicket gotten"<<endl;
        cin>>ttw;
        cout<<"Enter the number of 5 wickets"<<endl;
        cin>>tt5;
        ttavg=average(ttscore,ttin,ttno);
        ttstr=strike(ttscore,ttbf);
        tteco=economy(ttrun,ttbb);
        ttbavg=baverage(ttrun,ttw);
    }
    system("cls");
    if(a!=0)
    {
        goto A;
    }
    else
    {
        cout<<"Do you want to show what you entered(y/n)"<<endl;
        char k;
        cin>>k;
        if(k=='y')
        {
            display();
        }

    }
}
void player:: display()
{
    cout<<"--------------------\n--------------------"<<endl;
    cout<<"Player Name:"<<name<<endl;
    int b;
A:
    cout<<"Press 1 for ODI\n2 for Test\n3 for T20\n0 to exit"<<endl;
    cin>>b;
    if(b==1)
    {
        cout<<"=======ODI======\n==========="<<endl;
        cout<<"-----Batting-----\n-------------------"<<endl<<endl;
        cout<<"Match\tInnings\tNO\tRuns\tBF\tAvg.\tSR.\tHS\t100s\t50s"<<endl;
        cout<<omatch<<"\t"<<oin<<"\t"<<ono<<"\t"<<oscore<<"\t"<<obf<<"\t"<<setprecision(5)<<oavg<<"\t"<<setprecision(5)<<ostr<<"\t"<<ohs<<"\t"<<oh<<"\t"<<ofi<<endl;
        cout<<"------Bowling-------"<<endl;
        cout<<"Match\tInnings\tBall\tRuns\tWI\tEco\tAvg.\t5W"<<endl;
        cout<<omatch<<"\t"<<oins<<"\t"<<obb<<"\t"<<orun<<"\t"<<ow<<"\t"<<setprecision(4)<<oeco<<"\t"<<setprecision(5)<<obavg<<"\t"<<o5<<endl;
    }
    else if(b==2)
    {
        cout<<"------------TEST------------\n---------------------------"<<endl;
        cout<<"Match\tInnings\tNO\tRuns\tBF\tAvg.\tSR.\tHS\t100s\t50s"<<endl;
        cout<<tmatch<<"\t"<<tin<<"\t"<<tno<<"\t"<<tscore<<"\t"<<tbf<<"\t"<<setprecision(5)<<tavg<<"\t"<<setprecision(5)<<tstr<<"\t"<<ths<<"\t"<<th<<"\t"<<tfi<<endl;
        cout<<"------Bowling-------"<<endl;
        cout<<"Match\tInnings\tBall\tRuns\tWI\tEco\tAvg.\t5W"<<endl;
        cout<<tmatch<<"\t"<<tins<<"\t"<<tbb<<"\t"<<trun<<"\t"<<tw<<"\t"<<setprecision(4)<<teco<<"\t"<<setprecision(5)<<tbavg<<"\t"<<t5<<endl;
    }
    else if(b==3)
    {
        cout<<"------------T20------------\n----------------------------"<<endl;
        cout<<"-----Batting-----\n-------------------"<<endl<<endl;
        cout<<"Match\tInnings\tNO\tRuns\tBF\tAvg.\tSR.\tHS\t100s\t50s"<<endl;
        cout<<ttmatch<<"\t"<<ttin<<"\t"<<ttno<<"\t"<<ttscore<<"\t"<<ttbf<<"\t"<<setprecision(5)<<ttavg<<"\t"<<setprecision(5)<<ttstr<<"\t"<<tths<<"\t"<<tth<<"\t"<<ttfi<<endl;
        cout<<"------Bowling-------"<<endl;
        cout<<"Match\tInnings\tBall\tRuns\tWI\tEco\tAvg.\t5W"<<endl;
        cout<<ttmatch<<"\t"<<ttins<<"\t"<<ttbb<<"\t"<<ttrun<<"\t"<<ttw<<"\t"<<setprecision(4)<<tteco<<"\t"<<setprecision(5)<<ttbavg<<"\t"<<tt5<<endl;
    }

    if(b!=0)
    {
        goto A;
    }
}
void player:: add_file(int a)
{

    ofstream fout;
    if(a==1)
    {
        fout.open("tamim.txt",ios::trunc);
    }
    else if(a==2)
    {
        fout.open("sabbir.txt",ios::trunc);
    }
     else if(a==3)
    {
        fout.open("soumya.txt",ios::trunc);
    }
     else if(a==4)
    {
        fout.open("shakib.txt",ios::trunc);
    }
    else if(a==5)
    {
        fout.open("mahmud.txt",ios::trunc);
    }
     else if(a==6)
    {
        fout.open("mosaddek.txt",ios::trunc);
    }
     else if(a==7)
    {
        fout.open("mehedi.txt",ios::trunc);
    }
     else if(a==8)
    {
        fout.open("saif.txt",ios::trunc);
    }
     else if(a==9)
    {
        fout.open("musfiq.txt",ios::trunc);
    }
     else if(a==10)
    {
        fout.open("liton.txt",ios::trunc);
    }
     else if(a==11)
    {
        fout.open("mithun.txt",ios::trunc);
    }
     else if(a==12)
    {
        fout.open("mash.txt",ios::trunc);
    }
     else if(a==13)
    {
        fout.open("fizz.txt",ios::trunc);
    }
     else if(a==14)
    {
        fout.open("rubel.txt",ios::trunc);
    }
     else if(a==15)
    {
        fout.open("rahi.txt",ios::trunc);
    }
    fout<<name<<"\n";
    fout<<"Bangladesh\n\n\n";
    fout<<"Personal Information\n";
    fout<<"Birthday:";
    fout<<born<<"\n";
    fout<<"From: "<<pl<<endl;
    fout<<"Role: "<<role;
    fout<<"\n\n\n";
    fout<<"Batting Career Summary\n\n";
    fout<<"\tMatch\tInnings\tNO\tRuns\tBF\tAvg.\tSR.\tHS\t100s\t50s\n";
    fout<<"ODI \t"<<omatch<<"\t"<<oin<<"\t"<<ono<<"\t"<<oscore<<"\t"<<obf<<"\t"<<setprecision(4)<<oavg<<"\t"<<setprecision(5)<<ostr<<"\t"<<ohs<<"\t"<<oh<<"\t"<<ofi<<"\n";
    fout<<"TEST\t"<<tmatch<<"\t"<<tin<<"\t"<<tno<<"\t"<<tscore<<"\t"<<tbf<<"\t"<<setprecision(4)<<tavg<<"\t"<<setprecision(5)<<tstr<<"\t"<<ths<<"\t"<<th<<"\t"<<tfi<<"\n";
    fout<<"T20 \t"<<ttmatch<<"\t"<<ttin<<"\t"<<ttno<<"\t"<<ttscore<<"\t"<<ttbf<<"\t"<<setprecision(4)<<ttavg<<"\t"<<setprecision(5)<<ttstr<<"\t"<<tths<<"\t"<<tth<<"\t"<<ttfi<<"\n";
    fout<<"\n\n\n";
    fout<<"Bowling Career Summary\n";
    fout<<"\tMatch\tInnings\tBall\tRuns\tWI\tEco\tAvg.\t5W"<<endl;
    fout<<"ODI \t"<<omatch<<"\t"<<oins<<"\t"<<obb<<"\t"<<orun<<"\t"<<ow<<"\t"<<setprecision(4)<<oeco<<"\t"<<setprecision(5)<<obavg<<"\t"<<o5<<"\n";
    fout<<"TEST\t"<<tmatch<<"\t"<<tins<<"\t"<<tbb<<"\t"<<trun<<"\t"<<tw<<"\t"<<setprecision(4)<<teco<<"\t"<<setprecision(5)<<tbavg<<"\t"<<t5<<"\n";
    fout<<"T20 \t"<<ttmatch<<"\t"<<ttins<<"\t"<<ttbb<<"\t"<<ttrun<<"\t"<<ttw<<"\t"<<setprecision(4)<<tteco<<"\t"<<setprecision(5)<<ttbavg<<"\t"<<tt5<<"\n";

    fout.close();
}

void show(int a)
{
    ifstream fin;
    if(a==1)
    {
        fin.open("tamim.txt");
    }
    else if(a==2)
    {
        fin.open("sabbir.txt");
    }
     else if(a==3)
    {
        fin.open("soumya.txt");
    }
     else if(a==4)
    {
        fin.open("shakib.txt");
    }
    else if(a==5)
    {
        fin.open("mahmud.txt");
    }
     else if(a==6)
    {
      fin.open("mosaddek.txt");
    }
     else if(a==7)
    {
        fin.open("mehedi.txt");
    }
     else if(a==8)
    {
        fin.open("saif.txt");
    }
     else if(a==9)
    {
        fin.open("musfiq.txt");
    }
     else if(a==10)
    {
        fin.open("liton.txt");
    }
     else if(a==11)
    {
        fin.open("mithun.txt");
    }
     else if(a==12)
    {
        fin.open("mash.txt");
    }
     else if(a==13)
    {
        fin.open("fizz.txt");
    }
     else if(a==14)
    {
       fin.open("rubel.txt");
    }
     else if(a==15)
    {
        fin.open("rahi.txt");
    }
    const int n=80;
    char line[n];
    while(fin)
    {
        fin.getline(line,n);
        cout<<line<<endl;
    }
    fin.close();
}
void Record()
{
     A:
          string nam;
          getch();
          system("cls");
        cout<<"Enter the player name"<<endl;
        cin>>nam;
        system("cls");
        if(nam=="tamim"||nam=="Tamim")
         {
             show(1);
         }
         else if(nam=="sabbir"||nam=="Sabbir")
         {
              show(2);
         }
         else if(nam=="soumya"||nam=="Soumya")
         {
              show(3);
         }
         else if(nam=="shakib"||nam=="Shakib")
         {
              show(4);
         }
         else if(nam=="mahmudullah"||nam=="Mahmudullah")
         {
              show(5);
         }
         else if(nam=="mosaddek"||nam=="Mosaddek")
         {

            show(6);
         }
         else if(nam=="mehidy"||nam=="mehedi"||nam=="Mehidy")
         {
             show(7);
         }
         else if(nam=="saif"||nam=="Saif"||nam=="Saifuddin"||nam=="saifuddin")
         {
              show(8);
         }
         else if(nam=="Musfiqur"||nam=="Musfiq"||nam=="musfiqur"||nam=="musfiq")
         {
              show(9);
         }
         else if(nam=="Liton"||nam=="liton")
         {
              show(10);
         }
         else if(nam=="Mithun"||nam=="mithun")
         {
              show(11);
         }
         else if(nam=="Mash"||nam=="mash"||nam=="Mashrafe"||nam=="mashrafe")
         {
              show(12);
         }
         else if(nam=="Fizz"||nam=="fizz"||nam=="Mustafiz"||nam=="mustafiz"||nam=="mustafizur")
         {
              show(13);
         }
         else if(nam=="rubel"||nam=="Rubel")
         {
              show(14);
         }
         else if(nam=="Abu"||nam=="rahi"||nam=="abu"||nam=="Rahi")
         {
             show(15);
         }
         else
         {
             cout<<"Wrong Name!Can't find Player"<<endl;
             cout<<"Search again"<<endl;
             goto A;
         }
         getch();
         system("cls");
         cout<<"Do you want to show again(y/n)"<<endl;
         char ch;
         cin>>ch;
         if(ch=='y')
         {
            goto A;
         }

}
int main()
{
    player tamim,shakib,musfiq,sabbir,soumya,mahmud,mehedi,mosa,saif,liton,mithun,mash,rubel,fiz,rahi;
    int a;
    string stor="@1234";
    cout<<"\n\n\n\n\n\t\t\t\t===================================\n\t\t\t\tWELCOME TO BD CRICKET TEAM MANAGEMENT\n\t\t\t\t===================================\n";
    getch();
    system("cls");
    string str;
    cout<<"Press 1 to enter as visitor\n\t2 to enter as editor"<<endl;
    cin>>a;
    if(a==1)
    {
       Record();

    }
    else if(a==2)
    {
       B:
        string pas;
        cout<<"Enter Password"<<endl;
        cin>>pas;
        if(stor==pas)
        {
    C:
        cout<<"Press 1 to display\n\t2 to edit\n\t0 to logout\n";
        int b;
        cin>>b;
        if(b==0)
        {
            cout<<"Logging Out"<<endl;
            return 0;
        }
        else if(b==1)
        {
            Record();
            getch();
        system("cls");
        cout<<"Do you want more operations(y/n)"<<endl;
        char c;
        cin>>c;
        if(c=='y')
        {
            goto C;
        }
        else
        {
            cout<<"Loging Out"<<endl;
            return 0;
        }

        }
        else if(b==2)
        {
            system("cls");
         cout << "Please enter player name: \n";
         cin>>str;
         if(str=="tamim"||str=="Tamim")
         {
             tamim.input_info();
             tamim.add_file(1);
         }
         else if(str=="sabbir"||str=="Sabbir")
         {
             sabbir.input_info();
             sabbir.add_file(2);
         }
         else if(str=="soumya"||str=="Soumya")
         {
             soumya.input_info();
             soumya.add_file(3);
         }
         else if(str=="shakib"||str=="Shakib")
         {
             shakib.input_info();
             shakib.add_file(4);
         }
         else if(str=="mahmudullah"||str=="Mahmudullah")
         {
             mahmud.input_info();
             mahmud.add_file(5);
         }
         else if(str=="mosaddek"||str=="Mosaddek")
         {
             mosa.input_info();
             mosa.add_file(6);
         }
         else if(str=="mehidy"||str=="mehedi"||str=="Mehidy")
         {
             mehedi.input_info();
             mehedi.add_file(7);
         }
         else if(str=="saif"||str=="Saif"||str=="Saifuddin"||str=="saifuddin")
         {
             saif.input_info();
             saif.add_file(8);
         }
         else if(str=="Musfiqur"||str=="Musfiq"||str=="musfiqur"||str=="musfiq")
         {
             musfiq.input_info();
             musfiq.add_file(9);
         }
         else if(str=="Liton"||str=="liton")
         {
             liton.input_info();
             liton.add_file(10);
         }
         else if(str=="Mithun"||str=="mithun")
         {
             mithun.input_info();
             mithun.add_file(11);
         }
         else if(str=="Mash"||str=="mash"||str=="Mashrafe"||str=="mashrafe")
         {
             mash.input_info();
             mash.add_file(12);
         }
         else if(str=="Fizz"||str=="fizz"||str=="Mustafiz"||str=="mustafiz"||str=="mustafizur")
         {
             fiz.input_info();
             fiz.add_file(13);
         }
         else if(str=="rubel"||str=="Rubel")
         {
             rubel.input_info();
             rubel.add_file(14);
         }
         else if(str=="Abu"||str=="rahi"||str=="abu"||str=="rahi")
         {
             rahi.input_info();
             rahi.add_file(15);
         }
         else
         {
             cout<<"Wrong name"<<endl;
         }

        }
        getch();
        system("cls");
        cout<<"Do you want more operations(y/n)"<<endl;
        char c;
        cin>>c;
        if(c=='y')
        {
            goto C;
        }
        else
        {
            cout<<"Logging Out"<<endl;
            return 0;
        }
        }
        else
        {
            cout<<"Wrong Password"<<endl;
            cout<<endl;
            goto B;
        }
    }
    else
    {
        cout<<"Wrong Input"<<endl;
        return 0;
    }
    getch();
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t=========\n\t\t\t\tTHANK YOU\n\t\t\t\t=========\n"<<endl<<endl<<endl;
    getch();
}
