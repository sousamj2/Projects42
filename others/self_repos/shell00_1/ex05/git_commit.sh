# This was the first implementation:
# grep commit selects only the lines from the last 5 commits that include the word 'commit'
# sed 's/commit //g' is used to search for 'commit ' and replace it by nothing ''
git log -5 | grep commit | sed 's/commit //g'

# Second implementation more used and direct:
# The format %H is the complete hash: with %h it would be only the first 7 chars of the hash.
# git log -5 --format="%H"
