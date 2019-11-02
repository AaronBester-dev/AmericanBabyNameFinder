#include <string.h>


int removeCommas(char *line){

  int lineLength = 0;
  int character = 0;
  int i = 0;
  int commasRemoved = 0;

  lineLength = strlen (line);

  for(i=0; i<lineLength;i++){
    character = line[i];
    if(character == 44){
      line[i] = 32;
      commasRemoved++;
    }
  }

return (commasRemoved);
}
