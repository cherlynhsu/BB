ifconfig | grep ether | sed "s/ether //" | tr -d "\t" | sed s'/\n//g' | sed s'/ *$//' 
