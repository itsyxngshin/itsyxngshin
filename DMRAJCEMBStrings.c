
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* Lab Output in IT 104 - Data Structure and Algorithm */
/* Group Output by:
	Danielle Marie O. Rubis
	Adornado B. Cabalbag Jr
	Ella Mae A. Balderama
	*/
/* September 18, 2023 */

void morphSubStr (char*); /*substring function*/
int yieldLength (char*); /*yield the string length*/
void traverseStr (char*); /*traverse in every character of the string*/
void concatString (char*); /*combine two strings*/
void insertElement (char*); /*insert a character in a specific index*/
void oblitElement (char*); /*delete a character at a specific index*/
void appendStr (char*); /*add the content of a string variable to another*/
void mimicString (char*); /*copy a string to another string variable*/
void compareStr (char*); /*compare a string*/


int main(){
	
	int projectLen = 0; 
	char userInput[1000]; 
	char userOption; 
	
	do {
		printf ("\nEnter a particular string: "); 
		gets (userInput); 
		
		puts ("\n\t Choose a function to execute: "); 
		puts ("\t A. Get Substring");
		puts ("\t B. Get String Length");
		puts ("\t C. Traverse String");
		puts ("\t D. Concatenation of String");
		puts ("\t E. Insert Element on a String"); 
		puts ("\t F. Delete Element from a String");
		puts ("\t G. Appending a string"); 
		puts ("\t H. Compare strings");
		puts ("\t I. Copy strings"); 
		puts ("\t X. EXIT\n"); 
		
		printf ("Enter input: ");
		userOption = getchar();
		getchar (); 
		
		if (userOption == 'a' || userOption == 'A'){
			morphSubStr(userInput);
		}
		
		else if (userOption == 'b' || userOption == 'B'){
			
			projectLen = yieldLength(userInput);
			printf ("The string length of %s is: %d\n", userInput, projectLen); 
			system("pause"); 
		}
		
		else if (userOption == 'c' || userOption == 'C'){
			traverseStr(userInput);
		}
		
		else if (userOption == 'd' || userOption == 'D'){
			concatString (userInput); 
		}
		
		else if (userOption == 'e' || userOption == 'E'){
			insertElement (userInput); 			
		}
		
		else if (userOption == 'f' || userOption == 'F'){
			oblitElement (userInput); 	
		}
		
		else if (userOption == 'g' || userOption == 'G'){
			appendStr (userInput); 
		}
		
		else if (userOption == 'h' || userOption == 'H'){
			compareStr (userInput); 
		}
		
		else if (userOption == 'i' || userOption == 'I'){
			mimicString (userInput); 
			
		}
		
		else if (userOption == 'x' || userOption == 'X'){
			
			puts ("Thank you for accesing our program!"); 
		}
		
		else {
			puts ("Invalid input"); 
		}
	}
	while (userOption != 'x' || userOption != 'X'); 
	
	
}

void morphSubStr (char *strInput){
	//Substring
	int startInt = 0; 
	int endingInt = 0;
	int track = 0;
	int i = 0;
	char yieldSub[100]; 
	
	printf ("Enter a starting index: ");
	scanf ("%d", &startInt);
	
	do {
		printf ("\nEnter an ending index: "); 
		scanf ("%d", &endingInt);
		
		if (endingInt > strlen(strInput)){
			printf ("Index must not exceed the string length"); 
		}
	}
	while (endingInt > strlen(strInput)); 
	
	for (i = startInt - 1; i < endingInt; i++){
		yieldSub[track] = strInput[i];
		track++; 
	}
	
	yieldSub[track]= '\0'; 
	printf ("Substring: %s \n", yieldSub);
	system("pause"); 
}

int yieldLength (char *entryStr){
	
	int length_outcome = 0; 
	
	while (entryStr[length_outcome] != '\0'){
		length_outcome++; 		
	}
	
	return length_outcome; 
	
}

void traverseStr (char *newString){
	
	int i = 0; 
	
	for (i = 0; newString[i] != '\0'; i++){
		printf ("%c ", newString[i]); 
	}
	printf ("\n"); 
	system("pause"); 
}

