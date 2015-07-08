// TextReader.c : implementation file
#include "Main.h"
//#include "stdio.h"

struct Action
{
    char Command;
    int TimeForEmptyBattery;
    int TimeForFullBattery;
};


struct Action Commands[] = { { 'B', 330, 330 },
{ 'R', 290  ,291 },
{ 'W', 200  ,200 },
{ 'U', 1470, 1470 },
{ 'W', 200  ,200 },
{ 'F',  280 ,280 },
{ 'W', 200  ,200 },
{ 'D', 450  ,450 },
{ 'W', 200  ,200 },
{ 'O', 650  ,650 },
{ 'B',  400 ,400 },
{ 'W', 200  ,200 },
{ 'D', 450  ,450 },
{ 'W', 200  ,200 },
{ 'L', 250  ,250 },
{ 'W', 200  ,200 },
{ 'O', 580  ,580 },
{ 'F',  250 ,250 },
{ 'W', 200  ,200 },
{ 'W', 200  ,200 },
{ 'L', 330  ,330 },
{ 'W', 200  ,200 },
{ 'F',  1730    ,1730 },
{ 'W', 200  ,200 },
{ 'R', 555  ,555 },
{ 'W', 200  ,200 },
{ 'F',  640 ,640 },
{ 'W', 200  ,200 },
{ 'U',  1960 ,1960 },
{ 'W', 200  ,200 },
{ 'F',  540 ,540 },
{ 'W', 200  ,200 },
{ 'D', 300  ,300 },
{ 'W', 200  ,200 },
{ 'B',  200 ,200 },
{ 'W', 200  ,200 },
{ 'D', 200  ,200 },
{ 'W', 200  ,200 },
{ 'O', 320  ,320 },
{ 'W', 200  ,200 },
{ 'B',  400 ,400 },
};


void Auto()
{

    size_t i = 0;
    while (i < 41)
    {
        int TimeForEmptyBattery = Commands[i].TimeForEmptyBattery;

        int TimeForFullBattery = Commands[i].TimeForFullBattery;

        char Operate = Commands[i].Command;

        switch (Operate)
        {
        case 'F':
        {
            Forward(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'B':
        {
            Backward(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'L':
        {
            TurnLeft(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'R':
        {
            TurnRight(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'U':
        {
            break;
            ArmUp(TimeForEmptyBattery, TimeForFullBattery);
        }
        case 'D':
        {
            ArmDown(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'O':
        {
            ClampOpen(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'C':
        {
            ClampClose(TimeForEmptyBattery, TimeForFullBattery);
            break;
        }
        case 'W':
        {
            Wait(TimeForEmptyBattery);
            break;
        }
        default:
        {
            break;
        }
        }
        i++;
    }
}



// TODO: add user code here









