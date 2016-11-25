//Muhammad Awais
//cs50 assignment 1 problem 1

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    
    argc=argc+0;
    string ks = argv[1];
    int klngth=strlen(argv[1]);
    
    
    char tempC;
    int temp,k=0;
     string txt=" ";
     int j=0;
     

    
    
   //printf("Input your text: ");
        txt=GetString();
        string cipher=txt;
        
    //Ciphering
    //Only Alphabets will be ciphered
  
          
              
          
    for (int i = 0, n = strlen(txt); i < n; i++)
    {
       
     
      if(isalpha(txt[i]))
      {
          //To convert password into int correspondingly
          if(isupper(ks[j]))
          {
              tempC=ks[j]-65;
              
              k=tempC;
          }
          if(islower(ks[j]))
          {
              tempC=ks[j]-97;
              
              k=tempC;
          }
          j++;
          if(j>=klngth)
            {
                j=0;
            }
            
            
            //Ciphering Starts here
          if(isupper(txt[i]))
          {
              if((txt[i]+k)<=90)
              {
                  cipher[i]=txt[i]+k;
                  
              }
                else
              {
                  temp=(txt[i]+k)-90;
                  cipher[i]='A'+(temp-1);
                 
                   
              }
          }
           
          if(islower(txt[i]))
          {
              if((txt[i]+k)<=122)
              {
                  cipher[i]=txt[i]+k;
              }
              else
              {
              temp=(txt[i]+k)-122;
              cipher[i]='a'+(temp-1);
                  
              }
          }
           
      }
       
    }
    
    printf("%s\n",cipher);
}