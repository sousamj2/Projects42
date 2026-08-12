# 1. Get working directory
WORKING_DIRECTORY=$(git rev-parse --show-toplevel)
option=$1


# 2 Loop over all lines in the git ignore file.
for ign_line in $(cat $WORKING_DIRECTORY/.gitignore) ; do
    # 2.0 optional echoing of line in git ignore
    # echo "Analysing: $ign_line"
    # 2.1 placeholder for full path name
    FULLPATH=$WORKING_DIRECTORY/$ign_line
    # 2.2a Get the relative path w.r.t the WORKING_DIRECTORY
    if [ -f $FULLPATH ] ; then
	if [[ "$1" == "rel" ]] ; then
	    echo $ign_line ;
	fi
    fi
    # 2.2b Get the basename i.e. only the file name without path
	if [[ "$1" != "rel" ]] ; then
	    basename $ign_line
	fi
    
done
