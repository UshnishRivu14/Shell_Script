preusr="Hero69"
prepas="hero6369"

echo "Enter your username: "
read usr

echo "Enter your password: "
read pass

if [ "$usr" == "$preusr" ] && [ "$pass" == "$prepas" ];
then
	echo " Success! "
else
	echo " Error! "
fi		
