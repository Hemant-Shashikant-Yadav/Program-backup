public class oop2 {
    public static void main(String[] args) {
        Bank b = new Bank();

        b.name = "HU";
        b.setPass("jsjsj");

        System.out.println(b.getPass());

        b.display();
    }
}

class Bank {
    public String name;

    private String pass;

    public void setPass(String pass) {
        this.pass = pass;
    }

    public String getPass() {
        return this.pass;
    }

    void display() {
        System.out.println(name);
        System.out.println(pass);
    }

}
