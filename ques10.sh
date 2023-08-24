echo "Enter filename: "
read filename

if [ ! -f $filename  ];
then
	echo "File not found"
	exit
fi

num_lines=$(wc -l < $filename)
num_words=$(wc -w < $filename)
num_chars=$(wc -m < $filename)

echo "Number of lines: $num_lines"
echo "Number of words: $num_words"
echo "Number of characters: $num_chars" 	
