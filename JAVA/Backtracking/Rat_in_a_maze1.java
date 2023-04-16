public class Rat_in_a_maze1 {

    public static boolean solveMaze(int maze[][], int x, int y, int path[][]) {

        if (x == -1 || y == -1 || x == 3 || y == 3 || path[x][y] == 1 || maze[x][y] == 0) {
            return false;
        }

        path[x][y] = 1;

        if (x == maze.length - 1 && y == maze.length - 1) {
            for (int i = 0; i < path.length; i++) {
                for (int j = 0; j < path.length; j++) {
                    System.out.print(path[i][j] + " ");
                }
                System.out.println();
            }
            return true;
        }

        if (solveMaze(maze, x - 1, y, path)) {
            return true;
        }
        if (solveMaze(maze, x, y + 1, path)) {
            return true;
        }
        if (solveMaze(maze, x + 1, y, path)) {
            return true;
        }
        if (solveMaze(maze, x, y - 1, path)) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        int maze[][] = { { 1, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 } };
        int path[][] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
        boolean pathPossib1e = solveMaze(maze, 0, 0, path);

        System.out.println(pathPossib1e);
    }
}