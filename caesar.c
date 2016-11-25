    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>


    void caesar(char *txt, char *cipher,int n,int k)

    {
        int i;
        int temp;
        printf("%i\n",n);
        //For rotation as alphabets are only 26
        if(k>26)
        {
            k=k%26;
        }

        //Ciphering
        //Only Alphabets will be ciphered

        for ( i = 0; i < n; i++)
        {
          printf("%i) ",i);
          if(isalpha(txt[i]))
          {
              if(isupper(txt[i]))
              {
                  if((txt[i]+k)<=90)
                  {
                      cipher[i]=txt[i]+k;
                      //printf("%i) %c =%c\n",i,txt[i],cipher[i]);
                  }
                    else
                  {
                      temp=(txt[i]+k)-90;

                      cipher[i]='A'+(temp-1);
                      //printf("%i) %c =%c\n",i,txt[i],cipher[i]);
                  }
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
           else if(!(isalpha(txt[i])))
             {
                cipher[i]=txt[i];
             }
             printf("%c\n",cipher[i]);
        }



    }


