package Composition.Pc;

import java.util.Scanner;
class PC{
    public static void main(String[] args) {
        Product pc=new Product();
        pc.pcpoweron();


    }
}

class Product{
    Scanner sc=new Scanner(System.in);
    private Monitor mn;
    private MB mb;
    private Ccase cc;
    public Product(){
        System.out.println("Enter details of monitor(Model,resolution,refreshrate)");
        mn=new Monitor(sc.nextLine(), sc.nextInt(),sc.nextInt());
        System.out.println("Enter details of mother board(Model,Power consumption)");
        mb=new MB(sc.next(),sc.nextInt());
        System.out.println("Enter details about CC(Which type of Cooling,Volume,Does it has RGB)");
        cc=new Ccase(sc.next(),sc.nextInt(),sc.nextBoolean());
    }
    public Monitor getMonitor(){
        return mn;
    }

    public Scanner getSc() {
        return sc;
    }

    public MB getMb() {
        return mb;
    }

    public Ccase getCc() {
        return cc;
    }
    public void pcpoweron(){
        System.out.println("The Pc has Display "+mn.getModel()+"\n"
        +"resolution "+mn.getReson() +"\nRefresh rate"+mn.getRefreshr());
        System.out.println("The Motherboard is "+mb.getModel()+
                "\nPower consumption is "+ mb.getPower());
        System.out.println("The CC is "+cc.getString()+
                "\n Has RGB? " + cc.hasRGB()+
                "\n has volume = "+cc.getVolume()) ;
        cc.poweron();
        mb.poweron();;
        mn.Display();
    }
}

class Monitor{
    private String model;
    private int reson;
    private int refreshr;
    public Monitor(String model,int reson,int refreshr){
        this.model=model;this.reson=reson;this.refreshr=refreshr;
    }

    public String getModel() {
        return model;
    }

    public int getReson() {
        return reson;
    }

    public int getRefreshr() {
        return refreshr;
    }
    public void Display(){
        System.out.println("Displaying the beauty of human techs ");
    }
}

class Ccase{
    private String cooling;
    private int volume;
    private boolean hasRGB;

    public Ccase(String cooling,int volume,boolean hasRGB){
        this.cooling=cooling;this.volume=volume;this.hasRGB=hasRGB;
        }
    public String getString(){
        return cooling;
    }
    public int getVolume(){
        return volume;
    }
    public boolean hasRGB(){
        return hasRGB;
    }
    public void poweron(){
        System.out.println("Powering On ---Booting onto bios");

    }

}

class MB{
    private String model;
    private int power ;
    public MB(String model,int power){
        this.model=model;this.power=power;
    }
    public String getModel() {
        return model;
    }

    public int getPower() {
        return power;
    }
    public void poweron(){
        System.out.println("Now Booting Onto Windows");

    }
}