
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

int main(){
  struct pNames {
     int  year;
     int  rank[ROWS];
     char maleName[ROWS][MAXLENGTH];
     int  maleNumber[ROWS];
     char femaleName[ROWS][MAXLENGTH];
     int  femaleNumber[ROWS];
  };
char userResponse[200];
char maleSNumber[100];
char femaleSNumber[100];
char string[100];
int stopLoop = 0;
int decade = 0;
int index = 0;
FILE *f1;



while(stopLoop == 0){

  printf("What decade do you want to look at? [1880 to 2010]\n");
  fgets(userResponse, 200, stdin);
  decade = atoi(userResponse);

  if(decade == 1880){
    popular.year = decade;
    if ((f1 = fopen("1880Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }

  else if(decade == 1890){
    popular.year = decade;
    if ((f1 = fopen("1890Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }

  else if(decade == 1900){
    popular.year = decade;
    if ((f1 = fopen("1900Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }

  else if(decade == 1910){
    popular.year = decade;
    if ((f1 = fopen("1910Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }

  else if(decade == 1920){
    popular.year = decade;
    if ((f1 = fopen("1920Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }
  else if(decade == 1930){
    popular.year = decade;
    if ((f1 = fopen("1930Names.txt", "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file 1880Names.txt\n");
      return(1);
      }
    fclose(f1);

  }
  else if(decade == 1940){

  }
  else if(decade == 1950){

  }
  else if(decade == 1960){

  }
  else if(decade == 1970){

  }
  else if(decade == 1980){

  }
  else if(decade == 1990){

  }
  else if(decade == 2000){

  }
  else if(decade == 2010){

  }

  else{
    printf("Error - Decade entered does not exist. Please enter decade between 1880 and 2010\n");
  }
}
return(0);
}
