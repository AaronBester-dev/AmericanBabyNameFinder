#include <string.h>
/*
int main(){
  char line[20] = "dwdw,wdwdw,wddwdw,";
  removeCommas(line);
  printf("%s\n",line );
}
*/

int removeCommas(char *line){

  int lineLength = 0;
  int i = 0;
  int j = 0;
  int commasRemoved = 0;



lineLength = strlen(line);

  char lineReplace[lineLength];

  for(i=0; i<lineLength;i++){

    if(line[i] != 44){
      lineReplace[j] = line[i];
      j++;
    }
    else{
      commasRemoved++;
    }
  }
  for (j = j; j <= lineLength-1; j++) {
    lineReplace[j] = *("");
  }
  lineReplace[lineLength] = *"\0";
strcpy(line,lineReplace);

return (commasRemoved);
}
