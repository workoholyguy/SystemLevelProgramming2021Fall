#!/bin/bash
#Omar Madjitov
#omadjitov@student.gsu.edu

number=0
sed 's/\[[0-9]*\]//g' myexamfile.txt | sed '/^\s*$/d' |  sed 's/" //g'|  sed 's/\./\. \n/g '|  sed 's/[a-zA-Z]\.[a-zA-Z]\.//g' | cat > updated.txt
echo -e "sentences     words \t letters"
while read sentence;
do
echo -en "$number \t\t"
echo " ` echo $sentence|wc -w ` ` echo -e "\t\t" ` ` echo $sentence|wc -c `"
echo -e "\n"
let "number++"
done < updated.txt

