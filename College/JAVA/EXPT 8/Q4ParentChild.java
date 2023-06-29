class Parent {
    int parentVariable;

    Parent(int a) {
        parentVariable = a;
    }

    void parentMethod()

    {
        System.out.println(" The value of parentVariable = " + parentVariable);
    }
}

class Child extends Parent {
    String childVariable;

    Child(int a, String b) {
        super(a);
        childVariable = b;
    }

    void childMethod() {
        super.parentMethod();
        System.out.println(" The value of childVariable = " + childVariable);

    }
}

public class Q4ParentChild {
    public static void main(String[] args) {
        Child C = new Child(10, "HY");
        C.childMethod();
        
    }

}
