#!/bin/bash
#Omar Madjitov
#omadjitov1@student.gsu.edu
#omadjitov1

#Prompt a User
echo "Which command manual would you like to see ?"       
#Read a user
read input  
#if first grep -q line is true then grep mandatabase using $input              
if grep -q $input mandatabase.txt; 
then grep $input mandatabase.txt; 
else
echo "No such command found"
fi
