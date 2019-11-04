all: babyQuery.o removeCommas.o babyQueries.o
	gcc -ansi -Wall babyQuery.o removeCommas.o -o babyQuery | gcc -ansi -Wall babyQueries.o removeCommas.o -o babyQueries

babyQuery: babyQuery.o removeCommas.o
		gcc -ansi -Wall babyQuery.o removeCommas.o -o babyQuery

babyQueries: babyQueries.o removeCommas.o
		gcc -ansi -Wall babyQueries.o removeCommas.o -o babyQueries

babyQueries.o: babyQueries.c
	gcc -ansi -Wall -c babyQueries.c

babyQuery.o: babyQuery.c
		gcc -ansi -Wall -c  babyQuery.c

removeCommas.o: removeCommas.c
		gcc -ansi -Wall -c removeCommas.c

clean:
	rm babyQuery.o removeCommas.o babyQueries babyQuery
