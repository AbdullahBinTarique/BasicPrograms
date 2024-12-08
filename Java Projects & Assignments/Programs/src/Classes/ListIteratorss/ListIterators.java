package Classes.ListIteratorss;

import java.util.*;

import static java.lang.System.exit;
import static java.lang.System.setOut;

record Tours(String name,int dist){
    public String getName(){
        return name;
    }
    public int getDist(){
        return dist;
    }
}
class ListIteratorrs{
    public static void main(String[] args){
        ListIteratorrs nobj=new ListIteratorrs();
        ListIteratorrs.driver();

    }
    public static void driver(){
        char opn;int count=0;
        Scanner sc=new Scanner(System.in);
        LinkedList<Tours> mytour=new LinkedList<Tours>();
        System.out.println("""
                           Choose an option
                           (A)dd
                           (R)emove
                           (F)orward
                           (B)ackward
                           (L)ist Places
                           (Q)uit""");
        while(true) {
            System.out.println("Choose" );
            opn = sc.nextLine().charAt(0);
            switch (opn) {
                case 'A'-> add(mytour);
                case 'R'-> remove(mytour);
                case 'F' -> forward(mytour,count);
                case 'B' -> backward(mytour,count);
                case 'L' -> lisplace(mytour);
                case 'Q' -> exit(0);
                default -> System.out.println("Choose Correct options");

            }
        }
    }
    public static void forward(LinkedList<Tours> mytour,int count){

        if(itr.hasNext()) {
            Tours tour=itr.next();
            System.out.println("Next destination is " + tour.getName() + "Dist is " + tour.getDist());
        }
        else System.out.println("Last destination reached, Use (B)ackward from MM");
    }

    public static void backward(LinkedList<Tours> mytour,ListIterator<Tours> itr){

        if(itr.hasPrevious()) {
            Tours tour=itr.previous();
            System.out.println("Previous destination is " + tour.getName() + "Dist is " + tour.getDist());
        }
        else System.out.println("First destination reached, Use (F)orward from MM");
    }

    public static void lisplace(LinkedList<Tours> mytour){
        System.out.println("Places       Distance");
        for(Tours tour:mytour)
            System.out.println(tour.getName()+"       "+tour.getDist());;
    }

    public static void add(LinkedList<Tours> mytour){
        Scanner sc=new Scanner(System.in);int count=0;
        System.out.println("Enter Location and Distance to add");
        String source=sc.nextLine().trim();int dest=sc.nextInt();
        Tours tr=new Tours(source, dest);
        if(mytour.isEmpty())
            mytour.add(tr);
        else {
            for(Tours tour:mytour)
                if (tour.getName().equals(tr.getName())) {
                    count++;
                }
            if(count==0)
                mytour.add(new Tours(source, dest));
            else System.out.println("Already Exists");


        }

    }

    public static void remove(LinkedList<Tours> mytour){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Location to remove");

        String str=sc.nextLine().trim();
        for(Tours tour:mytour)
            if(tour.getName().equals(str)){
                mytour.remove(tour);
                System.out.println("Removed");
        return;}
        System.out.println("Doesn't Exists");
    }
 }