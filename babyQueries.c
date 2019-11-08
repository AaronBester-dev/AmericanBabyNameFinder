
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

int maleNameDecade1Found = 0;
int maleNameDecade2Found = 0;
int femaleNameDecade1Found = 0;
int femaleNameDecade2Found = 0;
int stopLoop = 0;
int decadeLoop = 0;
int decade1 = 0;
int decade2 = 0;
int index = 0;
int i = 0;
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
          fgets(userResponse, 100, stdin);
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
      printf("Error - Can not find file %s \n", fileName1);
      return(1);
      }
    fclose(f1);

    popular.year = decade2;
    if ((f2 = fopen(fileName2, "r")) !=NULL){
      index = 0;
      while (fgets(string,100,f2)){
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
                printf("Rank %d: %d Male:%s (%d) \n%d: Male: %s %d\n",rankNum,decade1, popular.maleName[rankNum-1], popular.maleNumber[rankNum-1],decade2, popularYear2.maleName[rankNum-1],popularYear2.maleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 1){
              printf("Rank %d: %d Female:%s (%d) \n"
                     "     %d: Female: %s %d\n",
                     rankNum,decade1, popular.femaleName[rankNum-1],
                     popular.femaleNumber[rankNum-1],decade2,
                     popularYear2.femaleName[rankNum-1],popularYear2.femaleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }

              else if((atoi(userResponse)) == 2){
                printf("Rank %d: %d: Male:%s (%d) and Female:%s (%d) \n"
                "Rank %d: %d: Male:%s (%d) and Female:%s (%d) \n",
                rankNum, decade1, popular.maleName[rankNum-1],
                popular.maleNumber[rankNum-1], popular.femaleName[rankNum-1],
                popular.femaleNumber[rankNum-1],rankNum,decade2,popularYear2.maleName[rankNum-1],
                popularYear2.maleNumber[rankNum-1],popularYear2.femaleName[rankNum-1],
                popularYear2.femaleNumber[rankNum-1]);
                maleFemRankLoop = 1;
              }
              else{
                printf("Error - Invalid response! Please put in a number from 0 to 2. [0-2]\n");
              }
            }
          }

          else{
            printf("Error - Invalid rank! Please put in a number from 1 and 200. [1-200]\n");
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
              if(maleNameDecade1Found != 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[maleNameFound], popular.maleNumber[maleNameFound] );
              }
              else{
                printf("In %d, the male name %s is not ranked.\n",decade1, searchName );
              }
              if(maleNameDecade2Found!= 0){
                  printf("In %d the male name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[maleNameFound], popularYear2.maleNumber[maleNameFound] );
              }
              else{
                  printf("In %d, the male name %s is not ranked.\n",decade2, searchName );
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
              if(femaleNameDecade1Found != i){
                  printf("In %d the female name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[femaleNameFound], popular.femaleNumber[femaleNameFound] );
              }
              else{
                printf("In %d, the male name %s is not ranked.\n",decade1, searchName );
              }
              if(femaleNameDecade2Found != i){
                  printf("In %d the female name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[femaleNameFound], popularYear2.femaleNumber[femaleNameFound] );
              }
              else{
                printf("In %d, the male name %s is not ranked.\n",decade2, searchName );
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
              if((maleNameDecade1Found != 0) && (femaleNameDecade1Found != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d.\n", decade1, searchName, popular.rank[femaleNameFound], popular.femaleNumber[femaleNameFound], searchName, popular.rank[maleNameFound],popular.maleNumber[maleNameFound] );
              }
              else if((maleNameDecade1Found != 0) && (femaleNameDecade1Found == 0)){
                printf("In %d the female name %s is not ranked and the male name %s is ranked %d with a count of %d\n", decade1, searchName, searchName, popular.rank[maleNameFound], popular.maleNumber[maleNameFound] );
              }
              else if((maleNameDecade1Found == 0) && (femaleNameDecade1Found != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade1, searchName, popular.rank[femaleNameFound],popular.femaleNumber[femaleNameFound], searchName );
              }
              else{
                printf("In %d the female name %s is not ranked and the male name %s is not ranked\n", decade1,searchName,searchName );
              }
              if((maleNameDecade2Found != 0) && (femaleNameDecade2Found != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d.\n", decade2, searchName, popularYear2.rank[femaleNameFound], popularYear2.femaleNumber[femaleNameFound], searchName, popularYear2.rank[maleNameFound],popularYear2.maleNumber[maleNameFound] );
              }
              else if((maleNameDecade2Found != 0) && (femaleNameDecade2Found == 0)){
                printf("In %d the female name %s is not ranked and the male name %s is ranked %d with a count of %d\n", decade2, searchName, searchName, popularYear2.rank[maleNameFound], popularYear2.maleNumber[maleNameFound] );
              }
              else if((maleNameDecade2Found == 0) && (femaleNameDecade2Found != 0)){
                printf("In %d the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade2, searchName, popularYear2.rank[femaleNameFound],popularYear2.femaleNumber[femaleNameFound], searchName );
              }
              else{
                printf("In %d the female name %s is not ranked and the male name %s is not ranked\n", decade2,searchName,searchName );
              }
            }
            else{
              printf("Error - Invalid number. Please enter a number from 0 to 2. [0-2]\n");
            }

          }

      }
      else if((strcmp(userResponse,"top\n")) == 0) {
        searchTopRankLoop = 1;
        for(i=0; i<10;i++){
          printf("%d     %s     %d     %s     %d\n",popular.rank[i],popular.maleName[i],popular.maleNumber[i],popular.femaleName[i],popular.femaleNumber[i] );
        }
      }
      else{
        printf("Error - Please enter either rank search or top all lowercase. [rank,search,top]\n");
      }
    }
  while (decadeReturnLoop == 0) {
    printf("Do you want to ask another question about %d? [Y or N]\n", decade1);
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
        printf("Would you like to select another year? [Y or N]\n");
        fgets(userResponse, 200, stdin);
        if(userResponse[0] == *("Y")){
          finalQuestionLoop = 1;
          searchTopRankLoop = 0;
          maleFemRankLoop = 0;
          rankNumLoop = 0;
          maleFemSearchLoop = 0;
          decadeLoop = 0;
        }
        else if(userResponse[0] == *("N")){
        printf("Thank you for using babyQuery.\n");
          stopLoop = 1;
          finalQuestionLoop = 1;
        }
        else{
            printf("Error - Incorrect Response. Enter either Y or N [Y or N]\n");
        }
      }

    }
    else{
      printf("Error - Incorrect Response. Enter either Y or N [Y or N]\n");
    }
  }
  decadeReturnLoop = 0;
  finalQuestionLoop = 0;
  }

return(0);
}
