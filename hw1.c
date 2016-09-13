//HW2/ Problem 2

#include <stdio.h>
#include <string.h>
//#include <hw1.h>

void reverse_string(char *str){
 char temp;
 char* end;
 end = str + strlen(str)-1;

 while(end>str){
   temp = *end;
   *end = *str;
   *str = temp;
   end --;
   str ++;
 }
}


int main (int argc, const char *argv[]){

 
 char string[] = "NUMbers12345";
 reverse_string(string);
 printf("This is a string\n");
 printf("After the string been reversed: %s\n", string);

 return 1;
}
