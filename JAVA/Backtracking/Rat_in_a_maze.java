/*
 * Rat_in_a_maze
 */
public class Rat_in_a_maze {
    public static boolean isValidPos(int maze[][], int m, int n, int path[][]) {
        if (m == -1 || n == -1 || m == 3 || n == 3 || path[m][n] == 1 || maze[m][n] == 0) {
            return false;
        }
        return true;
    }

    public static void isPath(int maze[][], int x, int y, int path[][]) {
        int i = x, j = y;
        if (x == maze.length - 1 && y == maze.length - 1) {
            System.out.println("True");
            System.exit(1);
        }

        path[x][y] = 1;
        if (isValidPos(maze, --i, j, path)) {
            x--;
            isPath(maze, x, y, path);

        } 
        i = x;
        j = y;

        if (isValidPos(maze, i, ++j, path)) {
            y++;
            isPath(maze, x, y, path);
        }

        i = x;
        j = y;
        if (isValidPos(maze, ++i, j, path)) {
            x++;
            isPath(maze, x, y, path);
        }

        i = x;
        j = y;
        if (isValidPos(maze, i, --j, path)) {
            y--;
            isPath(maze, x, y, path);
        }

        i = x;
        j = y;
        System.out.println("False");

    }

    public static void main(String[] args) {
        int maze[][] = { { 1, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 } };
        int path[][] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
        isPath(maze, 0, 0, path);
    }
}