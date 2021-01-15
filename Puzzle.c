#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int counter = 0;
int length;
int star = 0;
void lowerLeftCross(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row++][column--] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column++;
		row--;
		
		for(int i =0;i<length;i++){
			array[row--][column++] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void upperLeftCross(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row--][column--] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column++;
		row++;
		
		for(int i =0;i<length;i++){
			array[row++][column++] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void upperRightCross(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row--][column++] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column--;
		row++;
		
		for(int i =0;i<length;i++){
			array[row++][column--] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}	
}

void lowerRightCross(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row++][column++] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column--;
		row--;
		
		for(int i =0;i<length;i++){
			array[row--][column--] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void leftSearch(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row][column--] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
		if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column++;
		
		for(int i =0;i<length;i++){
			array[row][column++] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void lowerSearch(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row++][column] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		row--;
		
		for(int i =0;i<length;i++){
			array[row--][column] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void rightSearch(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row][column++] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		column--;
		
		for(int i =0;i<length;i++){
			array[row][column--] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		
		}
		star = 1;
	}
}

void upperSearch(char **board,int row,int column,char *word){
	char array[15][15];
	int llength = length-1;
	for(int i=0;i<length-2;i++){
		
		if(board[row--][column] == word[i+2]){
			counter++;
		}
		else{
			counter = 0;
		}
		
	}	
	
	if(counter == length-2){
		
		
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		array[i][j] = '*';
    		}
		}
		row++;
		
		for(int i =0;i<length;i++){
			array[row++][column] = word[llength--];
		}
		
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",array[i][j]);
			}
		printf("\n");
		}
		star = 1;
	}
	
}

int main(){

	char empty;
	char *word = (char*) malloc(sizeof(char)*15);
	char **crossword = (char**) malloc(sizeof(char*)*15);
	
	for (int i=0; i < 15; i++)
    crossword[i] = (char*) malloc(sizeof(char)*15);

	for (int i=0; i < 15; i++){
    	for (int j=0; j < 15; j++){
        	scanf("%c%c",&crossword[i][j],&empty);
    	}
	}
	
	scanf("%s",word);
	length = strlen(word);
    
	
	for (int i=0; i < 15; i++){
    	for (int j=0; j < 15; j++){
        	if(crossword[i][j] == word[0]){
        		if(i != 0){
        			if(crossword[i-1][j] == word[1]){//check for upperSearch
						if(i+1>=length){
							upperSearch(crossword,i-2,j,word);
						}
					}
				}
				
				if(i != 14){
					if(crossword[i+1][j] == word[1]){//check for lowerSearch
						if(i+length<16){
							lowerSearch(crossword,i+2,j,word);	
						}
					}	
				}
				
				if(j != 14){
					if(crossword[i][j+1] == word[1]){//check for rightSearch
						if(j+length<16){
							rightSearch(crossword,i,j+2,word);
						}
					}
				}
				
				if(j != 0){
					if(crossword[i][j-1] == word[1]){//check for leftSearch
						if(j+1>=length){
							leftSearch(crossword,i,j-2,word);
						}
					}
				}
				
				if(j != 14 && i != 14){
					if(crossword[i+1][j+1] == word[1]){//check for lowerRightCross
						if(j+length<16 && i+length<16){
							lowerRightCross(crossword,i+2,j+2,word);
						}
					}
				}
				
				if(j != 14 && i != 0){
					if(crossword[i-1][j+1] == word[1]){//check for upperRightCross
						if(j+length<16 && i+1>=length){
							upperRightCross(crossword,i-2,j+2,word);
						}
					}
				}
				
				if(i != 0 && j != 0){
					if(crossword[i-1][j-1] == word[1]){//check for upperLeftCross
						if(j+1>=length && i+1>=length){
							upperLeftCross(crossword,i-2,j-2,word);
						}
					}
				}
				
				if(i != 14 && j != 0){
					if(crossword[i+1][j-1] == word[1]){//check for lowerLeftCross
						if(i+length<16 && j+1>=length){
                            lowerLeftCross(crossword,i+2,j-2,word);
						}
					}
				}
			}
    	}
	}
	

	
	if(star != 1){
		for (int i=0; i < 15; i++){
    		for (int j=0; j < 15; j++){
        		crossword[i][j] = '*';
    		}
		}
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				printf("%c",crossword[i][j]);
			}
		printf("\n");
		}
	}	
}


