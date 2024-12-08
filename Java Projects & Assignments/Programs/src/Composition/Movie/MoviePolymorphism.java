package Composition.Movie;

import java.util.Scanner;

class MoviePolymorphism {
    public static void main(String[] args) {
//        Composition.Movie.Movie mov=new Composition.Movie.Movie("Starwars");
//        mov.watchMovie();
//        Composition.Movie.Movie mov =new Composition.Movie.Adventure("Starwars");
//        mov.watchMovie();
//        Composition.Movie.Movie mov =Composition.Movie.Movie.getMovie("Composition.Movie.Adventure","Jumanji");
//        mov.watchMovie();
//        Composition.Movie.Movie mov =Composition.Movie.Movie.getMovie("Composition.Movie.Scifi","Starwars");
//        mov.watchMovie();
//        Composition.Movie.Movie mov =Composition.Movie.Movie.getMovie("Composition.Movie.Comedy","American pie" );
//        mov.watchMovie();
        Scanner s=new Scanner(System.in);
        while(true){
            System.out.println("Select Options 1)Composition.Movie.Comedy 2)Composition.Movie.Adventure 3)Composition.Movie.Scifi 4)Q to quit");
            String sr=s.nextLine();
            if("qQ".contains(sr)){
                break;
            }
            System.out.println("Enter Title to watch ");
            Movie mov =Movie.getMovie(sr,s.nextLine());
            mov.watchMovie();

        }

    }
}

class Movie{
    private String title;
    public Movie(String title){this.title=title;}
    public void watchMovie(){
        System.out.println(title +" is a "+ getClass().getSimpleName() +" film");
    }
    public static Movie getMovie(String type,String title){
        return switch (type.toUpperCase().charAt(0)){
            case 'A'-> new Adventure(title);
            case 'C'-> new Comedy(title);
            case 'S'-> new Scifi(title);
            default -> new Movie(title);
        };
    }

}

class Adventure extends Movie{
    public Adventure(String title){
        super(title);
    }

    @Override
    public void watchMovie() {
        super.watchMovie();
        System.out.printf(".. %s%n".repeat(3),
                "A pleasant Scene ",
                "Scary Music ",
                "Something Bad Happens ");
    }
}

class  Scifi extends Movie{
    public Scifi(String title){
        super(title);
    }

    @Override
    public void watchMovie() {
        super.watchMovie();
        System.out.printf(".. %s%n".repeat(3),
                "Bad aliens do Bad stuffs",
                "Space guys Chase Aliens ",
                "Planet blows up ");
    }
}

class Comedy extends Movie{
    public Comedy(String title){
        super(title);
    }

    @Override
    public void watchMovie() {
        super.watchMovie();
        System.out.printf(".. %s%n".repeat(3),
                "Something funny happens ",
                "Something more funny happens ",
                "Happy Ending ");
    }
}