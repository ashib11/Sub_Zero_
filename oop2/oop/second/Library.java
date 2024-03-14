package oop2.oop.second;

public class Library {
    String authorName, bookTittle, bookEdition;

    public Library(String bookTittle, String authorName, String bookEdition) {
        this.authorName = authorName;
        this.bookTittle = bookTittle;
        this.bookEdition = bookEdition;
    }

    public void setAuthorName(String authorName) {
        this.authorName = authorName;
    }

    public void setBookEdition(String bookEdition) {
        this.bookEdition = bookEdition;
    }

    public void setBookTittle(String bookTittle) {
        this.bookTittle = bookTittle;
    }

    public String getAuthorName() {
        return authorName;
    }

    public String getBookEdition() {
        return bookEdition;
    }

    public String getBookTittle() {
        return bookTittle;
    }

    public static void main(String[] args) {
        Library obj1 = new Library("Introduction to Computer Fundamental", "Pk Sinha", "5th");
        Library obj2 = new Library("Introduction to Algorithm", "Thomas H.", "6th");

        System.out.println("**********Digital Library of DIU: Book List***************");
        System.out.println("Book 1 : " + obj1.getBookTittle() + ", Author: " + obj1.getAuthorName() + ", Edition: " + obj1.bookEdition);
        System.out.println("Book 2 : " + obj2.getBookTittle() + ", Author" + obj2.getAuthorName() + ",Edition: " + obj2.bookEdition );

        System.out.println("\nInformation updated!!\n");
        System.out.println("\nUPDATED INFORMATION\n");

        obj1.setBookEdition("6th");
        obj2.setAuthorName("Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein");


        System.out.println("Book 1 : " + obj1.getBookTittle() + ", Author: " + obj1.getAuthorName() + ", Editon: " + obj1.bookEdition);
        System.out.println("Book 1 : " + obj2.getBookTittle() + ", Author" + obj2.getAuthorName() + ",Edition: " + obj2.bookEdition );

    }
}
