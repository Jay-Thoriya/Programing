public class String_method{
    public static void main (String[] args){
        String str = "Wellcome";
        System.out.println(str);
        
        int st1 = str.length(); 
        System.out.println(st1);
        

        
        System.out.println(str.charAt(3));
        System.out.println(str.trim());
        System.out.println(str.replace("l","j"));
        System.out.println(str.replace("come","playd"));
        System.out.println(str.toLowerCase());
        System.out.println(str.toUpperCase());
        System.out.println(str.substring(2));
        System.out.println(str.substring(3,7));
        System.out.println(str.startsWith("wall"));
        System.out.println(str.indexOf("come"));
        System.out.println(str.equals("wellcome"));
        System.out.println(str.equalsIgnoreCase("wellcome"));



    }
}