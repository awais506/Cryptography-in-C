     /*
     Author: Muhammad Awais
     Blog: http://uetianblogger.blogspot.com/
     Institute: UET Lahore

    */

    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>

    int main()

    {

        int i,n,j=0;
        char password[]="Awais";
        int k=1;
        int temp;
        char tempC;
        int klength;
        char cipher[]="byd JUD??";
        //char cipher[]="awais??DfsdV/S D?fSD?";
        char txt[]="";
        n=strlen(cipher);
        klength=strlen(password);
        int key[klength-1];


//**********************************************************//
//Password into int type key
//*********************************************************//
        for(i=0;j<klength;j++)
        {
              if(isupper(password[j]))
              {
                  tempC=password[j]-64;
                  key[j]=tempC;
              }
              if(islower(password[j]))
              {
                  tempC=password[j]-96;
                  key[j]=tempC;
              }
        }
//************************************************************//
        j=0;

 //************************************************************//
//Ciphering Starts
//************************************************************//
        for ( i = 0, n = strlen(cipher); i < n; i++)
        {
          if(isalpha(cipher[i]))
          {

              if(j==klength)
                {
                    j=0;
                }
              k=key[j];
              j++;

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
//**********************************************//
        //For printing
        for (i=0;i<n;i++)
       {
          printf("%c",txt[i]);
       }
       printf("\n");
    }
