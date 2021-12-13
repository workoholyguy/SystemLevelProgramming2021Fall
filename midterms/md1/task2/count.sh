#!/bin/bash
#Omar Madjitov
#omadjitov@student.gsu.edu

# path to the file
path="/home/omadjitov1/midterm/midtermredo/task2/myexamfile.txt"

#Pipe to filter out the patern of a sentence and then count number of filtered lines
#sorted=`grep -n \..*\. $path | wc -l`

#Pipe to filter out the number of words
sorted=`grep -n \..*\. $path | wc -w`

#Display number of words
echo "Number of statements: $sorted" 
