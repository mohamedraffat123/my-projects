/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.teaching1;

import java.util.Arrays;
import java .util.Random;
/**
 *
 * @author MF
 */
import java.util.Scanner;
class cylinder{
    private double height;
    private double redius;
 public void set_area(double h,double r){
     height=h;
     redius=r;
     
 }
     
public double get_surface_area(){
    return 2*Math.PI*redius*height+2*Math.PI*Math.pow(redius, 2);
} 

public double get_volume(){
    return Math.PI*Math.pow(redius, 2)*height;
}

public String toString() {
 return "the name is"+height+"the reduis is"+redius;   
}
private double y;

 



}

public class Teaching1 {

    /**
     *
     * @param myStringArgs
     */
    public static void main( String[] myStringArgs) {
              
//String s=new String("i love my job very much");
//String []z=s.split(" ");
//        System.out.println(Arrays.toString(z));
//        System.out.println("the number of the word is "+z.length);
//        float temo=98.4f;
//        if( temo>98.4)
//            System.out.println("SUMMER");
//            else
//            System.out.println("UNKNOWN");
//        cylinder c=new cylinder();
       int max=1000;
       int min=100;
       int  count=0;
       while(max>min){
           max-=min;
           System.out.println(max);
           count++;
       }
        System.out.println(count);
        
    }
}
