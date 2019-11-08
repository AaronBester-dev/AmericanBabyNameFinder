all: babyQuery babiesQuery
	

babyQueries.o: babyQueries.c
 
	
babyQuery: babyQuery.o removeCommas.o chop.o
		gcc -ansi -Wall babyQuery.o removeCommas.o chop.o -o babyQuery

babiesQuery: babiesQuery.o removeCommas.o chop.o
		gcc -ansi -Wall babiesQuery.o removeCommas.o chop.o -o babiesQuery

babiesQuery.o: babiesQuery.c
	gcc -ansi -Wall -c babiesQuery.c

babyQuery.o: babyQuery.c
		gcc -ansi -Wall -c  babyQuery.c

removeCommas.o: removeCommas.c
	gcc -ansi -Wall -c removeCommas.c
		

chop.o: chop.c
	gcc -ansi -Wall -c chop.c

clean:
	rm babyQuery.o babiesQuery.o removeCommas.o babiesQuery babyQuery
