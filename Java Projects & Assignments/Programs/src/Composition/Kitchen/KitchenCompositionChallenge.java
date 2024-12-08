package Composition.Kitchen;

class KitchenCompositionChallenge
{
    public static void main(String[] args) {
        //Composition.Kitchen.KitchenCompositionChallenge a = new Composition.Kitchen.KitchenCompositionChallenge();
        System.out.println("Gadgets Loaded");
        SmartKitchen Sm=new SmartKitchen();
        Sm.getBrewmaster().addWater();
        Sm.getDWDemon().loadDishwasher();
        Sm.getIceBox().pourMilk();
        doKitchen(Sm);


    }
    public static void doKitchen(SmartKitchen A){//why Static
        A.getIceBox().orderFood();
        A.getDWDemon().doDishes();
        A.getBrewmaster().brewCoffee();

    }
}
class SmartKitchen {
    private Fridge IceBox;
    private DishWasher DWDemon;
    private Coffeemaker Brewmaster;
    public SmartKitchen(){
        IceBox=new Fridge();
        DWDemon=new DishWasher();
        Brewmaster=new Coffeemaker();
    }

    public Fridge getIceBox() {
        return IceBox;
    }

    public DishWasher getDWDemon() {
        return DWDemon;
    }

    public Coffeemaker getBrewmaster() {
        return Brewmaster;
    }
}
class Fridge {
    private boolean hasWorkToDo;
    public void orderFood(){
        if(hasWorkToDo)
            System.out.println("The food has been served.");
        else System.out.println("No work to do");
    }

    protected void pourMilk(){
        hasWorkToDo=true;
    }
}
class DishWasher {
    private boolean hasWorkToDo;
    public void doDishes(){
        if(hasWorkToDo)
            System.out.println("Process Started "+
                    "..."+
                    "Process finished");
        else System.out.println("Theres no work to do");
    }
    protected void loadDishwasher(){
        hasWorkToDo=true;
    }
}
class Coffeemaker {
    private boolean hasWorkToDo;
    public void brewCoffee(){
        if(hasWorkToDo)
            System.out.println("Brewing Coffee"+
                    "..."+
                    "The coffee has been brewed.");
        else System.out.println("Theres no work to do");
    }
    protected void addWater(){
        hasWorkToDo=true;
    }
}