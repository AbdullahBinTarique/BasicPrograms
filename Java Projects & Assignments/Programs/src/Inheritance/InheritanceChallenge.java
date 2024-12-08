package Inheritance;

public class InheritanceChallenge{
    public static void main(String args[]){
Worker w1=new Worker("ABD","1975");
        System.out.println("Age is "+w1.getAge());
//        System.out.println(w1.collectPay());
Employee e1=new Employee("ABC","1979",211,"2009")  ;
SalariedEmployee se1=new SalariedEmployee("abc","20052007",1211,"2007",
        1500,false);
se1.retire();
    }
}

class Worker{

    public Worker(){}

public Worker(String name,String birthyear ){
this.name=name;this.birthyear=birthyear;;
}
protected String name;
protected String birthyear;
protected String leavedate;

int getAge(){
    return ((2024)-Integer.parseInt(birthyear));
}

//double collectPay(){
//    return ();
//}
void terminate(String leavedate){
    this.leavedate=leavedate;

}
}

class Employee extends Worker{
public Employee(){}
public Employee(String name,String birthyear,
                    long employeeID,String hiredate){
super(name,birthyear);
this.employeeID=employeeID;this.hiredate=hiredate;
    }
    protected long employeeID;
    protected String hiredate;
}

class HourlyEmployee extends Employee{
    protected double hourlypayrate;
    public void getDoublepay(){
        System.out.println("got Double pay -> "+(2*hourlypayrate));
    };
    public HourlyEmployee (String name,String birthyear,String leavedate,
       long employeeID,String hiredate,double hourlypayrate){
        super(name,birthyear,employeeID,hiredate);
        this.hourlypayrate=hourlypayrate;
    }

}


class SalariedEmployee extends Employee{
    protected double annualsalary;
    protected boolean isRetired;

    public SalariedEmployee (String name,String birthyear,
     long employeeID,String hiredate,double annualsalary,boolean isRetired) {
        super(name, birthyear, employeeID, hiredate);
        this.annualsalary = annualsalary;this.isRetired=isRetired;
    }
    public void retire(){
        super.terminate("2016");
        System.out.println((annualsalary*(Integer.parseInt(leavedate)-Integer.parseInt(hiredate))));
    }
}