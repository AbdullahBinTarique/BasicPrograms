package Composition.Car;

import java.util.Scanner;

class CarMain {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Car c1=Car.getCar(sc.nextLine(),sc.nextLine());
        c1.Start();

    }
}



class Car{
    private String description;
    public Car(String description){
        this.description=description;
    }
    protected void startEngine(){
        System.out.println("Engine of "+ description+" is now Starting ");
    }
    protected void drive(){
        System.out.println("Accelerating.. Accelation 0-60 kph in 5 secs ");

    }
    protected void runEngine(){
        System.out.println("Engine revving 7000 Rpm");
    }
    public static Car getCar(String Type,String Description){
        Scanner s=new Scanner(System.in);
         switch (Type.substring(0)){
            case "Gas"-> {
                System.out.println("Enter avgkmpl, no of cylinders");
                return new GasPoweredCar(Description, s.nextInt(), s.nextInt());
            }
            case "Electric"-> {
                System.out.println("Enter avgkmpc,Battery Size");
                return new ElectricPoweredCar(Description, s.nextInt(), s.nextInt());
            }
            case "Hybrid"-> {
                System.out.println("Enter avgKmpL,Battery Size,Cylinders");
                return new HybridCar(Description, s.nextInt(), s.nextInt(), s.nextInt());
            }
            default  -> {
                return new Car(Description);}}}
    public void Start(){
        startEngine();
        runEngine();
        drive();
    }

}
class GasPoweredCar extends Car{
    private double avgKmpl;
    private int cylinders;
    public GasPoweredCar(String description,double avgkmpl,int cylinders){super(description);
    this.avgKmpl=avgkmpl;this.cylinders=cylinders;}
    @Override
    protected void startEngine(){
        super.startEngine();
        System.out.println("Revving cylinders ");
    }

    @Override
    protected void drive() {
        super.drive();
        System.out.println("Efficient Power and torque");
        runEngine();
    }
    protected void runEngine(){
        super.runEngine();
        System.out.println("Vroom ! Vrrroooom!!!");
    }

    @Override
    public void Start() {
        super.Start();
        runEngine();
        drive();

    }
}

class ElectricPoweredCar extends Car{
    private double avgKmpC;
    private int batterySize;
    public ElectricPoweredCar(String description,double avgKmpC,int batterySize){
        super(description);this.avgKmpC=avgKmpC;this.batterySize=batterySize;
    }

    @Override
    protected void drive() {
        super.drive();
        System.out.println("Increased perfformance and efficiency");
    }

    @Override
    public void Start() {
        super.startEngine();
        drive();
    }
}

class HybridCar extends Car{
    private double avgKmpL;
    private int batterySize;
    private int cylinder;
    public HybridCar(String description,double avgKmpL,int batterySize,int cylinder){super(description);
    this.avgKmpL=avgKmpL;this.batterySize=batterySize;this.cylinder=cylinder;}



    @Override
    public void Start() {
        super.Start();
        System.out.println("Better Milage");
    }
}