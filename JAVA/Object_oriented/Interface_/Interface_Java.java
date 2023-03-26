
public class Interface_Java {
    public static void main(String[] args) {
        queen q = new queen();
        q.moves();
    }
}

/**
 * player
 */
interface player {

    void moves();
}

class queen implements player {
    public void moves() {
        System.out.println("up, down, left, right, digonal - more than 1 block");
    }
}

class king implements player {
    public void moves() {
        System.out.println("up, down, left, right, digonal - 1 block");
    }
}

class rook implements player {
    public void moves() {
        System.out.println("up, down, left, right");
    }
}