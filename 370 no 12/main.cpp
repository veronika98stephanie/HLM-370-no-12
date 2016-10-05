#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <array>

using namespace std;

static int nJudgeOne;
static int nJudgeTwo;
static int nJudgeThree;
static int nJudgeFour;
static int nJudgeFive;
int nLow;
int nHigh;
int nFinalScore;
int nJudgeScores [] = {nJudgeOne, nJudgeTwo, nJudgeThree, nJudgeFour, nJudgeFive};
int nArrayLength = sizeof(nJudgeScores) / sizeof(nJudgeScores[0]);

void getJudgeData ()
{
    cout << "Please input the scores for the contestant" << endl;
    for (int a = 0; a < nArrayLength; a++)
    {
        cout << "Judge " << a + 1 << "'s score: ";
        cin >> nJudgeScores [a];
        if(nJudgeScores [a] < 0 || nJudgeScores [a] > 10)
        {
            cout << "Exiting program";
            return;
        }
    }
}
