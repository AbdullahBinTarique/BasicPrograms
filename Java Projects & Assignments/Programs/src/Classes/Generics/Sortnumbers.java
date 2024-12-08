package Classes.Generics;

import java.util.*;
class sortnumbers{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);int c=0;//int b=0;
        System.out.println();
        int arr[]=new int[]{1,0,2,1,5,0,6,2,0};
        for(int a=arr.length-1;a>=0;a--){
            if(arr[a]==0) {
                c=a;
                if(c<arr.length-1)
                    try{
                        for (int b = arr.length - a - 1; b >= 0; b--) {
                            arr[c] = arr[c] + arr[c + 1];
                            arr[c + 1] = arr[c] - arr[c + 1];
                            arr[c] = arr[c] - arr[c + 1];
                            c++;
                        }
                    }
                    catch(Exception e){
                        System.out.println("Out of bound");
                    }
            }
        }
        for(int a=0;a<arr.length;a++){
            System.out.println(arr[a]);
        }
    }
}
class NewmethodProblem{
    public static void main(String args[]){
        int arr[]=new int[]{1,0,2,1,5,0,6,2,0};int c=0;
        for(int i=0;i<arr.length;i++) {
            if (arr[i] == 0) {
                c = i;
                break;
            }    }
        for(int j=c+1;j<arr.length;j++){
            if(arr[j]!=0){
                int temp=arr[j];
                arr[j]=arr[c];
                arr[c]=temp;
                c++;
            }
        }
        for(int m=0;m<arr.length;m++)
            System.out.println(arr[m]);
    }
}