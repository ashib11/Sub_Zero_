package oop2.oop.third;

public class Reactangle {
    double width, height;

    public Reactangle(double w, double h) {
        this.width = w;
        this.height = h;
    }

    public double getHeight() {
        return height;
    }

    public double getWidth() {
        return width;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public static void main(String[] args) {
        Reactangle yo = new Reactangle(10, 20);
        double area = yo.getHeight() * yo.getWidth();
        double pera = 2 * (yo.getHeight() + yo.getWidth());
        System.out.println("The area of the ractangle is " + area);
        System.out.println("The perimeter of the reactangle is " + pera);

        yo.setHeight(50);
        yo.setWidth(40);
        area = yo.getHeight() * yo.getWidth();
        pera = 2 * (yo.getHeight() + yo.getWidth());
        System.out.println("\nThe area of the ractangle is now " + area);
        System.out.println("The perimeter of the reactangle is now " + pera);
    }
}
