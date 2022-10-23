/**
 * @file DimikPro_10.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief One day match innings run rate
 * @version 0.1
 * @date 2022-10-23
 * @since SunDay; 12:02 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstdio>
using namespace std;
///Wrong Ans Eaten
int main(int argc, char const *argv[]){
    system("cls");
    unsigned short int T;
    cin>>T;
    const unsigned int totalballsPerInnings = 300;
    int oppositeTeamRuns, ownTeamRuns, unplayedBalls, playedBalls;
    float currentRunRate, askingRunRate, over = 6;
    while(T--){
        cin>>oppositeTeamRuns;
        cin>>ownTeamRuns;
        cin>>unplayedBalls;
        playedBalls = totalballsPerInnings - unplayedBalls;
        currentRunRate = (ownTeamRuns * over)/playedBalls;
        
        askingRunRate = (oppositeTeamRuns - ownTeamRuns + 1);
        askingRunRate = askingRunRate / unplayedBalls;
        askingRunRate = askingRunRate * over;
        printf("%0.2f ", currentRunRate);
        printf("%0.2f\n", askingRunRate);
    }

    return 0;
}
