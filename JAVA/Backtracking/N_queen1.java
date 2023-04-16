public class N_queen1 {

    public static boolean checkIfSafe(int board[][], int x, int y) {
        for (int i = x; i > -1; i--) {
            if (board[i][y] == 1) {
                return false;
            }
        }
        for (int i = x, j = y; i > -1 && j > -1; i--, j--) {
            if (board[i][j] == 1) {
                return false;
            }
        }
        for (int i = x, j = y; i >= 0 && j < 5; i--, j++) {
            if (board[i][j] == 1)
                return false;
        }
        // for (int i = x - 1, j = y - 1; i > -1 && j > -1; i--, j--) {
        // if (board[i][j] == 1 || board[i][y] == 1) {
        // return false;
        // }
        // }
        return true;
    }

    public static void placeQueen(int board[][], int x) {
        if (x == 5) {
            for (int i = 0; i < board.length; i++) {
                for (int j = 0; j < board.length; j++) {
                    System.out.print(board[i][j] + " ");
                }
                System.out.println();
            }
            System.out.println();
            return;
        }

        for (int j = 0; j < board.length; j++) {
            if (checkIfSafe(board, x, j)) {

                board[x][j] = 1;
                placeQueen(board, x + 1);
                board[x][j] = 0;
            }
        }

    }

    public static void main(String[] args) {
        int board[][] = new int[5][5];

        placeQueen(board, 0);

    }
}
