#include <stdio.h>
#include <stdlib.h>
void Histogram (int counter []);// Fuction to print histogram
int main()
{
FILE *finput;// Define the files
finput=fopen("story.txt","r");// Open the file in reading mode
int array[26]={0};// Define array of size 26 and it values equal zero
int i;// Define i
char charac;//  Define character
while(fscanf(finput,"%c",&charac)!=EOF)// To read the character untill end of file
{
if (charac>='a'&&charac<='z')// Check the character if it between a and z
{
for (i=0;i<26;i++)
{
if (charac==i+97)// To check if character equal a character between a to z
array[i]++;// increment array[i]
continue;// To escape other characters
}
}
}
for (i=0;i<26;i++)// For loop to print the occurrences for each letter
{
printf("%c was used %d times\n",i+97,array[i]);// Print the occurrences for each letter
}
Histogram (array);//Call Fuction to print histogram
fclose (finput);// Close the input file
return 0;
}
void Histogram (int counter [])//  Fuction to print histogram
{
int i,j;// Define i and j
for (i=0;i<26;i++)// For loop to print the character
{
printf("\n%c",i+97);// Print the character
for (j=0;j<counter[i];j++)// For loop to print number of occurences as shape of square
{
printf("%c",254);// Print number of occurences as shape of square
}
}
}
// The end of program
// Mohammad Abu Shams
// 1200549
