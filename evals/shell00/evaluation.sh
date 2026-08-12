folder=$1
option=$2

begin=$PWD

cd $folder/ex${option}

echo "working in $PWD"
case $option in

  00) # Z
      if [[ "$(cat z)" == "Z"  ]] ; then
	  echo "Exercise $option is correct" ;
      else
	  echo "Exercise $option is not correct" ;
      fi
      ;;

  01) # testShell00
      # 1. Check single file
      testCommand=$(ls -1)
      echo $testCommand | cat -e
      if [[ "$testCommand" != "testShell00.tar" ]] ; then
	  echo "Tarball not found or other files present"
	  cd -
	  exit 1
      fi
      

      # 2. Untar
      tar xf testShell00.tar

      testCommand=$(ls -l | grep "\-r\-\-r\-xr\-x" | grep "1 marisous" | grep "40 jun  1 23:42 testShell00" | wc -l)
      if [[ "$testCommand" == "1" ]]; then
	  echo "Exercise $option is correct" ;
      else
	  echo "Exercise $option is not correct" ;
	  echo "Check ownership, size and timestamp of change:"
	  echo  "-r--r-xr-x 1 marisous 2026_lisboa    40 jun  1 23:42 testShell00 <-- correct"
	  ls -l
      fi
      
      ;;

	  
  02) # Oh yeah, mooore...
      # 1. Check single file
      testCommand=$(ls -1)
      echo $testCommand | cat -e
      if [[ "$testCommand" != "exo2.tar" ]] ; then
	  echo "Tarball not found or other files present"
	  cd -
	  exit 1
      fi
      

      # 2. Untar
      tar xf exo2.tar

      echo
      testCommand1=$(ls -l | grep -v test6 | grep test0 | grep "drwx\-\-xr\-x" | wc -l)
      testCommand2=$(ls -l | grep -v test6 | grep test0 | grep "2 marisous" | wc -l)
      testCommand3=$(ls -l | grep -v test6 | grep test0 | grep "jun  1 20:47" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file0="1" ;
	  echo "file0 is ok"
	  
      else
	  file0="0" ;
	  echo "Error in file0:"
	  ls -l | grep -v test6 | grep test0
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi

      echo
      testCommand1=$(ls -l | grep test1 | grep "\-rwx\-\-xr\-\-" | wc -l)
      testCommand2=$(ls -l | grep test1 | grep "1 marisous" | wc -l)
      testCommand3=$(ls -l | grep test1 | grep "4 jun  1 21:46" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file1="1" ;
	  echo "file1 is ok"
      else
	  file1="0" ;
	  echo "Error in file1:"
	  ls -l | grep test1
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi

      echo
      testCommand1=$(ls -l | grep test2 | grep "dr\-x\-\-\-r\-\-" | wc -l)
      testCommand2=$(ls -l | grep test2 | grep "2 marisous" | wc -l)
      testCommand3=$(ls -l | grep test2 | grep "jun  1 22:45" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file2="1" ;
	  echo "file2 is ok"
      else
	  file2="0" ;
	  echo "Error in file2:"
	  ls -l | grep test2
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi
      
      echo
      testCommand1=$(ls -l | grep test3 | grep "\-r\-\-\-\-\-r\-\-" | wc -l)
      testCommand2=$(ls -l | grep test3 | grep "2 marisous" | wc -l)
      testCommand3=$(ls -l | grep test3 | grep "1 jun  1 23:44" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file3="1" ;
	  echo "file3 is ok"
      else
	  file3="0" ;
	  echo "Error in file3:"
	  ls -l | grep test3

      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi

      
      echo
      testCommand1=$(ls -l | grep test4 | grep "\-rw\-r\-\-\-\-x" | wc -l)
      testCommand2=$(ls -l | grep test4 | grep "1 marisous" | wc -l)
      testCommand3=$(ls -l | grep test4 | grep "2 jun  1 23:43" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file4="1" ;
	  echo "file4 is ok"
      else
	  file4="0" ;
	  echo "Error in file4:"
	  ls -l | grep test4
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi

      
      echo
      testCommand1=$(ls -l | grep test5 | grep "\-r\-\-\-\-\-r\-\-" | wc -l)
      testCommand2=$(ls -l | grep test5 | grep "2 marisous" | wc -l)
      testCommand3=$(ls -l | grep test5 | grep "1 jun  1 23:44" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file5="1" ;
	  echo "file5 is ok"
      else
	  file5="0" ;
	  echo "Error in file5:"
	  ls -l | grep test5
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi

      
      echo
      testCommand1=$(ls -l | grep test6 | grep "lrwxrwxrwx" | wc -l)
      testCommand2=$(ls -l | grep test6 | grep "\-> test0" | grep "1 marisous" | wc -l)
      testCommand3=$(ls -l | grep test6 | grep "5 jun  1 22:20" | wc -l)
      if [[ "$testCommand1" == "1" ]] && [[ "$testCommand2" == "1" ]] && [[ "$testCommand3" == "1" ]] ; then
	  file6="1" ;
	  echo "file6 is ok"
      else
	  file6="0" ;
	  echo "Error in file6:"
	  ls -l | grep test6
      fi
      
      if [[ "$testCommand1" == "0" ]] ; then
	  echo "Error in ownership."
      fi
      if [[ "$testCommand2" == "0" ]] ; then
	  echo "Error in hard/symb links."
      fi
      if [[ "$testCommand3" == "0" ]] ; then
	  echo "Error in size or timestamp."
      fi
      
      echo

      if [[ "$file0" == "1" ]] && \
	     [[ "$file1" == "1" ]] && \
	     [[ "$file2" == "1" ]] && \
	     [[ "$file3" == "1" ]] && \
	     [[ "$file4" == "1" ]] && \
	     [[ "$file5" == "1" ]] && \
	     [[ "$file6" == "1" ]] ; then
	  echo "Exercise $option is correct" 
      else
	  echo "Exercise $option is not correct" 
	  echo "Solve ownership issues with chmod."
	  echo "Solve link issues with ln or ln -s."
	  echo "Solve size by editing files with N caracters."
	  echo "Solve timestamp issues with touch (-h) -t MMDDhhmm."
      fi
      

      ;;

  03) # SSH me!
      
      testCommand=$(cat id_ed25519_pub | wc -l)
      if [[ "$testCommand" == "1" ]]; then
	  echo "Exercise $option is correct" ;
      else
	  echo "Exercise $option is not correct" 
	  ls -l
      fi

      ;;

  04)
      # 1. Check single file
      testCommand=$(ls -1)

      if [[ "$testCommand" != "midLS" ]] ; then
	  echo "File midLS not found or other files present"
	  cd -
	  exit 1
      fi
      # midLS
      testCommand1=$(bash midLS | grep midLS | wc -l )
      if [[ "$testCommand1" == "1" ]]; then
	  test1="1"
      else
	  test1="0"
      fi
      cd ..
      testCommand2=$(bash ex04/midLS | grep ex04 | wc -l )
      if [[ "$testCommand2" == "1" ]]; then
	  test2="1"
      else
	  test2="0"
      fi
      

      if [[ "$test1" == "1" ]] && \
	     [[ "$test2" == "1" ]] ; then
	  echo "Exercise $option is correct" 
	  echo bash ex04/midLS
      else
	  echo "Exercise $option is not correct"
	  pwd
	  ls
	  cd ex04
	  echo bash midLS
	  cd ..
	  echo bash ex04/midLS
      fi

      ;;

  05) # GiT commit
      # 1. Check single file
      testCommand=$(ls -1)
      echo $testCommand | cat -e
      if [[ "$testCommand" != "git_commit.sh" ]] ; then
	  echo "File git_commit.sh not found or other files present"
	  cd -
	  exit 1
      fi
      
      # 2.
      testcommand1=$(bash git_commit.sh | cat -e | wc -l)
      if [[ "$testCommand1" != "5" ]] ; then
	  echo "Less than 5 commits found."
      fi

      testcommand2=$(bash git_commit.sh | cat -e | wc -c)
      if [[ "$testCommand2" != "5" ]] ; then
	  echo "test"
      fi
      
      ;;

  
  *)
    echo Option not available: $option
    ;;

esac
cd $begin
