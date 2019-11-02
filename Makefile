babyQuery: babyQuery.o removeCommas.o
		gcc -ansi -Wall babyQuery.o removeCommas.o -o babyQuery

babyQuery.o: babyQuery.c
		gcc -ansi -Wall -c  babyQuery.c

removeCommas.o: removeCommas.c
		gcc -ansi -Wall -c removeCommas.c
