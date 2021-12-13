#/bin/bash

/* Check Error Script */



echo "Try to find out some errors!!!"
# Search for the words which can be matched by regex [^a]*ce
# And save the output to file "Result"

echo "The regex [^a]*ce can match the string(s):" > Result

grep '^[^a]*ce$' << END

lance
ace
brace
decide
piece
END

 #Check the existence of file "Result" 
 #Send the content in "Result" to your emailbox 
 #$1 is replaced by your campusID 

 ls Result | mailx omadjitov1@student.gsu.edu < Result 
 
 # $1 is replaced by your campusID 
echo "The result has been sent to ${1}@student.gsu.edu" 
echo "Congratulations! You have corrected all the errors!"
