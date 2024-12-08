package Classes.Arrrays;

import java.util.Arrays;
import java.util.Scanner;
public class Array {
    public static void main(String[] args){
        int[] Arr=getArr();
        System.out.println("The min val is "+getMinVal(Arr));
        System.out.println("The rev Array is "+ Arrays.toString(revArr(Arr)));
    }
    private static int getMinVal(int[] Arr){
        int min=Integer.MAX_VALUE;
        for (int i=0;i<Arr.length;i++) {
            if (min > Arr[i])
                min = Arr[i];
        }
        return min;
    }
    private static int[] getArr(){
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter a list of integers with \",\" ");
        String str=sc.nextLine();
        String[] strArr=str.split(",");
        int[] intArr=new int[strArr.length];
        for(int i=0;i<intArr.length;i++) {
            intArr[i] = Integer.parseInt(strArr[i].trim());
        }
        return intArr;
    }
    private static int[] revArr(int[] Arr){
        int[] revArr=new int[Arr.length];
        for(int a=0;a<Arr.length;a++)
            revArr[a]=Arr[Arr.length-a-1];

        return revArr;
    }
}
