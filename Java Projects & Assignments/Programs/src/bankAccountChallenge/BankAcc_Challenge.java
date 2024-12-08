package bankAccountChallenge;

import java.util.Scanner;

 class Main {
    static int a=0;
    public static void main(String[] args) {

        System.out.println("WELCOME to Bank of A");
        Scanner sc=new Scanner(System.in);
        int option;
        Bankfields bankHolderMem[]=new Bankfields[10];
        while(1>0 ){
            System.out.println("""
            Plzz select an option 1)create an acc
            2)delete an account
            3)select an account""");
            option=sc.nextInt();
            switch(option) {
                case 1:{if(a>10)
                    System.out.println("Memory is full");
                else {
                    bankHolderMem[0] = new Bankfields();
                    bankHolderMem[0].Createaccount();
                    bankHolderMem[0].getCustomerName();
                    a++;
                    break;
                }

                }

                case 2:{
                    System.out.println("Enter account Username to delete");
                    String dusrnm=sc.nextLine();
                    if(bankHolderMem[0]==null) {
                        System.out.println("No accounts found\n a");
                        break;
                    }
                    try {
                        for (int b = 0; b < 10; b++) {
                            if (bankHolderMem[b].getCustomerName()== dusrnm)
                                bankHolderMem[b] = null;
                            else {
                                System.out.println("Account doesnt exists");
                            }
                        }
                    } catch (Exception e) {
                        throw new RuntimeException(e);
                    } finally {
                        System.out.println("Account doesnt exists" );
                    }



                    break;
                }

                case 3: {int b=0;
                    System.out.println("Enter Account UserName.");
                    sc.nextLine();
                    String Usrnm = sc.nextLine();
//            String Accnum = sc.nextLine();
                    int temp=0;
                    try {
                        for (; b < 10; b++) {
                            if (bankHolderMem[b].getCustomerName().equals(Usrnm)){
                                temp = b;
                                break;}
                        }
                    } catch (Exception e) {
                        throw new RuntimeException(e);
                    } finally {
                        System.out.println("Account doesnt exists");
                    }
                    if (temp == 0)
                        System.out.println("Account doesnt exists");
                    else {
                        System.out.println("Choose an option\n 1)Deposit amt \n2)Withdraw amt\n3)Exit Account ");
                        sc.nextLine();
                        int opt2=sc.nextInt();
                        switch (opt2){
                            case 1:{bankHolderMem[b].Deposit(sc.nextFloat());}
                            case 2:{bankHolderMem[b].Withdrawl(sc.nextFloat());}
                            case 3:{continue;}
                            default:System.out.println("Enter correct options");
                        }


                    }
                    break;
                }
                case 4: {
                    bankHolderMem[0].getAccountBalance();
                    bankHolderMem[0].getCustomerName();
                    break;
                }

            }sc.nextLine();
        }


    }
}


