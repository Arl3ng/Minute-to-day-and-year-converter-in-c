//
//  main.c
//  operators
//
//  Created by Berke Arman on 13.11.2024.
//
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    double day,minute,year;
    double minutesinaday,minutesinayear;
    minutesinaday=60*24;
    minutesinayear=minutesinaday*365;
    printf("Write minutes to convert them to days and years: ");
    scanf("%lf",&minute);
    
    day= minute/minutesinaday;
    year=minute/minutesinayear;

    printf("%.2lf minutes are approximately %.2lf days and %.2lf years\n",minute,day,year);
    
    return 0;
}
 
