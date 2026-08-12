# 0. Considerations:
# The instructions do not define if we get all files in the gitignore (name only) or if we used the relative path.
# For this reason, I am using the default as the basename and the 'rel' option to get the files in relative path.

# 1. Get working directory: required to know where the .gitignore file is present.
WORKING_DIRECTORY=$(git rev-parse --show-toplevel)

# Accepts 1 argument: $1 used in the second if statement.

# 2 Loop over all lines in the git ignore file.
for ign_line in $(cat $WORKING_DIRECTORY/.gitignore) ; do
    # 2.0 optional echoing of line in git ignore
    # echo "Analysing: $ign_line"
    # 2.1 placeholder for full path name
    FULLPATH=$WORKING_DIRECTORY/$ign_line
    
    # Only execute if the file exists ( -f )
    if [ -f $FULLPATH ] ; then

	# 2.2 if we use the argument $1 as 'rel'
	if [[ "$1" == "rel" ]] ; then
	    
	    # 2.2a Get the relative path w.r.t the WORKING_DIRECTORY
	    echo $ign_line ;
	else
	    # 2.2b Get the basename i.e. only the file name without path
	    basename $ign_line
	fi
    fi
    
done
