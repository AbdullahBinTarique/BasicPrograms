package Classes.Generics;

import java.util.Scanner;
public class Search {
    public static void main(String args[]){
        int arr[]=new int[]{12,13,1,6,9,4};
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Number you wanna search");
        Src(sc.nextInt(),arr);
    }
    public static void Src(int num,int arr[]){
        for(int a=0;a<6;a++)
            if(arr[a]==num)
            {System.out.println("Element is"+arr[a] );
                return;
            }
        System.out.println("Element not found");
    }

}
