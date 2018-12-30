#include <stdio.h>

struct time 
{
	int hour;
	int minutes;
	int seconds;
};

struct time elapsed_time (struct time time1, struct time time2)
{
	struct time e_time;
	int elapsedSecs;
	int secsTime1;	//seconds from midnight for time1
	int secsTime2;	//seconds from midnight for time2

	secsTime1 = time1.seconds + time1.minutes * 60 +
		time1.hour * 3600;
	printf ("secsTime1 %i\n", secsTime1);

	secsTime2 = time2.seconds + time2.minutes * 60 +
		time2.hour * 3600;
	printf ("secsTime2 %i\n", secsTime2);

	elapsedSecs = secsTime2 - secsTime1;

	if ( elapsedSecs < 0 )
		elapsedSecs = 86400 - secsTime1 + secsTime2;

	e_time.hour = elapsedSecs / 3600;
	e_time.minutes = ( elapsedSecs % 3600 ) / 60;
	e_time.seconds = ( elapsedSecs % 3600 ) % 60;

	printf ("testing elapsed secs = %i\n", elapsedSecs);    // TESTING


	return e_time;
}

int main (void)
{
	struct time time1;
	struct time time2;
	struct time result;
	struct time elapsed_time (struct time time1, struct time time2);

	printf ("Starting time (hh:mm:ss)? ");
	scanf ("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

	printf ("Finishing time (hh:mm:ss)? ");
	scanf ("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

	result = elapsed_time (time1, time2);

	printf ("%i hours, %i minutes, %i seconds\n", result.hour, 
			result.minutes, result.seconds);

	return 0;
}






      	
