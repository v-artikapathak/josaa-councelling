#include <stdio.h>
#include <string.h>
#include <time.h>
// ANSI escape codes for text colors
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"
#define FONT "\033[7;1m"
// STRUCTURE FOR BRANCH
typedef struct
{
    int brnch;      //BRANCH CODE
    char branch[50];//BRANCH NAME
} BRANCH;

typedef struct
{
     int clg;          // COLLEGE CODE
    char college[50]; // COLLEGE NAME
} COLLEGE;

/*-------------------------IIT BOMBAY----------------------*/
int iitb(int ar, int b, int round)
{
    if (round = 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 60)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1382)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3418)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3766)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 60)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1382)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3446)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3766)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 60)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1382)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3446)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3766)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 60)
                cutoff_cleared = 1;
        }
        
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1382)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3446)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3776)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 60)
                cutoff_cleared = 1;
        }
        
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1382)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3446)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3766)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 61)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 369)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1406)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 3471)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 3783)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------IIT KANPUR----------------------*/
int iitk(int ar, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 236)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1360)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2962)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4413)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5796)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6206)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 236)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1360)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2987)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4429)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5912)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6383)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 236)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1360)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2987)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4429)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5912)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6406)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 236)
                cutoff_cleared = 1;
        }
        
        else if (b == 5)
        {
            if (ar <= 1360)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2987)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4441)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5912)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6406)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 236)
                cutoff_cleared = 1;
        }
        
        else if (b == 5)
        {
            if (ar <= 1360)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2996)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4441)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5952)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6406)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 237)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1368)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3155)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4649)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6297)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6535)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------IIT MADRAS----------------------*/
int iitm(int ar, int b, int round)
{
    // int cutoff_cleared = 0;
    if (round == 1)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4334)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5855)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 2)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4477)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5927)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 3)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4477)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5927)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 4)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4477)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5927)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 5)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4477)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5927)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 6)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 167)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 985)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4477)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 5927)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------IIT DELHI----------------------*/
int iitd(int ar, int b, int round)
{
    // int cutoff_cleared = 0;
    if (round == 1)
    {
         int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1865)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2291)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1882)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2343)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1882)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2343)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1882)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2343)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1882)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2343)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 102)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 306)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 574)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 1882)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 2343)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 4261)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    // return cutoff_cleared;
}
/************************** IIT ROOKEE ************************/
int iitr(int ar, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 408)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1556)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1408)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2103)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3685)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4818)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <=6421)
                cutoff_cleared = 1;
        }
         else if (b == 9)
        {
            if (ar <= 6833)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 408)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1556)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1412)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2103)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3745)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4962)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6523)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6920)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 3)
    {

        if (b == 1)
        { // CSE branch
            if (ar <= 408)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1557)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1419)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2104)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3754)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4969)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6523)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6920)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 408)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1557)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1422)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2104)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3754)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4969)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6523)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6920)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 408)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1557)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1422)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2104)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3757)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4969)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6523)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6920)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 413)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 822)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1680)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1443)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2135)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4189)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5075)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6853)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 7246)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/************************** IIT KHARAGPUR ************************/
int iitkgp(int ar, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 295)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1323)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1138)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1666)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3097)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4474)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <=5952)
                cutoff_cleared = 1;
        }
         else if (b == 9)
        {
            if (ar <= 6380)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 295)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1323)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1138)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1693)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3122)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4496)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6080)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6557)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 3)
    {

        if (b == 1)
        { // CSE branch
            if (ar <= 295)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1323)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1138)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1693)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3122)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4496)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6106)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6627)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 295)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1323)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1140)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1702)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3122)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4496)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6106)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6627)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 295)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1323)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1140)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1702)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3137)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4510)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6113)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6640)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 303)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1335)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1145)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 1805)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 3350)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 4846)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 6556)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 6920)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*--------------------------IIT Guwahati--------------------------------------*/
int iitg(int ar, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 924)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1041)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1690)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2196)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4692)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5611)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7300)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 924)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1048)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1690)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2197)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4832)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5766)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7300)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 3)
    {

        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 924)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1048)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1690)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2197)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4832)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5768)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7491)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 924)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1048)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1690)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2197)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4832)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5768)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7491)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 924)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1048)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1690)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2197)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 4857)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 5821)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7563)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 589)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 951)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 1061)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (ar <= 1711)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 2387)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 5088)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 6144)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 7791)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*----------------------------IIT Patna-------------------------------------*/
