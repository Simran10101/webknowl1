#include<stdio.h>

int main()
{
  char name[100];
  char date[100];
  char time[100];
  char location[100];

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter the date of your appointment: ");
  scanf("%s", date);

  printf("Enter the time of your appointment: ");
  scanf("%s", time);

  printf("Enter the location of your appointment: ");
  scanf("%s", location);

  
  return 0;
}