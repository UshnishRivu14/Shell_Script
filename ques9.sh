echo "Enter a number to find its multiplication table"
read num

echo "The multiplication table of $num is: "
for i in {1..10}
do
	echo "$num * $i = " $(($num*$i))
done

