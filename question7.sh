echo "Enter your file name"
read file

if [ -e "$file" ] 
then
	echo "So, The file $file exists in the current directory"
else	
	echo "The file $file doesnot exists in the current directory"
fi
