cat /etc/passwd | grep -v '#' | sed 's/:.*//'|sed 'n;d' |rev| sed -n "${FT_LINE1},${FT_LINE2}"p| tr '\n' ','|sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
