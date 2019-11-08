all: babyQuery.o removeCommas.o babyQueries.o babyQuery babyQueries
	gcc -ansi -Wall babyQuery.o removeCommas.o chop.o -o babyQuery | gcc -ansi -Wall babyQueries.o removeCommas.o chop.o -o babyQueries 

babyQueries.o: babyQueries.c
 
	
babyQuery: babyQuery.o removeCommas.o chop.o
		gcc -ansi -Wall babyQuery.o removeCommas.o chop.o -o babyQuery

babyQueries: babyQueries.o removeCommas.o chop.o
		gcc -ansi -Wall babyQueries.o removeCommas.o chop.o -o babyQueries

babyQueries.o: babyQueries.c
	gcc -ansi -Wall -c babyQueries.c

babyQuery.o: babyQuery.c
		gcc -ansi -Wall -c  babyQuery.c

removeCommas.o: removeCommas.c
	gcc -ansi -Wall -c removeCommas.c
		

chop.o: chop.c
	gcc -ansi -Wall -c chop.c

clean:
	rm babyQuery.o removeCommas.o babyQueries babyQuery
