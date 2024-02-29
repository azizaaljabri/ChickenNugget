#include <stdio.h>

// struct for maze
struct Maze {
    char** mazeLayout; 
    int mazeHeight;   
    int mazeWidth;     
    int posRow; 
    int posCol; 
};

// denining the functions 
void loadMaze(struct Maze *maze, const char *filename);
int movePlayer(struct Maze *maze, char direction);
void showMap(const struct Maze *maze);
int checkWin(const struct Maze *maze);
void initializeMaze(struct Maze *maze, int mazeHeight, int mazeWidth);
void freeMaze(struct Maze *maze);
int validateMaze(const struct Maze *maze);

int main(int argc, char *argv[]) {
    char filename[50];

    //get maze name
    printf("Enter the maze filename: ");
    scanf("%s", filename);

    // get the maze
    struct Maze maze;
    loadMaze(&maze, filename);

    // Check maze validity
    if (!validateMaze(&maze)) {
        printf("Please Enter a valid maze.\n");
        freeMaze(&maze);
        return 1;
    }

    // While loop for the game
    while (1) {
        //code for the game

        // To check if htey made it to the end point
        if (checkWin(&maze)) {
            printf("You have completed the maze!\n");
             break;
        }
    }


    // TO free allocated memory
    freeMaze(&maze);

    return 0;
}

// FUNCTIONS: 
// to get the maze file
void loadMaze(struct Maze *maze, const char *filename) {
    // code to load the maze
    
}

// For moving the player
int movePlayer(struct Maze *maze, char direction) {
    // code to move palyer
}

// to show the map
void showMap(const struct Maze *maze) {
    // code to show the map
}

// To check win condition 
int checkWin(const struct Maze *maze) {
    // code to check win condition
}

// initialising the maze
void initializeMaze(struct Maze *maze, int mazeHeight, int mazeWidth) {
    // cdoe to initialise
    
}

// free allocated memory
void freeMaze(struct Maze *maze) {
    // code to free alocated memory
}
// check maze validity 
int validateMaze(const struct Maze *maze) {
    // code to check if maze is valid
}


