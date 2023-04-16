public class Rat_in_a_maze2 {

    public static void solveMaze(int maze[][], int x, int y, int path[][]) {

        if (x == -1 || y == -1 || x == 3 || y == 3 || path[x][y] == 1 || maze[x][y] == 0) {
            return;
        }

        path[x][y] = 1;

        if (x == maze.length - 1 && y == maze.length - 1) {
            for (int i = 0; i < path.length; i++) {
                for (int j = 0; j < path.length; j++) {
                    System.out.print(path[i][j] + " ");
                }
                System.out.println();
            }
            System.out.println();
            path[x][y]=0;
            return;
        }

        solveMaze(maze, x - 1, y, path);
        solveMaze(maze, x, y + 1, path);
        solveMaze(maze, x + 1, y, path);
        solveMaze(maze, x, y - 1, path);
        path[x][y] = 0;
    }

    public static void main(String[] args) {
        int maze[][] = { { 1, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 } };
        int path[][] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
        solveMaze(maze, 0, 0, path);

    }
}