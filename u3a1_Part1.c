/*Jesseca Wirtz - IT-FP2240 - Part 1
 *5/11/20
 */

#include <stdio.h>
//DAYS equal to 7 throughout the whole code
#define DAYS 7

int main(void) {
    //prompts the user to enter their wage
	printf("Enter hourly wage: ");
	//variable to save wage to
	float wage;
	//saves hourly wage to wage
	scanf("%f", &wage);

	//prompts the user to enter the number of hours they
	//worked for each day of the week
	printf("Enter hours for each day in the week: ");
	int i = 0;
	float hours[DAYS];
	//for loop goes through all 7 days and saves the number of hours worked
	//for each day to the hours array
	for(i = 0; i < DAYS; i++) {
		printf("Day %d: ", i + 1);
		scanf("%f", &hours[i]);
	}

	//loops through the array hours and adds up the hours entered
	//by the user to get the total amount of hours
	float totalHours = 0;
	for(i = 0; i < DAYS; i++) {
		totalHours += hours[i];
	}

	//states that if they worked more than 40 hours, they get overtime
	//Their total hours are multiplied by their wage to get their
	//gross pay. If they worked overtime, the amount of hours worked
	//above 40 hours is multiplied by their wage and multiplied again
	//by 1.5
    float grossPay = 0;
	if(totalHours > 40) {
		float overtimeHours = totalHours - 40;
		grossPay += overtimeHours * wage * 1.5;
		grossPay += wage * 40;
	}
	else {
		grossPay = totalHours * wage;
	}

	//Their gross pay is outputted to the screen
	printf("Gross pay: $%.2f", grossPay);
	return 0;
}
