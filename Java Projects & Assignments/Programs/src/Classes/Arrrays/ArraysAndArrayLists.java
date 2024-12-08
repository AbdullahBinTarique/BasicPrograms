package Classes.Arrrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

import static java.lang.System.exit;

public class ArraysAndArrayLists {
    public static void main(String[] args) {
        int opn;
        System.out.println("""
                Welcome to the program
                Choose an option
                0)End program 1)Add item (Input Comma delimited values)
                2)Remove Item (Input index to remove the item)
                """);
        Scanner sc = new Scanner(System.in);
        ArrayList<String> GI=new ArrayList<>();

        while(true) {

            opn = sc.nextInt();
            switch (opn) {
                case 0: {
                    exit(0);
                    break;
                }
                case 1:{
                    Input(GI);
                    break;
                }
                case 2:{
                    Remove(GI);
                    break;
                }
                default: {
                    System.out.println("Please enter correct options");
                }
            }
        }
    }

    private static void Input(ArrayList<String> GI){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a list of Items(comma delimited)");
        String str=sc.nextLine();
        String[] strArr=str.split(",");
        for (String s : strArr) {
                if (!(GI.contains(s)))
                    GI.add(s);
            }


        GI.sort(Comparator.naturalOrder());

        System.out.println(GI);
    }
    private static void Remove(ArrayList<String> GI){
        Scanner sc = new Scanner(System.in);
        if (!GI.isEmpty()) {
            System.out.println("Enter item name to remove element(comma delimited)");
            String str = sc.nextLine();
            String[] strArr = str.split(",");
            for (String s : strArr) {
                GI.remove(s);
            }
            System.out.println(GI);
        }
    }
}
