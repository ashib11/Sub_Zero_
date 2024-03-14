package oop2.oop.first;

public class Student {

    String name;
    int age;

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public static void main(String[] args) {
        Student student1 = new Student("Ean Craig", 11);
        Student student2 = new Student("Evan Ross", 12);

        System.out.println(student1.getName() + " is " + student1.getAge() + " years old.");
        System.out.println(student2.getName() + " is " + student2.getAge() + " years old.\n");

        student1.setAge(14);
        student1.setName("Ean Craig");

        student2.setName(("Lewis Jordan"));
        student2.setAge((12));

        System.out.println(student1.getName() + " is " + student1.getAge() + " years old.");
        System.out.println(student2.getName() + " is " + student2.getAge() + " years old.");

    }
}