package BillsResteraunt;

import java.util.Scanner;

class BillsRestaurant {
    public static void main(String[] args) {
        Meal M=new Meal();

        while(true){
            Meal.menu();
            System.out.println("Plzz do come again");

        }
    }
}
class Meal{
    static Scanner sc=new Scanner(System.in);
static Burger bg;
static Drink dk;
static SItem SI;


public static void menu(){
    System.out.println("""
            Menu,
             bankAccountChallenge.Main Items I.no      ITEM    Price    I.no      ITEM        Price
             1)  Regular BillsResteraunt.Burger   5$    2)   Chicken BillsResteraunt.Burger       6$
             3)  Chicken SandWich 4$    4)   VegSandwich          3$\s
             5)  Grilled BillsResteraunt.Burger   7$    6)   Grilled Veg Sandwich 3$

             BillsResteraunt.Drink\s
             1) SoftDrinks  1$ 2)Smoothies 2$ 3) Juices 2$\s
             
             Side Item
             1)Fries 1$       2)Noodles   2$ 3)Salad   3$""");

    Meal.meal();
}
public static void meal( ) {
bg=new Burger();
dk=new Drink();
SI=new SItem();
int P=0;
    System.out.println("Choose from menu the bankAccountChallenge.Main item");
    System.out.println("Choose \"With or without\" Extra Toppings?");
    if(sc.next().equals("with"))
    {
        bg.BurgerS(sc.next(),sc.nextInt());}
    else bg.BurgerR(sc.next());
    System.out.println("Plzz choose a side item");
    SI.SItems(sc.next());
    System.out.println("Choose your BillsResteraunt.Drink ");
    dk.Driink(sc.next());
    P=bg.getPrice()+dk.getPrice()+SI.getPrice();

    System.out.println("your bill generated is "+P+"$s");

}

}
class Burger  {
    private String Type;
    private int price=0;
    private int specifics=0;
    public int getPrice(){
        return price;
    }
    public String getType(){
        return Type;
    }


    public  void BurgerR(String Type){ // if static fucntion is used it raised error Non-static field 'price' cannot be referenced from a static context.

        switch (Type) {
            case "1" -> {
                price = 5;
                System.out.println("The Regular BillsResteraunt.Burger is served!!!");

            }
            case "2" -> {
                price = 6;
                System.out.println("The Chicken BillsResteraunt.Burger is served!!!");

            }
            case "3" -> {
                price = 4;
                System.out.println("The Chicken Sandwich is served!!!");

            }
            case "4" -> {
                price = 3;
                System.out.println("The Veg Sandwich is served!!!");

            }
            case "5" -> {
                price = 7;
                System.out.println("The Grilled BillsResteraunt.Burger is served!!!");

            }
            case "6" -> {
                price = 3;
                System.out.println("The Grilled Veg Sandwich is served!!!");

            }
        }
    }

    public void BurgerS(String Type, int specifics) {

        switch (Type) {
            case "1" -> {
                price = 5;
                System.out.println("The Regular BillsResteraunt.Burger is served!!!");

            }
            case "2" -> {
                price = 6;
                System.out.println("The Chicken BillsResteraunt.Burger is served!!!");

            }
            case "3" -> {
                price = 4;
                System.out.println("The Chicken Sandwich is served!!!");

            }
            case "4" -> {
                price = 3;
                System.out.println("The Veg Sandwich is served!!!");

            }
            case "5" -> {
                price = 7;
                System.out.println("The Grilled BillsResteraunt.Burger is served!!!");

            }
            case "6" -> {
                price = 3;
                System.out.println("The Grilled Veg Sandwich is served!!!");

            }
        }

        price +=specifics;
        System.out.println(" No. of toppings = "+specifics);


    }
}


class Drink {
private String type;
private String Size;
private int price=0;
    public String getType(){
        return type;
    }
    public int getPrice(){
        return price;
    }
    public String getSize(){
        return Size;
    }

Scanner sc=new Scanner(System.in);
public void Driink(String type){

    switch (type.toUpperCase()){
        case "1"-> {
            System.out.println("""
                    Drinks  SIZE(S/M/L)
                    Coke     1/2/3   \s
                    Pepsi    1/2/3
                    Cola     1/2/3""");
            String a=sc.nextLine();
            if((a.contains("1")||a.contains("2")||a.contains("3")))
            {type=type.concat(a);price=1;}
            if(a.contains("1"))Size="small";else if (a.contains("2")){Size="Med";price++;}else {Size="Large";price+=2;}
            System.out.println(Size+" " +type +" Coming right through!!!");


        }
        case "2"->{
            System.out.println("""
                    Drinks  SIZE(S/M/L)
                    Appy     1/2/3   \s
                    Maaza    1/2/3
                    Pear     1/2/3""");
            String a=sc.nextLine();
            if((a.contains("1")||a.contains("2")||a.contains("3")))
            {type=type+" "+a;price=2;}
            if(a.contains("1"))this.Size="small";else if (a.contains("2")){this.Size="Med";price++;}else {this.Size="Large";price+=2;}
            System.out.println(Size+" " +type +" Coming right through!!!");


        }
        case "3"->{
            System.out.println("""
                    Drinks  SIZE(S/M/L)
                    Pomg     1/2/3   \s
                    PinAp    1/2/3
                    Wmel     1/2/3""");
            String a=sc.nextLine();
            if((a.contains("1")||a.contains("2")||a.contains("3")))
            {type=type+" "+a;price=3;}
            if(a.contains("1")) this.Size="small";else if (a.contains("2")){this.Size="Med";price++;}else {this.Size="Large";price+=2;}
            System.out.println(Size+" " +type +" Coming right through!!!");


        }
        default-> {
            type = "BillsResteraunt.Drink";
            Size = "small";
            price=1;
            System.out.println(Size+" " +type +" Coming right through!!!");
        }

    }

}
}

class SItem {
private String item;
private int price=0;
    public int getPrice(){
        return price;
    }
    public String getItem(){
        return item;
    }
public void SItems(String item ){
    this.item=item;
    switch (item.toLowerCase()){
        case "1"->{
            System.out.println("Plzz Enjoy the  "+item+" while the food is being served");
           price=1;
        }
        case "2"->{
            System.out.println("Plzz Enjoy the  "+item+" while the food is being served");
            price=2;
        }
        case "3"-> {
            System.out.println("Plzz Enjoy the  " + item + " while the food is being served");
            price=3;
        }
        default->price=0;
    }
}}
