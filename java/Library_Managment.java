class Library{
    String[] Books;
    int No_of_books;
    Library(){
        this.Books = new  String[100];
        this.No_of_books = 0;
    }

    void Add_book(String Book_name){
        this.Books[No_of_books]= Book_name;
        No_of_books++;
        System.out.println(Book_name+" has been added !!");
    }
    void Show_availebal_books(){
        System.out.println("Avalibal Books are : ");
        for(String Book : this.Books){
            if(Book == null){
                continue;
            }
            System.out.println("* "+ Book + " *");
        }
    }
    void issue_book(String Book_name){
        for(int i=0;i<this.Books.length;i++){
            if(this.Books[i].equals(Book_name)){
                System.out.println("the book has been issueed !");
                this.Books[i]=null;
                return;
            }
            System.out.println("this book is not exist" );
        }
    }
    void return_book(String book_name){
        Add_book(book_name);
    }
    
}

public class Library_Managment {
    public static void main(String[] args) {
        Library centeLibrary = new Library();

        centeLibrary.Add_book("java");
        centeLibrary.Add_book("C++");
        centeLibrary.Add_book("python");
        centeLibrary.Show_availebal_books();
        
        centeLibrary.issue_book("C++");
        centeLibrary.Show_availebal_books();
        
        centeLibrary.return_book("C++");
        centeLibrary.Show_availebal_books();
    }
}
