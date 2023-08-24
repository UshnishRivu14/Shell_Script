echo "Enter a filename"
read file

if [ ! -f $file ];
then 
	echo "It doesnot exist"
	exit
fi

num_lines=$(wc -l < $file)
num_words=$(wc  -w < $file)
num_char=$(wc -m < $file )

echo "The number of lines: $num_lines"
echo "The number of words: $num_words"
echo "The number of characters: $num_char"	
