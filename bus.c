
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<conio.h>
void fnShowBuses()
{
int i1;
printf("\n\n\t\t\t______________________");
printf("\n\n\t\t\t BUSES AVALAIBLE");
printf("\n\n\t\t\t______________________\n");

for(i1=1;i1<iNumber;i1++)
{
printf("\n");
fnPrintLine();
printf("\n\t\tbus no-\t\t%d",stBus[i1].iBusNum);
printf("\n\t\tbus code-\t%d",stBus[i1].iBusCode);
printf("\n\t\tDrivers Name-\t%s",stBus[i1].chDrivers_Name);
printf("\n\t\tFrom-\t\t%s",stBus[i1].chGoesFrom);
printf("\n\t\tTo-\t\t%s",stBus[i1].chGoesTo);
printf("\n\t\tArrival time-\t%d%c%d",stBus[i1].stArrival_Time.iHrs,i,stBus[i1].stArrival_Time.iMins);
printf("\n\t\tDeparture time-\t%d%c%d",stBus[i1].stDeparture_Time.iHrs,i,stBus[i1].stDeparture_Time.iMins);
printf("\n\t\tFare-\t\t%.4f",stBus[i1].fFare);
printf("\n\t\tTickets Sold-\t%d",stBus[i1].iTicketSold);
printf("\n");
fnPrintLine();
//fflush(stdout);

}

getch();

fnMainMenu();
}
