
public class Q5_Triangle {
    public static class Triangle{
    int side1,side2,side3;
    float semiperimeter;

    Triangle(int side1,int side2,int side3)
    {
    	this.side1 = side1;
    	this.side2 = side2;
    	this.side3 = side3;
    }
    
    float getArea(){
        semiperimeter = (float)(side1+side2+side3)/2.0f;
        
    	float area= (float)Math.sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    	return area;
    }
    
    int getPerimeter(){
    	return side1+side2+side3;
    }
}

    public static void main(String[] args) {
        Triangle T = new Triangle(3, 4, 5);
        System.out.println("Area of triangle is = "+T.getArea());
        System.out.println("Perimeter of triangle is = "+T.getPerimeter());

        
    }
}
