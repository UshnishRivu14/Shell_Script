echo "Enter a number"
read num

if [ "$num" -gt "0" ];
then
	echo "IT is positive"
elif [ "$num" -lt "0" ];
then
	echo "IT is negative"
elif [ "$num" = "0" ];
then
	echo "It is zero"
else
	echo "Wrong Input"
fi				
