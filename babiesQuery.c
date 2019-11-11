
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

int main(){

char userResponse[200];
char maleSNumber[100];
char femaleSNumber[100];
char string[100];
char fileName1[14];
char fileName2[14];
char searchName[200];

int maleNameDecade1Found = -1;
int maleNameDecade2Found = -1;
int femaleNameDecade1Found = -1;
int femaleNameDecade2Found = -1;
int stopLoop = 0;

int decade1 = 0;
int decade2 = 0;
int index = 0;
int i = 0;
int k = 0;
int searchTopRankLoop = 0;
int rankNumLoop = 0;
int maleFemRankLoop = 0;
int maleFemSearchLoop = 0;
int rankNum = 0;
int decadeReturnLoop = 0;
int finalQuestionLoop = 0;
int decadeEqualCheck = 0;
int decade1Loop = 0;
int decade2Loop = 0;

FILE *f1;
FILE *f2;



while(stopLoop == 0){

    while(decade2Loop == 0){
while(decade1Loop == 0){

        while(decadeEqualCheck == 0){
          printf("What decade do you want to look at? [1880 to 2010]\n");
          fgets(userResponse, 200, stdin);
          sscanf(userResponse, "%d %d", &decade1, &decade2);

          if(decade1 == decade2){
            printf("Acceptable decades are 1880, 1890, 1900, 1910, 1920, 1930, 1940, 1950, 1960,1970, 1980, 1990, 2000, or 2010. No other numbers are acceptable. You must enter 2 acceptable decades separated by a least one space.\n");
          }
          else{
            decadeEqualCheck = 1;
          }
        }
        decadeEqualCheck = 0;
   if(decade1 == 1880){
      strcpy(fileName1,"1880Names.txt");
      decade1Loop = 1;
    }

    else if(decade1 == 1890){
      strcpy(fileName1,"1890Names.txt");
      decade1Loop = 1;
    }

    else if(decade1 == 1900){
      strcpy(fileName1,"1900Names.txt");
      decade1Loop = 1;
    }

    else if(decade1 == 1910){
      strcpy(fileName1,"1910Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1920){
      strcpy(fileName1,"1920Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1930){
      strcpy(fileName1,"1930Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1940){
      strcpy(fileName1,"1940Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1950){
      strcpy(fileName1,"1950Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1960){
      strcpy(fileName1,"1960Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1970){
      strcpy(fileName1,"1970Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1980){
      strcpy(fileName1,"1980Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 1990){
      strcpy(fileName1,"1990Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 2000){
      strcpy(fileName1,"2000Names.txt");
      decade1Loop = 1;
    }
    else if(decade1 == 2010){
      strcpy(fileName1,"2010Names.txt");
      decade1Loop = 1;
    }

    else{
      printf("Acceptable decades are 1880, 1890, 1900, 1910, 1920, 1930, 1940, 1950, 1960,1970, 1980, 1990, 2000, or 2010. No other numbers are acceptable. You must enter 2 acceptable decades separated by a least one space.\n");
    }
    }

    decade1Loop = 0;

    if(decade2 == 1880){
      strcpy(fileName2,"1880Names.txt");
          decade2Loop = 1;
    }

    else if(decade2 == 1890){
      strcpy(fileName2,"1890Names.txt");
          decade2Loop = 1;
    }

    else if(decade2 == 1900){
      strcpy(fileName2,"1900Names.txt");
          decade2Loop = 1;
    }

    else if(decade2 == 1910){
      strcpy(fileName2,"1910Names.txt");
        decade2Loop = 1;

    }

    else if(decade2 == 1920){
      strcpy(fileName2,"1920Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 1930){
      strcpy(fileName2,"1930Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 1940){
      strcpy(fileName2,"1940Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 1950){
      strcpy(fileName2,"1950Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 1960){
      strcpy(fileName2,"1960Names.txt");
        decade2Loop = 1;
    }
    else if(decade2 == 1970){
      strcpy(fileName2,"1970Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 1980){
      strcpy(fileName2,"1980Names.txt");
        decade2Loop = 1;
    }
    else if(decade2 == 1990){
      strcpy(fileName2,"1990Names.txt");
        decade2Loop = 1;
    }
    else if(decade2 == 2000){
      strcpy(fileName2,"2000Names.txt");
          decade2Loop = 1;
    }
    else if(decade2 == 2010){
      strcpy(fileName2,"2010Names.txt");
          decade2Loop = 1;
    }

    else{
      printf("Acceptable decades are 1880, 1890, 1900, 1910, 1920, 1930, 1940, 1950, 1960,1970, 1980, 1990, 2000, or 2010. No other numbers are acceptable. You must enter 2 acceptable decades separated by a least one space.\n");
    }

}



    popular.year = decade1;
    if ((f1 = fopen(fileName1, "r")) !=NULL){
      index = 0;
      while (fgets(string,200,f1)){
        sscanf(string, "%d %s %s %s %s", &popular.rank[index], popular.maleName[index], maleSNumber, popular.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);

        popular.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popular.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f1 == NULL){
      printf("Error - Can not find file %s \n", fileName1);
      return(1);
      }
    fclose(f1);

    popular.year = decade2;
    if ((f2 = fopen(fileName2, "r")) !=NULL){
      index = 0;
      while (fgets(string,200,f2)){
        sscanf(string, "%d %s %s %s %s", &popularYear2.rank[index], popularYear2.maleName[index], maleSNumber, popularYear2.femaleName[index], femaleSNumber);

        removeCommas(maleSNumber);
        popularYear2.maleNumber[index] = atoi(maleSNumber);

        removeCommas(femaleSNumber);
        popularYear2.femaleNumber[index] = atoi(femaleSNumber);
        index++;
      }
    }

    if(f2 == NULL){
      printf("Error - Can not find file %s \n", fileName2);
      return(2);
      }
    fclose(f2);


    while(searchTopRankLoop == 0){
      printf("Would you like to see a rank, search for a name, or see the top 10 [rank, search, top]\n");
      fgets(userResponse, 200, stdin);

      if((strcmp(userResponse,"rank\n")) == 0){
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
                printf("Rank %d: %d: Male:%s (%d) \n"
                       "        %d: Male:%s (%d)\n",rankNum,decade1, popular.maleName[rankNum-1], popular.maleNumber[rankNum-1],decade2, popularYear2.maleName[rankNum-1],popularYear2.maleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 1){
              printf("Rank %d: %d: Female:%s (%d) \n"
                     "        %d: Female:%s (%d)\n",
                     rankNum,decade1, popular.femaleName[rankNum-1],
                     popular.femaleNumber[rankNum-1],decade2,
                     popularYear2.femaleName[rankNum-1],popularYear2.femaleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 2){
                printf("Rank %d: %d: Male:%s (%d) and Female:%s (%d) \n"
                       "        %d: Male:%s (%d) and Female:%s (%d) \n",
                rankNum, decade1, popular.maleName[rankNum-1],
                popular.maleNumber[rankNum-1], popular.femaleName[rankNum-1],
                popular.femaleNumber[rankNum-1],decade2,popularYear2.maleName[rankNum-1],
                popularYear2.maleNumber[rankNum-1],popularYear2.femaleName[rankNum-1],
                popularYear2.femaleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }
              else{
                printf("Only the numbers 0, 1, or 2 are acceptable.\n");
              }
            }
          }

          else{
            printf("Only numbers between 1 and 200 are acceptable.\n");
          }

        }


      }
      else if((strcmp(userResponse,"search\n")) == 0) {
          searchTopRankLoop = 1;
          printf("What name do you wish to search for? [case sensitive]\n");
          fgets(searchName, 200, stdin);
          chop(searchName);

          while(maleFemSearchLoop == 0){
            printf("Do you wish to search male (0), female (1), or both (2) name(s)? [0-2]\n");
            fgets(userResponse, 200, stdin);

            if((atoi(userResponse)) == 0){
              maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){
                if((strcmp(searchName,popular.maleName[i])) == 0){
                  maleNameDecade1Found = i;
                }
                if((strcmp(searchName,popularYear2.maleName[i])) == 0){
                  maleNameDecade2Found = i;
                }
              }
              if(maleNameDecade1Found >= 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[maleNameDecade1Found], popular.maleNumber[maleNameDecade1Found] );
                  maleNameDecade1Found = -1;
              }
              else{
                printf("In %d, the male name %s is not ranked.\n",decade1, searchName );
                maleNameDecade1Found = -1;
              }
              if(maleNameDecade2Found>= 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[maleNameDecade2Found], popularYear2.maleNumber[maleNameDecade2Found] );
                  maleNameDecade1Found = -1;
              }
              else{
                  printf("In %d, the male name %s is not ranked.\n",decade2, searchName );
                  maleNameDecade1Found = -1;
              }

            }

            else if((atoi(userResponse)) == 1){
                  maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){
                if((strcmp(searchName,popular.femaleName[i])) == 0){
                  femaleNameDecade1Found = i;
                }
                if((strcmp(searchName,popularYear2.femaleName[i])) == 0){
                  femaleNameDecade2Found = i;
                }
              }
              if(femaleNameDecade1Found >= 0){
                  printf("In %d the female name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[femaleNameDecade1Found], popular.femaleNumber[femaleNameDecade1Found] );
                    femaleNameDecade1Found = -1;
              }
              else{
                printf("In %d, the female name %s is not ranked.\n",decade1, searchName );
                  femaleNameDecade1Found = -1;
              }
              if(femaleNameDecade2Found >= 0){
                  printf("In %d the female name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[femaleNameDecade2Found], popularYear2.femaleNumber[femaleNameDecade2Found] );
                  femaleNameDecade2Found = -1;
              }
              else{
                printf("In %d, the female name %s is not ranked.\n",decade2, searchName );

                femaleNameDecade2Found = -1;

              }
            }

            else if((atoi(userResponse)) == 2){
                  maleFemSearchLoop = 1;
              for(i = 0; i < 200; i++){

                if((strcmp(searchName,popular.maleName[i])) == 0){
                  maleNameDecade1Found = i;
                }


                if((strcmp(searchName,popular.femaleName[i])) == 0){
                  femaleNameDecade1Found = i;
                }

                if((strcmp(searchName,popularYear2.maleName[i])) == 0){
                  maleNameDecade2Found = i;
                }


                if((strcmp(searchName,popularYear2.femaleName[i])) == 0){
                  femaleNameDecade2Found = i;
                }

              }
              if((maleNameDecade1Found >= 0) && (femaleNameDecade1Found >= 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[femaleNameDecade1Found], popular.femaleNumber[femaleNameDecade1Found], searchName, popular.rank[maleNameDecade1Found],popular.maleNumber[maleNameDecade1Found] );
                femaleNameDecade1Found = -1;
                maleNameDecade1Found = -1;
              }
              else if((maleNameDecade1Found >= 0) && (femaleNameDecade1Found < 0)){
                printf("In %d the female name %s is not ranked and the male name %s is ranked %d with a count of %d\n", decade1, searchName, searchName, popular.rank[maleNameDecade1Found], popular.maleNumber[maleNameDecade1Found] );
                femaleNameDecade1Found = -1;
                maleNameDecade1Found = -1;
              }
              else if((maleNameDecade1Found < 0) && (femaleNameDecade1Found >= 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade1, searchName, popular.rank[femaleNameDecade1Found],popular.femaleNumber[femaleNameDecade1Found], searchName );
                femaleNameDecade1Found = -1;
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
                maleNameDecade1Found = -1;
              }
              else{
                printf("In %d the female name %s is not ranked and the male name %s is not ranked\n", decade1,searchName,searchName );
                femaleNameDecade1Found = -1;
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
                maleNameDecade1Found = -1;
              }
              if((maleNameDecade2Found >= 0) && (femaleNameDecade2Found >= 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[femaleNameDecade2Found], popularYear2.femaleNumber[femaleNameDecade2Found], searchName, popularYear2.rank[maleNameDecade2Found],popularYear2.maleNumber[maleNameDecade2Found] );
                femaleNameDecade1Found = -1;
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
                maleNameDecade1Found = -1;
              }
              else if((maleNameDecade2Found >= 0) && (femaleNameDecade2Found < 0)){
                printf("In %d the female name %s is not ranked and the male name %s is ranked %d with a count of %d\n", decade2, searchName, searchName, popularYear2.rank[maleNameDecade2Found], popularYear2.maleNumber[maleNameDecade2Found] );
                femaleNameDecade1Found = -1;
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
                maleNameDecade1Found = -1;
              }
              else if((maleNameDecade2Found < 0) && (femaleNameDecade2Found >= 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade2, searchName, popularYear2.rank[femaleNameDecade2Found],popularYear2.femaleNumber[femaleNameDecade2Found], searchName );
                femaleNameDecade1Found = -1;
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
                maleNameDecade1Found = -1;
              }
              else{
                printf("In %d the female name %s is not ranked and the male name %s is not ranked\n", decade2,searchName,searchName );
                femaleNameDecade2Found = -1;
                maleNameDecade2Found = -1;
              }
            }
            else{
              printf("Only the numbers 0, 1, or 2 are acceptable.\n");
            }

          }

      }
      else if((strcmp(userResponse,"top\n")) == 0) {
        searchTopRankLoop = 1;
        printf("Male names that appear in both %d and %d Top Tens:",decade1,decade2);
        for (k = 0; k < 10; k++) {
          for(i=0; i<10;i++){
            if((strcmp(popular.maleName[i],popularYear2.maleName[k])) == 0){
              printf("%s,",popular.maleName[i] );
            }
          }
        }
        printf("\n");
        printf("Female names that appear in both %d and %d Top Tens:",decade1,decade2);
        for (k = 0; k < 10; k++) {
          for(i=0; i<10;i++){
            if((strcmp(popular.femaleName[i],popularYear2.femaleName[k])) == 0){
              printf("%s,",popular.femaleName[i]);
            }
          }
        }
        printf("\n");
      }
      else{
        printf("Please type in rank, search, or top exactly as requested.\n");
      }
    }
  while (decadeReturnLoop == 0) {
    printf("Do you want to ask another question about %d and %d? [Y or N]\n", decade1,decade2);
    fgets(userResponse, 200, stdin);
    if(userResponse[0] == *("Y")){
      decadeReturnLoop = 1;
      searchTopRankLoop = 0;
      maleFemRankLoop = 0;
      rankNumLoop = 0;
      maleFemSearchLoop = 0;
    }
  else if(userResponse[0] == *("N")){
      decadeReturnLoop = 1;
      while(finalQuestionLoop == 0){
        printf("Would you like to select other decades? [Y or N]\n");
        fgets(userResponse, 200, stdin);
        if(userResponse[0] == *("Y")){
          finalQuestionLoop = 1;
          searchTopRankLoop = 0;
          maleFemRankLoop = 0;
          rankNumLoop = 0;
          maleFemSearchLoop = 0;
          decade1Loop = 0;
          decade2Loop = 0;
        }
        else if(userResponse[0] == *("N")){
        printf("Thank you for using babiesQuery.\n");
          stopLoop = 1;
          finalQuestionLoop = 1;
        }
        else{
            printf("Only the single characters Y or N are acceptable.\n");
        }
      }

    }
    else{
      printf("Only the single characters Y or N are acceptable.\n");
    }
  }
  decadeReturnLoop = 0;
  finalQuestionLoop = 0;
  }

return(0);
}
