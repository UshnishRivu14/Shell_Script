pre_usr="rivu"
pre_pass="14092003"

echo "Enter your username"
read user
echo "Enter your password"
read pass

if [ "$user" == "$pre_usr" ] && [ "$pass" == "$pre_pass" ] ;
then
	echo "Success!"
else :
	echo "Error!"
fi		
