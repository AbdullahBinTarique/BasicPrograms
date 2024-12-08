package Classes.Generics;

class Leet2079{
    public static void main(String[] args) {
        int arr[]=new int[]{2,2,3,3};
        Solution s=new Solution();
        System.out.println(s.wateringPlants(arr,5));
    }
}
class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int steps=0; int temp=capacity;int n=plants.length;
        for(int a=0; a<n;a++){
            if(temp>=plants[a])
            {
                steps+=1;
                temp=temp-plants[a];


            }
            else{
                steps+=2*a;
                temp=capacity;
                a--;
            }

        }
        return steps;

    }
}