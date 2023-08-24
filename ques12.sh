echo "Enter a string:"
read input_str

reverse_str=$(echo $input_str | rev)

if [ "$input_str" == "$reverse_str" ];
then
	echo "$input_str is a palindrome"
else
	echo "$input_str is not a palindrome"
fi		
