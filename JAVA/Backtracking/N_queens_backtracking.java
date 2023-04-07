public class N_queens_backtracking {
    public static void placeQueen(char Board[][], int row) {

    }

    public static void printBoard(char Board[][]) {
        System.out.println("----------------Chess Board-----------------");
        for (int i = 0; i < Board.length; i++) {
            for (int j = 0; j < Board.length; j++) {
                System.out.print(Board[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int N = 4;

        char Board[][] = new char[N][N];

        // Initiating
        for (int i = 0; i < Board.length; i++) {
            for (int j = 0; j < Board.length; j++) {
                Board[i][j] = 'X';
            }
        }
        placeQueen(Board, 0);
    }
}
