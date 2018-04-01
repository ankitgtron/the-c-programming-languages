 Although it is not possible to check for all possible errors.
 Testing shows the presence, not the absence of bugs .
 But here we can find some bugs easily :
 
 input file contains word like "you are ". Is it two word or one?
 input file contains word like I'm . Is it two word or one?
 input file contains word like east-west . Is it two word or one?
 input file contains zero words
 input file contains 1 enormous word without any newlines
 input file contains all white space without newlines
 input file contains 66000 newlines
 input file contains word/{huge sequence of whitespace of different kinds}/word
 input file contains 66000 single letter words, 66 to the line
 input file contains 66000 words without any newlines
 input file is /usr/dict contents (or equivalent)
 input file is full collection of moby words
 input file is binary (e.g. its own executable)
 input file is /dev/nul (or equivalent) 
