package Classes.Generics;

class Printer2Print{
    public static void main(String[] args) {
        Printer2 printer = new Printer2(50, true);
        System.out.println(printer.addToner(50));
        System.out.println("initial page count = " +printer.getPagesPrinted());
        int pagesPrinted = printer.printPages(4);
        System.out.println("Pages printed was " + pagesPrinted +" new total print count for printer = " +printer.getPagesPrinted());
        pagesPrinted = printer.printPages(2);
        System.out.println("Pages printed was " + pagesPrinted +" new total print count for printer = " +printer.getPagesPrinted());
    }
}
class Printer2 {
    private int tonerLevel;
    private int pagesPrinted=0;
    private boolean duplex;
    public Printer2(int tonerLevel, boolean duplex){
        this.tonerLevel=(tonerLevel<100&&tonerLevel>=0)?tonerLevel:99;
        this.duplex=duplex;
    }
    public int addToner(int tonerAmount){
        if(tonerAmount>0&&tonerAmount<=100){
            if(tonerLevel+tonerAmount>100)
                return -1;
            else {tonerLevel+=tonerAmount;
                return tonerLevel;
            }
        }
        else return -1;
    }
    public int printPages(int pages){
        int pagesToPrint=pages;
        if(duplex){
            pagesPrinted=(pagesToPrint/2)+(pagesToPrint%2);
            return pagesPrinted;
        }
        else {pagesPrinted=pagesToPrint;
            return pagesPrinted;
        }
    }
    public int getPagesPrinted(){
        return pagesPrinted;
    }
}








