package Inheritance;

import java.util.Scanner;
public class PrinterEncapsulationChallenge {
    public static void main(String[] args) {
        Printer PP=new Printer(true);int option;
        Scanner     sc=new Scanner(System.in);
        while(true){
            System.out.println("Choose an option \n1)Print Pages\n2)Add Toner");
            option=sc.nextInt();
            switch (option){
                case 1->PP.printPages(sc.nextInt());
                case 2->PP.addToner(sc.nextInt());
            }

        }

    }
}
class Printer{
    private int tonerlevel;
    private int pagesPrinted=0;
    private boolean duplex;
    public Printer(boolean duplex){
        this.tonerlevel=99;this.duplex=duplex;
    }
    public void printPages(int pages){int i=0;
        while(pages>0) {
            if ((tonerlevel < 100) && (tonerlevel > 0)) {
                if (duplex) {
                    pagesPrinted += 1;
                    System.out.println("Pg no "+(++i));
                    tonerlevel -= 1;
                } else {
                    pagesPrinted += 2;
                    tonerlevel -= 2;
                }
            } else System.out.println("Empty Cartridge");
            pages--;
        }




    }
    public void addToner(int toner){
        if(tonerlevel+toner<100&& tonerlevel>=0) {
            tonerlevel = toner + tonerlevel;
            System.out.println("Toner refilled");
        }
        else {
            tonerlevel = 99;
            System.out.println("Toner Refilled fully");
        }
    }
}
