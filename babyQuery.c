
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
char fileName[14];
char searchName[200];
int maleNameFound = 0;
int femaleNameFound = 0;
int stopLoop = 0;
int decadeLoop = 0;
int decade = 0;
int index = 0;
int i = 0;
int searchTopRankLoop = 0;
int rankNumLoop = 0;
int maleFemRankLoop = 0;
int maleFemSearchLoop = 0;
int searchNameLoop = 0;
int rankNum = 0;
FILE *f1;



while(stopLoop == 0){

  printf("What decade do you want to look at? [1880 to 2010]\n");
  fgets(userResponse, 200, stdin);
  decade = atoi(userResponse);

  while(decadeLoop == 0){

    if(decade == 1880){
      strcpy(fileName,"1880Names.txt");
      decadeLoop = 1;
    }

    else if(decade == 1890){
      strcpy(fileName,"1890Names.txt");
      decadeLoop = 1;
    }

    else if(decade == 1900){
      strcpy(fileName,"1900Names.txt");
      decadeLoop = 1;
    }

    else if(decade == 1910){
      strcpy(fileName,"1910Names.txt");
      decadeLoop = 1;

    }

    else if(decade == 1920){
      strcpy(fileName,"1920Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1930){
      strcpy(fileName,"1930Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1940){
      strcpy(fileName,"1940Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1950){
      strcpy(fileName,"1950Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1960){
      strcpy(fileName,"1960Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1970){
      strcpy(fileName,"1970Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1980){
      strcpy(fileName,"1980Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 1990){
      strcpy(fileName,"1990Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 2000){
      strcpy(fileName,"2000Names.txt");
      decadeLoop = 1;
    }
    else if(decade == 2010){
      strcpy(fileName,"2010Names.txt");
      decadeLoop = 1;
    }

    else{
      printf("Error - Decade entered does not exist. Please enter decade between 1880 and 2010\n");
    }
  }

    popular.year = decade;
    if ((f1 = fopen(fileName, "r")) !=NULL){
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
      printf("Error - Can not find file %s \n", fileName);
      return(1);
      }
    fclose(f1);

    while(searchTopRankLoop == 0){
      printf("Would you like to see a rank, search for a name, or see the top 10 [rank, search, top]\n");
      fgets(userResponse, 200, stdin);

      if(strcmp(userResponse, "rank")) == 0){
        searchTopRankLoop = 1;
        while(rankNumLoop == 0){

          printf("What rank do you wish to see? [1-200]\n");
          fgets(userResponse, 200, stdin);
          rankNum = atoi(userResponse);

          if ((rankNum > 0) && (rankNum < 201)) {
            rankNumLoop = 1;

            while(maleFemRankLoop == 0){

              printf("Would you like to see the male (0), female (1), or both (2) name(s)? [0-2] \n");
              fgets(userResponse, 200, stdin);

              if((atoi(userResponse)) == 0){
                printf("Rank %d: Male:%s (%d) \n",rankNum, popular.maleName[rankNum-1], popular.maleNumber[rankNum-1])
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 1){
                printf("Rank %d: Female:%s (%d) \n",rankNum, popular.femaleName[rankNum-1], popular.femaleNumber[rankNum-1])
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 2){
                printf("Rank %d: Male:%s (%d) and Female:%s (%d) \n",rankNum, popular.maleName[rankNum-1], popular.maleNumber[rankNum-1], popular.femaleName[rankNum-1],popular.femaleNumber[rankNum-1])
                maleFemRankLoop = 1;
              }
              else{
                printf("Error - Invalid response! Please put in a number from 0 to 2. [0-2]\n", );
              }
            }
          }

          else{
            printf("Error - Invalid rank! Please put in a number from 1 and 200. [1-200]\n", );
          }

        }


      }
      if((strcmp(userResponse,"search")) == 0) {
        searchTopRankLoop = 1;
          printf("What name do you wish to search for? [case sensitive]\n");
          fgets(searchName, 200, stdin);

          while(maleFemSearchLoop == 0){
            printf("Do you wish to search male (0), female (1), or both (2) name(s)? [0-2]\n");
            fgets(userResponse, 200, stdin);

            if((atoi(userResponse)) == 0){
              maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){
                if((strcmp(searchName,popular.maleName[i])) == 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade, searchName, popular.rank[i], popular.maleNumber[i] );
                }
                else{
                  printf("In %d, the male name %s is not ranked.\n",decade, searchName );
                }
              }
            }

            if((atoi(userResponse)) == 1){
                  maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){
                if((strcmp(searchName,popular.femaleName[i])) == 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade, searchName, popular.rank[i], popular.femaleNumber[i] );
                }
                else{
                  printf("In %d, the male name %s is not ranked.\n",decade, searchName );
                }
              }
            }

            if((atoi(userResponse)) == 2){
                  maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){

                if((strcmp(searchName,popular.maleName[i])) == 0){
                  maleNameFound = i;
                }


                if((strcmp(searchName,popular.femaleName[i])) == 0){
                  femaleNameFound = i;
                }

              }
              if((maleNameFound != 0) && (femaleNameFound != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d.\n", decade, searchName, popular.rank[femaleNameFound], popular.femaleNumber[femaleNameFound], searchName, popular.rank[maleNameFound],popular.maleNumber[maleNameFound] );
              }
              if((maleNameFound != 0) && (femaleNameFound == 0)){
                printf("In %d the female name %s is not ranked and the male name %s is ranked %d with a count of %d\n", decade, searchName, searchName, popular.rank[maleNameFound], popular.maleNumber[maleNameFound] );
              }
              if((maleNameFound == 0) && (femaleNameFound != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade, searchName, popular.rank[femaleNameFound],popular.femaleNumber[femaleNameFound], searchName );
              }
              else{
                printf("In %d the female name %s is not ranked and the male name %s is not ranked\n", decade,searchName,searchName );
              }
            }
            else{
              printf("Error - Invalid number. Please enter a number from 0 to 2. [0-2]\n", );
            }

          }

      }
      if((strcmp(userResponse,"top")) == 0) {
        searchTopRankLoop = 1;
        for(i=0; i<10;i++){
          printf("%d     %s     %d     %s     %d\n",popular.rank[i],popular.maleName[i],popular.maleNumber[i],popular.femaleName[i],popular.femaleNumber[i] );
        }
      }
      else{
        printf("Error - Please enter either rank search or top all lowercase. [rank,search,top]\n");
      }
    }
    

  }
return(0);
}
