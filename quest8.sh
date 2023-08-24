echo "Enter a directory name: "
read director

if [ -d "$director" ];
then
	echo "The following files are in this directory: "
	ls -al $director
else :
	echo "$director does not exist."
fi		
