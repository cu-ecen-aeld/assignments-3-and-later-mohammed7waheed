#!/bin/sh

if [ $# -lt 2 ]
then
echo "two arguments required"
echo "directory path and string to be searched"
exit 1
else
echo "2 arguments received successfully"
fi

filesdir=$1
searchstr=$2

if [ -d "$filesdir" ]
then 
echo "valid directory"
else
echo "directory not found enter a correct directory"
exit 1
fi

cd $filesdir

echo "The number of files are `ls | wc -l` and the number of matching lines are `grep -r "${searchstr}" ${filesdir} | wc -l`"
