ldapsearch -Q '(sn=*bon*)' cn | grep cn: | wc -l | tr -d ' '
