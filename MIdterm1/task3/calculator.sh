
#Omar Madjitov
#omadjitov@student.gsu.edu
#omadjitov1

#!/bin/bash

i=1
while [ $i -le 1 ]
do
echo "Input the Two Numeric Values"
read val1
read val2


echo "Choose the line number of the operation you would like to implement"
echo "1.Addition"
echo "2.Substraction"
echo "3.Multiplication"
echo "4.Divisions"
echo "5.Modulo"
echo "6.Cancel/Exit"
echo "7.Clear"

read val3
case $val3 in
1)res=`expr $val1 + $val2`
echo "The result = "
echo "$res"
exit
;;
2)res=`expr $val1 - $val2`
echo "The result = "
echo "$res"
exit
;;
3)res=`expr $val1 \* $val2`
echo "The result = "
echo "$res"
exit
;;
4)res=`expr $val1 \/ $val2`
echo "The result = "
echo "$res"
exit
;;
5)res=`expr $val1 % $val2`
echo "The result = "
echo "$res"
exit
;;
6)echo "You canceled the code"
exit
;;
7)echo "Clearing the line:"
echo ""
i=1
;;
*)
echo "Invalid Choice"
;;
esac
done
