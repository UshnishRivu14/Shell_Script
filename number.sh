echo "Enter a number"
read num

if [ $num -gt '0' ]
then
	echo "It is a positive number"
elif [ $num -lt '0' ]
then 
	echo "It is a negative number"
elif [ $num = '0' ]		
then 
	echo "It is zero"
else
	echo "You entered an illegal number or something else"
fi	
