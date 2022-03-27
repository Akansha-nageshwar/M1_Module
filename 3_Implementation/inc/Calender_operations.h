/**
 * @file Calendar.h
 * @author Akansha Nageshwar
 * @brief displays Calendar 
 * @version 0.1
 * @date 2022-03-27
 * 
 * 
 */
#ifndef __Calendar_H__
#define __Calendar_H__
/**
 * @brief Day
 * 
 * @param day 
 * @param month 
 * @param year 
 * @return int 
 */
int daynum(int day, int month, int year);
/**
 * @brief Month
 * 
 * @param monthnum 
 * @return char* 
 */
char* getmonthname(int monthnum);
/**
 * @brief Days 
 * 
 * @param monthnum 
 * @param year 
 * @return int 
 */
int numofdays(int monthnum, int year);
/**
 * @brief prints Calendar
 * 
 * @param year 
 */
void printCalendar(int year);
#endif
