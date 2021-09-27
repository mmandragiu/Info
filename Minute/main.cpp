#include <fstream>

using namespace std;
ifstream in("minute.in");
ofstream out("minute.out");

int main()
{
    int h1=0,m1=0, h2=0,m2=0, minuteInterval = 0, minuteStop = 0;
    in>>h1>>m1>>h2>>m2;
    minuteInterval = h2*60+m2;
    for(int i=1; i <= minuteInterval; i++)
    {
        if(m1 >= 60)
        {
            m1 = m1%60;
            h1++;
        }
        h1 = h1%12;
        if((m1==0 && h1 == 0) || h1*5 == m1)
        {
            if(minuteStop == 0)
                minuteStop = 1;
            else
                minuteStop++;

            if(minuteStop == 6)
            {
                minuteStop = 0;
                m1++;
            }
        }
        else
            m1++;
    }
        if(m1 >= 60)
        {
            m1 = m1%60;
            h1++;
        }
        h1 = h1%12;

    out<<h1<<" "<<m1;
    return 0;
}
