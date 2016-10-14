// in the interest of maxing learning time, i'm skipping these
// last 5 exercises that have to do with text formatting.
// below is the psuedo code for how i would approach them.
//
// 1.20
//replaces tabs in input with spaces.  
//have a variable to represent TABWIDTH at top
//read every line looking for empty line linke
//in the example program.  as you are reading the line keep a char count.
//if you encounter a tab check char count.  modulus divide by TABWIDTH.  
//replace with the corredt number of spaces.  done.
//
//1.21
//replaces spaces with tabs + spaces
//kind of the reverse of the previous, except when you are not right at a tab you
//readlines like in example program
//still keep a char count
//when you encounter a space wait to see if there is another space after it
//this is di"erent than 1.20, because spaces may "span" multiple tabs, whereas you
//can always immediately replaced the tabs with the correct number of spaces and
//it doesn't hurt future operations.
//perform moduls arithmetic replace with the correct tabs plus spaces.
//give preference for tabs - since its a tab replace program
//
//1.22
//this is basically formatting text to fit a fixed width, like a newspaper column.
//define max line width to prevent super long lines MAXLINE
//define a max column width COLUMN
//readlines like in example program, looking for a terminating \n.
//keep a char count
//keep track if you are currently in a word.
//keep track of previous words End_Position in the array.
//if there is no prevoius word, end position is current position in array.
//when char count hits column add a newline character to the string.m at
//the previous word End_Position.
//make sure you write every character and don't lose the last char on the line.
//keep track if you added a newline.  set to 1 if newline added.
//if added newline, update counter for the string (+1) so it writes new characters 
//to the correct spot. set 'added newline' back to 0. 
//give error message if line is too long.  
//done.
//
//1.23 - removing all comments from C program
//note: this would actually be kind of handy to have around
//comments in c are '//' and '/*'.  
//investigate how comment characters act.
//for line comment you can remove everything from it until the '\n' char
//for block comment you must look ahead to the terminating '*/' characters.
//readlines in lik example program
//
//create 2 functions, one to find block comments and one to find line comments
//create incrementers to track line position in the line and also
//which line on the array you are.  when you hit a block comment
//you may add an additional line on the array if teh blcok comment is in the 
//middle of a line (edge case).  so taht's why you need to track.
//
//block comment is dif than line comment b/c it does not terminate the line (below).
//
//BLOCKCOMMENT - line, flag for in block comment, line number of block comment
//
//IF
//flag_check
//check to see if currently in block comment, if so then skip to that char # +1.
//then activate a loop that does not terminate at '\n' but keeps going until it 
//see's the block comment operator.
//ignore all characters (do not record to line) until you see end blcok comment. 
//once end is found, 
//count the number of newlines you encounter, reset internal counter when y
//you see a newline so you can make sure you are on the right line of the arrya.
//may not need to do this if incrementing input line array line elsewhere. . . 
//recursively call block comment function, starting at the position of the 
//end of the block comment operator, the array line + char count position.
//set flag to 0, not in blcok comment

//else if
//quoted_strings_check
//check for quoted strings and do not check for comments in these.
//just increment the line with the char and keep moving.

//else if
//block_comment_start_looker_line_comment_start_looker
//if statement to look for block comment
//look for block comment first in each char
//because this may need to read multiple lines.
//read through the line looking for a block comment, if you find one then
//put a '\n' as the last character on the previous string 
//return that as it's own line (this prevents code from ending up on the same line)
//recursively call BLOCKCOMMENT function with flag set for "in block commetn" = 1
//and a value for where blockcomment should start.
//if you find a line comment, end 
//when you hit a line comment return and go to next line.  not sure how this works
//with file.io, but you may just iterate through the rest of the lin until you
//see a '\n' and not record anything until then.  you basically leave a while loop
//and then go to another while loop that's just reading through the line to get
//to the end.
//return the line.
//
//else
//some sort of error
//
//return the line, add it to the array of lines, update all incrementers appropriately,
//continue to read the next line with block_comment function (really just commetn func)
//store each line in a different section of an array.  will need a double array[][]
//this way you can store the whole file and print the whole file at once. instead
//of just editing one line at a time.
//
//
//DONE!


line comment terminates the line, nothign is code after line comment through newline
// // kdjfls // kdk

block comment doesnt act this way
return /*lksj lsk lkd kdjfls
       jflsldkfjslfkds  */ return more goes here. you can have a line comment after it // here

quotes strings will need to be ignored.:
printf("// /* */")
"// /* */"

//Exercise 1.24
//checking for syntax errors
//
//you don't have ot worry about lines here, just read the file until EOF, yeah!
//
//for quotes, antyhign with the same beginning and end terminator
//set up a count for each of these things
//as you are reading the file increment teh count when you come across them.
//check if count is even.
//
//brackets, etc. set up 2 counts, one for left and one for right
// increment each as you go through the file.
// make sure the numbers equal.
// if not let them know which one they have more and less of (simple compare)
// and print out the variable type.
//
// for block comments - or other things with multi chars i'm unaware
// track the current char and the previous char
// identify when you hit a block comment
// keep a left and right count
// make sure left and right count equal
/// if not let them know which one they have more and less of (simple compare)
// and print out the char types so they can see them (like above)
//
//ignore inside a string cases b/c you can not know if that was intentional or not.
//
"inside a string 'a' ' '''"
