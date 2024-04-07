/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package strng1;

/**
 *
 * @author MF
 */
 import java.util.Scanner;
public class Strng1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       	String s1= new String("The quick brown fox jumps over the lazy dog.");
	String s2= new String("Orange is favorite color. starts with Red?");
//if(s1.compareTo(s2)>0){
//    System.out.println("the s1 is more than s2");
//    System.out.println(s1.compareTo(s2));
//}
//else if(s1.compareTo(s2)==0){
//    System.out.println(" the s1 and s2 is equal");
//}
//else{
//System.out.println("the s2 is more than s1");
//}
//int a=s1.indexOf("look");
//      if(a>0)
//            System.out.println(" it is true");
//      else
//            System.out.println(" it is false");
//

//        System.out.println(s1.endsWith(s1));

//        boolean h=s1.equalsIgnoreCase(s2)?true:false;
//        System.out.println(s1+" is equal to "+ s2+"is "+h);
//System.out.print("a is"+s1.lastIndexOf("a")+"\n b is"+s1.lastIndexOf("b")+"\n c is"+s1.lastIndexOf("c")+"\n d is"+s1.lastIndexOf("d"));
int r=s1.indexOf(" ", 9);
//         System.out.println(s1.substring(r));
s1.
int x=s1.indexOf(" ",20);
   System.out.println(s1.substring(r, x));
//System.out.println(s1.replaceAll("fox", "dog"));
//System.out.print(s1+"\t"+s1.contains("Red")+"\n"+s2+"\t"+s2.startsWith("Red"));
    }   
   
    
}
