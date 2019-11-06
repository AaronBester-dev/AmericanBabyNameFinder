#include <string.h>


int chop(char *line){

  int lineLength;

  lineLength = strlen(line);

  if(line[lineLength-1] == *("\n")){
    line[lineLength-1] = *("");
    return(0);
  }

  return(-1);
}