int iitp(int ar, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2500)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3488)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5461)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6282)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9208)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 11306)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 12097)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13141)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2536)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3550)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5747)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6575)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9726)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 11876)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 12701)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13875)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2536)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3550)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5747)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6631)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9795)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 11992)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 12736)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13875)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2536)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3550)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5747)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6631)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9795)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 11992)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 12758)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13875)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2536)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3602)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5747)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6682)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9808)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 12086)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 12906)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13875)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 2536)
                cutoff_cleared = 1;
        }
        else if (b == 2)
        {
            if (ar <= 3602)
                cutoff_cleared = 1;
        }
        else if (b == 3)
        {
            if (ar <= 5747)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (ar <= 6682)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (ar <= 9808)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (ar <= 12086)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (ar <= 13100)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (ar <= 13900)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------NIT CALICUT----------------------*/
int nittrichy(int mr, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        {
            if (mr <= 759)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3288)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 5604)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 8445)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 12165)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 16600)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 19721)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        {
            if (mr <= 759)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3522)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 5928)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 9593)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 13375)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 18326)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 20619)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 3)
    {
        if (b == 1)
        {
            if (mr <= 858)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3522)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 5928)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 9593)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 13375)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 18601)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 20619)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 4)
    {

        if (b == 1)
        {
            if (mr <= 858)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3522)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 5965)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 9593)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 13375)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 18326)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 20619)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        {
            if (mr <= 879)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3522)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6141)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 9593)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 13375)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 18601)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 20672)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        {
            if (mr <= 996)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3691)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6636)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 10181)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 15269)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 19611)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 22850)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
}
/*-------------------------NIT KARNATAKA----------------------*/
int nitkarnataka(int mr, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        {
            if (mr <= 1083)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2152)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 3971)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 5928)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 10840)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 13457)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 18967)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 19538)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        {
            if (mr <= 1106)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2222)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 4227)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6496)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 11407)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 14427)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 20303)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 21105)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 3)
    {
        if (b == 1)
        {
            if (mr <= 1180)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2303)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 4269)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6604)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 11596)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 14427)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 20436)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 21105)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        {
            if (mr <= 1180)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2303)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 4495)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6636)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 11596)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 14427)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 20436)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 21105)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 5)
    {

        if (b == 1)
        {
            if (mr <= 1311)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2303)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 4598)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 6752)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 11596)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 14427)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 20479)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 21193)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 6)
    {

        if (b == 1)
        {
            if (mr <= 1689)
                cutoff_cleared = 1;
        }
        if (b == 2)
        {
            if (mr <= 2677)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 5179)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 7316)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 12255)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 15511)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 22886)
                cutoff_cleared = 1;
        }
        else if (b == 9)
        {
            if (mr <= 22615)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
}
/*-------------------------NIT ROURKELA----------------------*/
int nitrourkela(int mr, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2535)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 5667)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // EE
            if (mr <= 11168)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 14020)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        { // CHEMICAL
            if (mr <= 17607)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 22004)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2692)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6009)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 12352)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 15028)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 18405)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 24933)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 3)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2695)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6009)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 12367)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 15100)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 18405)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 24933)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2695)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6009)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 12367)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 15100)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 18405)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 25032)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2715)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6009)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 12367)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 15393)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 18405)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 25594)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        { // CSE branch
            if (mr <= 2883)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6725)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 12995)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 16717)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 20120)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 26812)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------NIT WARANGAL----------------------*/
