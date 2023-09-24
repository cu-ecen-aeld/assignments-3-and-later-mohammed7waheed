#!/bin/sh

if [ $# -lt 2 ]
then
echo "two arguments required"
echo "files path and string to be inserted"
exit 1
else
echo "2 arguments received successfully"
fi

writefile=$1
writestr=$2
directory=` dirname ${writefile} `

if [ -d "${directory}" ]
then
echo "directory exists"
else
echo "creating directory first"
mkdir -p $directory
	if [ -d "${directory}" ]
	then
	echo "created directory"
	else
	echo "cannot create directory"
	exit 1 
	fi
fi

touch $writefile
echo $writestr > $writefile

if [ -f "$writefile" ]
then
echo "file created"
else
echo "cannot create file"
exit 1
fi


