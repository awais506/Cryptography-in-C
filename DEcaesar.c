    /*
     Author: Muhammad Awais
     Blog: http://uetianblogger.blogspot.com/
     Institute: UET Lahore

    */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>
    void DEcaesar(char *cipher, char *txt,int n,int k)

    {
        int i;
        int temp;
       //For rotation as alphabets are only 26
        if(k>26)
        {
            k=k%26;
        }


        //DeCiphering
        //Only Alphabets will be de-ciphered

        for ( i = 0; i < n; i++)
        {
          if(isalpha(cipher[i]))
          {
              if(isupper(cipher[i]))
              {
                  if((cipher[i]-k)>=65)
                  {
                      txt[i]=cipher[i]-k;
                      //temp=1;
                  }
                    else if((cipher[i]-k)<65)
                  {
                      temp=65-(cipher[i]+k);
                      txt[i]='Z'+(temp+1);
                      // printf("%i) %c =%c\n",i,cipher[i],txt[i]);
                  }
              }

              if(islower(cipher[i]))
              {
                  if((cipher[i]-k)>=97)
                  {
                      txt[i]=cipher[i]-k;
                  }
                  else
                  {
                  temp=97-(cipher[i]+k);
                  txt[i]='z'+(temp+1);
                  }
              }
          }

         else if(!(isalpha(cipher[i])))
          {
              txt[i]=cipher[i];
           }
        }
     //To print ciphered message
       for (i=0;i<n;i++)
       {
          //printf("%i",i);
          printf("%c",txt[i]);
       }
       printf("\n");


    }



