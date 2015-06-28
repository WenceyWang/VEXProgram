// TextReader.c : implementation file
#include "Main.h"
#include "stdio.h"

void Auto()
{

    FILE* file = fopen("Auto.txt", "r");

    while (!feof(file))
    {
        int TimeForEmptyBattery = 0;

        int TimeForFullBattery = 0;

        char* Operate = NULL;

        fscanf(file, "%s %d %d", Operate, &TimeForEmptyBattery, &TimeForFullBattery);

        switch (*Operate)
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
    }


}



// TODO: add user code here