int nitwarangal(int mr, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 1764)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 4984)
                cutoff_cleared = 1;
        }

        else if (b == 5)
        { // EE
            if (mr <= 7536)
                cutoff_cleared = 1;
        }

        else if (b == 6)
        { // MECHANICAL
            if (mr <= 12370)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        { // CHEMICAL
            if (mr <= 15872)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 21310)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 1820)
                cutoff_cleared = 1;
        }

        else if (b == 4)
        {
            if (mr <= 5377)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 7894)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 13457)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 16369)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 23258)
                cutoff_cleared = 1;
        }
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 1904)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 5379)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 7894)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 13520)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 16369)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 23562)
                cutoff_cleared = 1;
        }
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 1904)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 5560)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 7917)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 13520)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 16369)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 23562)
                cutoff_cleared = 1;
        }
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 2027)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 5580)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 7928)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 13520)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 16369)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 23603)
                cutoff_cleared = 1;
        }
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (mr <= 2112)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        {
            if (mr <= 6119)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        {
            if (mr <= 9370)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        {
            if (mr <= 14937)
                cutoff_cleared = 1;
        }
        else if (b == 7)
        {
            if (mr <= 20089)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        {
            if (mr <= 25762)
                cutoff_cleared = 1;
        }
    }
}
/*---------------------- NIT PATNA-----------------------------*/
int nitp(int mr, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 11770)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 18000)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 24411)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 30087)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 39843)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 12862)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 19011)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 26459)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 34009)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 43119)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 12866)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 19235)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 26545)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 34845)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 44280)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 12878)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 19300)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 26545)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 34941)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 44342)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 13017)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 19363)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 27355)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 35081)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 44709)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 13876)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ECE
            if (mr <= 20111)
                cutoff_cleared = 1;
        }
        else if (b == 5)
        { // ELECTRICAL
            if (mr <= 29831)
                cutoff_cleared = 1;
        }
        else if (b == 6)
        { // MECHANICAL
            if (mr <= 38480)
                cutoff_cleared = 1;
        }
        else if (b == 8)
        { // CIVIL
            if (mr <= 47354)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------IIIT HYDERABAD----------------------*/
int iiith(int mr, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 445)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 1005)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 1264)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 4606)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 1398)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 5439)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 1536)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 6251)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 2017)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 10318)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE
            if (mr <= 2612)
                cutoff_cleared = 1;
        }
        else if (b == 4)
        { // ELECTRICAL COMMUNICATION
            if (mr <= 11712)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
}
/*-------------------------NIT CALICUT--------------------------*/
int nit_calicut(int mr, int b, int round){
    int cutoff_cleared = 0;
//  For round 1
    if(round == 1){
        if( b == 1){
            //CSE
            if(mr <= 3843){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 7403){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 12119){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 17977){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 23530){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 28999){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 29479){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 2
    else if (round  == 2){
        if( b == 1){
            //CSE
            if(mr <= 4062){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 7967){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 13100){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 19611){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 25914){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 32394){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 35971){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 3
    else if (round  == 3){
        if( b == 1){
            //CSE
            if(mr <= 4067){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 7967){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 13110){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 19636){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 26264){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 33123){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 35971){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 4
    else if (round  == 4){
        if( b == 1){
            //CSE
            if(mr <= 4195){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 7967){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 13110){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 19636){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 26264){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 33123){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 35971){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 5
    else if (round  == 5){
        if( b == 1){
            //CSE
            if(mr <= 4203){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 8038){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 13569){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 20006){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 26539){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 33748){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 36934){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 6
    else if (round  == 6){
        if( b == 1){
            //CSE
            if(mr <= 4521){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 9004){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 14988){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 23029){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 29246){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 36937){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 40391){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
}
/*-------------------------NIT NAGPUR----------------------------*/
int nit_nagpur(int mr, int b, int round){
    int cutoff_cleared = 0;
//  For round 1
    if(round == 1){
        if( b == 1){
            //CSE
            if(mr <= 4760){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 9056){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 13644){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 20088){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 25734){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 30764){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 35338){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 2
    else if(round == 2){
        if( b == 1){
            //CSE
            if(mr <= 5189){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 9784){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 14848){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 22032){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 28135){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 34817){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 39210){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 3
    else if(round == 3){
        if( b == 1){
            //CSE
            if(mr <= 5189){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 9784){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 14953){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 22070){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 28135){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 34869){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 39728){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 4
    else if(round == 4){
        if( b == 1){
            //CSE
            if(mr <= 5189){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 9860){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 14953){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 22070){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 28316){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 34869){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 39902){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 5
    else if(round == 5){
        if( b == 1){
            //CSE
            if(mr <= 5218){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 10193){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 15028){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 22471){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 28925){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 36097){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 39987){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
//  For round 6
    else if(round == 6){
        if( b == 1){
            //CSE
            if(mr <= 5642){
                cutoff_cleared = 1;
            }
        }
        else if (b == 4){
            //ECE
            if(mr <= 11131){
                cutoff_cleared = 1;
            }
        }
        else if (b == 5){
            //EEE
            if(mr <= 17067){
                cutoff_cleared = 1;
            }
        }
        else if (b == 6){
            //MECHANICAL
            if(mr <= 23541){
                cutoff_cleared = 1;
            }
        }
        else if (b == 7){
            //CHEMICAL 
            if(mr <= 31771){
                cutoff_cleared = 1;
            }
        }
        else if (b == 8){
            //CIVIL
            if(mr <= 38128){
                cutoff_cleared = 1;
            }
        }
        else if (b == 9){
            //MME
            if(mr <= 43344){
            cutoff_cleared =1;
            }
        }
        return cutoff_cleared;
    }
}
/*---------------------------IIIT DELHI-------------------------------------------*/
int iiitd(int ar, int b, int round)
{
    int cutoff_cleared = 0;
    if (round == 1)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 9893)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 2942)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applied mathematics
        {
            if (ar <= 8455)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 17527)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 2)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 16002)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 5178)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applied mathematics
        {
            if (ar <= 13376)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 25049)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 3)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 8385)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 6427)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applied mathematics
        {
            if (ar <= 13376)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication eng.
        {
            if (ar <= 25840)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 4)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 10347)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 8683)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applied mathematics
        {
            if (ar <= 16114)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 29806)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 5)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 11404)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 10118)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applies mathematics
        {
            if (ar <= 18421)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 32346)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    if (round == 6)
    {
        if (b == 1)
        { // CSE branch
            if (ar <= 14202)
                cutoff_cleared = 1;
        }
        else if (b == 2) // computer science and artificial intelligence
        {
            if (ar <= 12879)
                cutoff_cleared = 1;
        }
        else if (b == 3) // computer science and applied mathematics
        {
            if (ar <= 21745)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 34253)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
}
/*-------------------------IIIT  GUWAHATI-----------------------------------*/
int iiitg(int ar, int b, int round)
{
    if (round == 1)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 17500)
                cutoff_cleared = 1;
        }
        else if (b == 4) //
        {
            if (ar <= 26358)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    else if (round == 2)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 18499)
                cutoff_cleared = 1;
        }
        else if (b == 4) /// Electronics and communication Eng.
        {
            if (ar <= 28188)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 3)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 18499)
                cutoff_cleared = 1;
        }
        else if (b == 4) /// Electronics and communication Eng.
        {
            if (ar <= 28723)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 4)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 18534)
                cutoff_cleared = 1;
        }
        else if (b == 4) /// Electronics and communication Eng.
        {
            if (ar <= 28951)
                cutoff_cleared = 1;
        }
        return cutoff_cleared;
    }
    else if (round == 5)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 18653)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 29047)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
    else if (round == 6)
    {
        int cutoff_cleared = 0;
        if (b == 1)
        { // CSE branch
            if (ar <= 20388)
                cutoff_cleared = 1;
        }
        else if (b == 4) // Electronics and communication Eng.
        {
            if (ar <= 30922)
                cutoff_cleared = 1;
        }

        return cutoff_cleared;
    }
}

void sleepMilliseconds(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

void PRINT(int t)
{
    char* text;
    if(t==1)
    text = FONT "*******JOINT SEAT ALLOCATION AUTHORITY*******" RESET;
    else if(t==2)
     text = FONT "For Choice of Institues, Enter:\n1 for IIT Bombay \n2 for IIT Delhi \n3 for IIT Madras \n4 for IIT Kanpur \n5 for IIT Roorkee \n6 for IIT Kharagpur \n7 for IIT Guwahati \n8 for IIT Patna \n9 for NIT Trichy \n10 for NIT Karnatak \n11 for NIT Rourkela \n12 for NIT Warangal \n13 for NIT Calicut \n14 for NIT Nagpur \n15 for NIT Patna \n16 for IIIT Hyderabad \n17 for IIIT Delhi \n18 for IIIT Guwahati\n" RESET;
    else if(t==3)
     text = FONT "\nFor Choice of Brances, Enter: \n1 for Computer Science Engineering \n2 for Artificial intelligence and Data Science \n3 for Mathematics and Computing \n4 for Electronics and Communication Engineering \n5 for Electrical Engineering \n6 for Mechanical Engineering \n7 for Chemcial Engineering \n8 for Civil Engineering \n9 for Metalurgical and Materials Engineering\n" RESET;
     else if(t==4)
      text = FONT "******* ROUND 1 *******\n" RESET;
       else if(t==5)
      text = FONT "******* ROUND 2 *******\n" RESET;
       else if(t==6)
      text = FONT "******* ROUND 3 *******\n" RESET;
       else if(t==7)
      text = FONT "******* ROUND 4 *******\n" RESET;
       else if(t==8)
      text = FONT "******* ROUND 5 *******\n" RESET;
       else if(t==9)
      text = FONT "******* ROUND 6 *******\n" RESET;
    int delay = 1; // Delay in milliseconds (100 milliseconds = 0.1 seconds)

    int i = 0;
    while (text[i] != '\0') {
        putchar(text[i]);
        fflush(stdout); // Flush the output to ensure the character is printed immediately
        sleepMilliseconds(delay); // Delay between characters
        i++;
    }
}
int main()
{
    PRINT(1);
    printf("\n");
    printf("\n");
    int ar; // advance rank;
    int mr; // mains rank;
    char desired_clg[7][50], desired_branch[7][50];
    strcpy(desired_branch[0], "");
    strcpy(desired_clg[0], "");
    printf(FONT "Enter Rank in JEE Mains: " RESET);
    scanf("%d", &mr);
    printf(FONT "Enter Rank in JEE Advance: " RESET);
    scanf("%d", &ar);
    int n; // no. of choices;
    printf("\n");
    printf(GREEN FONT "Enter no. of choices: ");
    scanf("%d", &n);
    int found=0;
    int round=1;
    int r[50];
    r[0]=0;r[1]=0;
    int cr[7] = {0, 0, 0, 0, 0, 0, 0}, br[7] = {0, 0, 0, 0, 0, 0, 0};
    COLLEGE c[50];
    BRANCH b[50];
    printf(CYAN "\nChoice Filling Guidelines:-\n" RESET);
    // printf(GREEN "For Choice of Institues, Enter:\n1 for IIT Bombay \n2 for IIT Delhi \n7 for IIT Guwahati \n8 for IIT Patna.........and so on \n" RESET);
    // printf(GREEN "For Choice of Brances, Enter: \n1 for Computer Science \n2 for AI \n3 for Electrical .........and so on \n" RESET);
    PRINT(2);
    PRINT(3);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        printf(MAGENTA FONT "Choice Number: %d\n" RESET, i + 1);
        printf(BLUE FONT "Enter Institute Name(Shortform): \n" RESET);
        scanf("%s", c[i].college);
        printf(BLUE FONT "Enter Institute Code: \n" RESET);
        scanf("%d", &c[i].clg);
        printf(BLUE FONT "Enter Branch(Shortform): \n" RESET);
        scanf("%s", b[i].branch);
        printf(BLUE FONT "Enter Branch Code: \n" RESET);
        scanf("%d", &b[i].brnch);
        switch (c[i].clg)
        {
        case 1:
        {
            flag = iitb(ar, b[i].brnch, 1);
            break;
        }
        case 2:
        {
            flag = iitd(ar, b[i].brnch, 1);
            break;
        }
        case 3:
        {
            flag = iitm(ar, b[i].brnch, 1);
            break;
        }
        case 4:
        {
            flag = iitk(ar, b[i].brnch, 1);
            break;
        }
        case 5:
        {
            flag = iitr(ar, b[i].brnch, 1);
            break;
        }
        case 6:
        {
            flag = iitkgp(ar, b[i].brnch, 1);
            break;
        }
        case 7:
        {
            flag = iitg(ar, b[i].brnch, 1);
            break;
        }
        case 8:
        {
            flag = iitp(ar, b[i].brnch, 1);
            break;
        }

        case 9:
        {
            flag = nittrichy(mr, b[i].brnch, 1);
            break;
        }
        case 10:
        {
            flag = nitkarnataka(mr, b[i].brnch, 1);
            break;
        }
        case 11:
        {
            flag = nitrourkela(mr, b[i].brnch, 1);
            break;
        }
        case 12:
        {
            flag = nitwarangal(mr, b[i].brnch, 1);
            break;
        }
        case 13:
        {
            flag = nit_calicut(mr, b[i].brnch, 1);
            break;
        }
        case 14:
        {
            flag = nit_nagpur(mr, b[i].brnch, 1);
            break;
        }
        case 15:
        {
            flag = nitp(mr, b[i].brnch, 1);
            break;
        }
        case 16:
        {
            flag = iiith(mr, b[i].brnch, 1);
            break;
        }
        case 17:
        {
            flag = iiitd(mr, b[i].brnch, 1);
            break;
        }
        case 18:
        {
            flag = iiitg(mr, b[i].brnch, 1);
            break;
        }
        default:
        {
            printf(RED "TRY IN NEXT ROUND :/ \n" RESET);

        }
        }
        if (flag == 1 && !found)
        {
            strcpy(desired_clg[1], c[i].college);
            strcpy(desired_branch[1], b[i].branch);
            cr[1] = c[i].clg;
            br[1] = b[i].brnch;
            found = 1;
            r[2] = i;
        }
    }
    PRINT(4);
    if (found)
    {
        printf(FONT GREEN "Round 1 result: \n" RESET);
        printf(CYAN "%s \n" RESET, desired_clg[1]);
        printf(CYAN "%s \n" RESET, desired_branch[1]);
        printf("\n");
    }
    else
    {
        printf(RED "Try in next round :/ \n" RESET);
        printf("\n");
        strcpy(desired_clg[1], c[n-1].college);
        strcpy(desired_branch[1], b[n-1].branch);
        cr[1] = c[n-1].clg;
        br[1] = b[n-1].brnch;
        r[2] = n-1;
    }
    round = 2;
    int freezed = 0;
    int found2=0;
    int found1=0;
    while (round <= 6)
    {
        // int found1=0;
        // printf("ROUND %d \n",round);
        PRINT(round+3);
        int choice;
        if (found == 1 || found1 == 1)
        {
            printf(YELLOW "Enter:- \n1 for Slide \n2 for Float \n3 for Freeze \n" RESET);
            scanf("%d", &choice);
        }
        else
        {
            choice=2;
        }
        if (choice == 1)
        {
            int flag=0;
            for (int i = 0; i <= r[round]; i++)
            {
                if (c[i].clg == cr[round-1])
                {
                    int v = c[i].clg;
                    if(v==1)
                    {
                        flag = iitb(ar, b[i].brnch, round);
                    }
                    if(v==2)
                    {
                        flag = iitd(ar, b[i].brnch, round);
                    }
                    if(v==3)
                    {
                        flag = iitm(ar, b[i].brnch, round);
                    }
                    if(v==4)
                    {
                        flag = iitk(ar, b[i].brnch, round);
                    }
                    if(v==5)
                    {
                        flag = iitr(ar, b[i].brnch, round);
                    }
                    if(v==6)
                    {
                        flag = iitkgp(ar, b[i].brnch, round);
                    }
                    if(v==7)
                    {
                        flag = iitg(ar, b[i].brnch, round);
                    }
                    if(v==8)
                    {
                        flag = iitp(ar, b[i].brnch, round);
                    }
                    if(v==9)
                    {
                        flag = nittrichy(mr, b[i].brnch, round);
                    }
                    if(v==10)
                    {
                        flag = nitkarnataka(mr, b[i].brnch, round);
                    }
                    if(v==11)
                    {
                        flag = nitrourkela(mr, b[i].brnch, round);
                    }
                    if(v==12)
                    {
                        flag = nitwarangal(mr, b[i].brnch, round);
                    }
                    if(v==13)
                    {
                        flag = nit_calicut(mr, b[i].brnch, round);
                    }
                    if(v==14)
                    {
                        flag = nit_nagpur(mr, b[i].brnch, round);
                    }
                    if(v==15)
                    {
                        flag = nitp(mr, b[i].brnch, round);
                    }
                    if(v==16)
                    {
                        flag = iiith(mr, b[i].brnch, round);
                    }
                    if(v==17)
                    {
                        flag = iiitd(mr, b[i].brnch, round);
                    }
                    if(v==18)
                    { 
                        flag = iiitg(mr, b[i].brnch, round);
                    }
                } 
                if (flag == 1)
                {
                    strcpy(desired_clg[round], c[i].college);
                    strcpy(desired_branch[round], b[i].branch);
                    cr[round] = c[i].clg;
                    br[round] = b[i].brnch;
                    found1 = 1;
                    r[round + 1] = i;
                    break;
                }
            }
        }
        else if (choice == 2)
        {
            int flag=0;
            for (int i = 0; i <= r[round]; i++)
            {
                  int v = c[i].clg;
                    if(v==1)
                    {
                        flag = iitb(ar, b[i].brnch, round);
                    }
                    if(v==2)
                    {
                        flag = iitd(ar, b[i].brnch, round);
                    }
                    if(v==3)
                    {
                        flag = iitm(ar, b[i].brnch, round);
                    }
                    if(v==4)
                    {
                        flag = iitk(ar, b[i].brnch, round);
                    }
                    if(v==5)
                    {
                        flag = iitr(ar, b[i].brnch, round);
                    }
                    if(v==6)
                    {
                        flag = iitkgp(ar, b[i].brnch, round);
                    }
                    if(v==7)
                    {
                        flag = iitg(ar, b[i].brnch, round);
                    }
                    if(v==8)
                    {
                        flag = iitp(ar, b[i].brnch, round);
                    }
                    if(v==9)
                    {
                        flag = nittrichy(mr, b[i].brnch, round);
                    }
                    if(v==10)
                    {
                        flag = nitkarnataka(mr, b[i].brnch, round);
                    }
                    if(v==11)
                    {
                        flag = nitrourkela(mr, b[i].brnch, round);
                    }
                    if(v==12)
                    {
                        flag = nitwarangal(mr, b[i].brnch, round);
                    }
                    if(v==13)
                    {
                        flag = nit_calicut(mr, b[i].brnch, round);
                    }
                    if(v==14)
                    {
                        flag = nit_nagpur(mr, b[i].brnch, round);
                    }
                    if(v==15)
                    {
                        flag = nitp(mr, b[i].brnch, round);
                    }
                    if(v==16)
                    {
                        flag = iiith(mr, b[i].brnch, round);
                    }
                    if(v==17)
                    {
                        flag = iiitd(mr, b[i].brnch, round);
                    }
                    if(v==18)
                    { 
                        flag = iiitg(mr, b[i].brnch, round);
                    }
                if (flag == 1)
                {
                    strcpy(desired_clg[round], c[i].college);
                    strcpy(desired_branch[round], b[i].branch);
                    cr[round] = c[i].clg;
                    br[round] = b[i].brnch;
                    found1 = 1;
                    found=1;
                    r[round + 1] = i;
                    break;
                }
                
            }
        }
        else if (choice == 3)
        {
            freezed = 1;
            break;
        }
        else
        {
            printf(RED "Wrong choice :/ \n" RESET);
        }
        if(found1)
        {
        printf(FONT GREEN "Round %d result : \n" RESET, round);
        // PRINT(round+3);
        printf(CYAN "%s \n" RESET, desired_clg[round]);
        printf(CYAN "%s \n" RESET, desired_branch[round]);
        printf("\n");
        }
        else
        {
             if(!found1 && round!=6)
            {
                printf(RED "Try in next round :/ \n" RESET);
                printf("\n");
            }
            if(!found1 && round==6)
            {
                printf(RED "Try next year :( \n" RESET);
                printf("\n");
            }  
            strcpy(desired_clg[round], c[n-1].college);
            strcpy(desired_branch[round], b[n-1].branch);
            cr[round] = c[n-1].clg;
            br[round] = b[n-1].brnch;
            r[round+1] = n-1;
        }
        round++;
        found2=found1;
    }

    if(freezed)
    {
        int i=round;
        while (i <= 6)
        {
            if(i!=round)
            PRINT(i+3);
            printf(FONT GREEN "Round %d result : \n" RESET, i);
            printf(CYAN "%s \n" RESET, desired_clg[round-1]);
            printf(CYAN "%s \n" RESET, desired_branch[round-1]);
            printf("\n");
            i++;
        }
    }
}
