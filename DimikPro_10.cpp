///Wrong Ans Eaten
#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int T;
    double curent_rr,asking_rr,r1,r2,B,ball_Played;
    cin>>T;
    while(T--)
    {
        cin>>r1>>r2>>B;
        ball_Played = 300 - B;
        curent_rr = (r2 / ball_Played) * 6;
        asking_rr = ((r1-r2 + 1)/B)* 6;
        printf("%0.2lf %0.2lf\n",curent_rr,asking_rr);

        curent_rr = 0;
        asking_rr = 0;
    }

    return 0;
}
