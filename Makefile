
tp1  : tp1.c flop.o
	 gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o
	#./tp1


.PHONY: clean

clean :
	ls
	rm -f tp1 tp1.zip* ziunfnHy zi*
	ls

lib :
	 wget -p /data https://github.com/guyfrancoeur/INF3135_H2020/blob/master/tp/tp1.zip
	 #unzip tp1.zip
	 #zip -FF tp1.zip --out Repairedtp1.zip | unzip Repairedtp1
	 #mkdir data 
	 #cd data 
	 unzip -t github.com/guyfrancoeur/INF3135_H2020/blob/master/tp/tp1.zip


test :  
	 ./tp1 > liste.sh
	#grep ...passed liste.sh| cut -d r_ -f 4
	grep -po "Test: tester_"\K[^ ]+ <<< grep ...passed liste.sh 

		#source askubuntu.com/questions/697120/extract-word-from-string-using-grep-sed-awk
