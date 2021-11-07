#include <stdio.h>

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int isLeap(int year);
int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main(){

	printf("%d\n", day_of_year(1983, 7, 21));
	printf("%d\n", day_of_year(1992, 12, 29));
	printf("%d\n", day_of_year(2020, 05, 21));
	printf("%d\n", day_of_year(2021, 9, 14));
	
	return 0;	
	
}

int day_of_year(int year, int month, int day){

	int i, leap;
	
	leap = isLeap(year);
	for(i = 1; i < month; i++)
		day+=daytab[leap][i];
	return day;
	
}


void month_day(int year, int yearday, int *pmonth, int *pday){
	
	int i, leap;
	leap = isLeap(year);
	for(i = 1; yearday > daytab[leap][i]; i++)
		yearday-=daytab[leap][i];
	
	*pmonth = i;
	*pday = yearday;

}

int isLeap(int year){

	return  year%4 == 0 && year%100 != 0 || year%400 == 0;
}


