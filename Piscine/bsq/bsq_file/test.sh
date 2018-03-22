#!/bin/sh
rm -rf plateaux/pl*
rm -rf resolues/pl*
perl ../script_perl.perl 4 6 3 > plateaux/plateaux_4_6.txt

perl ../script_perl.perl 23 16 3 > plateaux/plateaux_23_16.txt

perl ../script_perl.perl 57 5 7 > plateaux/plateaux_57_5.txt

perl ../script_perl.perl 10 10 4 > plateaux/plateaux_10_10.txt

perl ../script_perl.perl 50 50 7 > plateaux/plateaux_50_50.txt

./bsq plateaux/plateaux_4_6.txt > resolues/plateaux1.txt

./bsq plateaux/plateaux_23_16.txt > resolues/plateaux2.txt

./bsq plateaux/plateaux_57_5.txt > resolues/plateaux3.txt

./bsq plateaux/plateaux_10_10.txt > resolues/plateaux4.txt

./bsq plateaux/plateaux_50_50.txt > resolues/plateaux5.txt

cat resolues/plateaux1.txt | sed -e "s/l/$(tput setab 1 ; tput bold)l$(tput sgr0)/g" 

echo "\033[33;1;4;5;7mplateaux validé	>>> \033[34m 1 \033[0m \033[0m\033[0m"

cat resolues/plateaux2.txt | sed -e "s/l/$(tput setab 1 ; tput bold)l$(tput sgr0)/g"

echo "\033[33;1;4;5;7mplateaux validé	>>> \033[34m 2 \033[0m \033[0m\033[0m"

cat resolues/plateaux3.txt | sed -e "s/l/$(tput setab 1 ; tput bold)l$(tput sgr0)/g"

echo "\033[33;1;4;5;7mplateaux validé	>>> \033[34m 3 \033[0m \033[0m\033[0m"

cat resolues/plateaux4.txt | sed -e "s/l/$(tput setab 1 ; tput bold)l$(tput sgr0)/g" 

echo "\033[33;1;4;5;7mplateaux validé	>>> \033[34m 4 \033[0m \033[0m\033[0m"

cat resolues/plateaux5.txt | sed -e "s/l/$(tput setab 1 ; tput bold)l$(tput sgr0)/g"

echo "\033[33;1;4;5;7mplateaux validé	>>> \033[34m 5 \033[0m \033[0m\033[0m\n"

echo "\033[36;1;4;5;7mtest finish\033[0m"
