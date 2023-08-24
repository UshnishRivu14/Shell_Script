echo "Enter a string"
read string

revstring=$(echo $string | rev)

if [ "$string" == "$revstring" ];
then
	echo "It is palindrome"
else :
	echo "It is not palindrome"
fi		

