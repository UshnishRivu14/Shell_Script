echo "Enter a filename: "
read directory

if [ -d "$directory" ];
then
	echo "The following files and directories are in $directory"
	ls -al "$directory"
else :
	echo "The input is not a directory"
fi		