void concatString (char *blue){
	//Concatenation
	
	char instantiate[100]; 
	char resultantStr[100]; 
	char select; 
	
	int count1 = 0, count2 = 0; 
	
	do {
		printf ("Select: \n");
		printf ("A. String 2 + String 1 \n");
		printf ("B. String 1 + String 2 \n\n");
		printf ("Enter Input: ");
		select = getchar();
		getchar();
		
		if (select == 'A'){
			
			/*concatenating another string*/
			printf ("\n Enter another string: "); 
			gets (instantiate);
	
			while (instantiate[count1] != '\0'){
				resultantStr[count1] = instantiate[count1];
				count1++; 
			}
			
			while (blue[count2] != '\0'){
				resultantStr[count1] = blue[count2];
				count1++; 
				count2++; 
			}
	
			resultantStr[count1] = '\0';
			printf ("Concatenated outcome: %s \n", resultantStr);
			system("pause");
		}
		
		else if (select == 'B'){
			
			/*concatenating another string*/
			printf ("\n Enter another string: "); 
			gets (instantiate);
	
			while (blue[count1] != '\0'){
				resultantStr[count1] = blue[count1];
				count1++; 
			}
			
			while (instantiate[count2] != '\0'){
				resultantStr[count1] = instantiate[count2];
				count1++; 
				count2++; 
			}
	
			resultantStr[count1] = '\0';
			printf ("Concatenated outcome: %s \n", resultantStr);
			system("pause");
			
		}
	}
	
	while (select != 'A' && select != 'B'); 
 	
}

void insertElement (char *specimenLine){
	
	char wedge; 
	int length_outcome = 0; 
	int insertNth = 0; 
	
	while (specimenLine[length_outcome] != '\0'){
		/*find length*/
		length_outcome++; 		
	}
		
	printf ("Enter the index number to insert at: "); 
	scanf ("%d", &insertNth); 
	
	printf ("Enter character to be inserted: ");
	getchar();
	scanf ("%c", &wedge);
	
	while (length_outcome > insertNth - 1){
		specimenLine[length_outcome + 1] = specimenLine[length_outcome];
		length_outcome--; 
	}
	
	specimenLine[insertNth] = wedge; 
	printf ("Modified version: %s \n", specimenLine); 
	system("pause");
	
}

void oblitElement (char *extension){
	
	int a = 0;
	int promptDelete = 0;
	
	printf ("Enter the index of the character you want to delete: ");
	scanf ("%d", &promptDelete); 
	
	while (extension[a] != '\0'){
		if (a == promptDelete){
			while (extension [a] != '\0'){
				extension[a] = extension[a + 1];
				a++;
			}
			break;
		}
		a++; 
	}
	
	printf ("Modified string with deleted char: %s \n", extension); 
	system("pause"); 
	
}

void appendStr (char *spreadStr){
	
	char toCopy[100]; 
	char yield[100]; 
	int digi1 = 0, digi2 = 0; 
	
	while (spreadStr[digi1] != '\0'){
		yield[digi1] = spreadStr[digi1];
		digi1++; 
	}
	
	/*concatenating another string*/
	printf ("\n Enter another string: "); 
	gets (toCopy); 
	
	while (toCopy[digi2] != '\0'){
		yield[digi1] = toCopy[digi2];
		digi1++; 
		digi2++; 
	}
	
	yield[digi1] = '\0';
	printf ("Concatenated outcome: %s \n", yield);
	system("pause");
	
	
}

void mimicString (char *originalStr){
	
	/*copy*/
	int track = 0; 
	char mimickedStr[100]; 
	
	while (originalStr[track] != '\0'){
		mimickedStr[track] = originalStr[track];
		track++; 
	}
	
	mimickedStr[track] = '\0'; 
	
	printf ("Copied string: %s", mimickedStr); 
	system("pause");
	
}

void compareStr (char *strPhrase){
	
	/*contributed by Ms. Rubis */
	
	char comparatorStr[100]; 
	int indicate = 0; 
	
	printf ("Enter a string to compare with: ");
	gets (comparatorStr); 
	
	while (strPhrase[indicate] == comparatorStr[indicate]){
		if (strPhrase[indicate] == '\0' || comparatorStr[indicate] == '\0'){
			break; 
		}
		indicate++;
	}
	
	if (strPhrase[indicate] == '\0' && comparatorStr[indicate] == '\0'){
		printf ("String 1 and String 2 are equal \n"); 
		system("pause");
	}
		
	else  {
		printf ("String 1 and 2 are not equal\n");
		system("pause"); 
	}
	
}
