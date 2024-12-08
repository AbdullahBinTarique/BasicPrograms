package Classes.Generics;

class StringMethods{
    public static void main(String[] args) {
        String st="ABCC Hello World";
        System.out.println(st.toLowerCase());
        System.out.println(st.toUpperCase());
        System.out.println(st.length());
        System.out.println(st.lastIndexOf('C'));
        System.out.println(st.indexOf('C'));
        System.out.println(st.charAt(6));
        System.out.println(  st.join(",","Arent you a gorgeous one","Full of surprises"));
        System.out.println(st);
        st= """
                  Hi world arent you a thrilling place to live in  """ + "     ";
        System.out.println(st);
        System.out.println(st.indent(-2));
        System.out.println(st.repeat(3));
        System.out.println("-".repeat(10));
        System.out.println(st.concat(" huh"));
        System.out.println(st.replace("l","PP"));
        System.out.println(st.replaceFirst("r","are"));
        System.out.println(st.indent(10).stripLeading().stripTrailing()+"10");
        System.out.println(st.substring(10));
        System.out.println(st.substring(10,20));
        System.out.println(st.subSequence(10,38));
        if(st.contentEquals("Hi world arent you a thrilling place to live in     " ))
            System.out.println("1");
        else System.out.println("0");
        if(st.substring(st.length()-4,st.length()-1).isBlank())
            System.out.println("0");
        else System.out.println("1" );
        if(st.contains("world"))
        System.out.println("1");else System.out.println("0");
        System.out.println( st.startsWith("Hi world") ? 1:0);
        System.out.println(st.endsWith("die in     ")? 1:0);
        System.out.println(st.regionMatches(4,("orld"),0,4)?1:0);
        System.out.println(st.regionMatches(4,"orld",0,4));
    }














}