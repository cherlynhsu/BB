touch -A -000001 bomb.txt
stat -s bomb.txt | sed -n -e 's/^.*st_atime=//p' | awk -F ' ' '{print $1}'
