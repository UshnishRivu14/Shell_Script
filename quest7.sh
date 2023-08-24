echo "Enter a filename"
read file

if [ -e $file ];
then
	echo "$file exists in the current directory"
else
	echo "$file doesnt exists in the current directory"
fi	
