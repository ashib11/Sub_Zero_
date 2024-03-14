package oop2.oop.fourth;

public class DIUEmployee {
    String name, jobTitle;
    double salary, raise;

    public DIUEmployee(String name, String jobTitle, double salary) {
        this.jobTitle = jobTitle;
        this.salary = salary;
        this.name = name;
    }

    public String getJobTitle() {
        return jobTitle;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    public void setJobTitle(String jobTitle) {
        this.jobTitle = jobTitle;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void setRaise(double raise) {
        this.raise = raise;
    }

    public double getRaise() {
        return raise;
    }

    public static void main(String[] args) {
        DIUEmployee employee = new DIUEmployee("Ashibur Rahman", "Professor", 100.00);
        DIUEmployee employee2 = new DIUEmployee("Tanvir Rahman", "Lecturer", 10.00);
        System.out.println("**********DIU Salary Management System**************");
        System.out.println("\nEmployee Details:\n");
        System.out.println("Name: " + employee.getName() + "\nJob Tittle: " + employee.getJobTitle() + "\nSalary: "
                + employee.getSalary());
        System.out.println("\nName: " + employee2.getName() + "\nJob Tittle: " + employee2.getJobTitle() + "\nSalary: "
                + employee2.getSalary());
        System.out.println("\nAfter raising salary:\n");
        employee.setRaise(7);

        System.out.println(employee.getRaise() + "% for '" + employee.getName() + "':");
        System.out.println("Name: " + employee.getName() + "\nJob Tittle: " + employee.getJobTitle() + "\nSalary: "
                + (employee.getSalary() + employee.getSalary() * employee.getRaise() / 100) + "\n");
        employee2.setRaise(12);
        System.out.println(employee2.getRaise() + "% for '" + employee2.getName() + "':");
        System.out.println("Name: " + employee2.getName() + "\nJob Tittle: " + employee2.getJobTitle() + "\nSalary: "
        + (employee2.getSalary() + employee2.getSalary() * employee2.getRaise() / 100));

    }
}
