package Inheritance;

class Constructor{
    public static void main(String args[]){
        Infor abdul= new Infor();
        System.out.println(abdul.getCreditL()+"\n"+abdul.getEmail()+"\n"
                +abdul.getName());
        Infor Stacy =new Infor("Stacy","Sy@gmail.com",10);
        System.out.println(Stacy.getName()+"\n"+Stacy.getEmail()+"\n"+
                Stacy.getCreditL());
        Infor Ruby =new Infor("Ruby","Ry@gmail.com");
        System.out.println(Ruby.getCreditL()+"\n" +
                Ruby.getEmail()+ Ruby.getName());


    }
}
class Infor{
    private String Name;
    private String email;
    private int creditL;
    Infor(String Name,String email,int creditL){
        this.Name=Name;
        this.email=email;
        this.creditL=creditL;
    }
    Infor(){

        this("Abdullah ","ab@gmail.com",0);
        System.out.println("empty constructor called");
    }
    Infor(String Name,String email){
        this(Name,email,10);
        System.out.println("chain constructor called");
    }

    public String getEmail() {
        return email;
    }

    public String getName() {
        return Name;
    }

    public int getCreditL() {
        return creditL;
    }
}