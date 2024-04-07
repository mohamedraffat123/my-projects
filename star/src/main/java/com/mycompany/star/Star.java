/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.star;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class Star {

    public static void main(String[] args) {
        int n;
        Scanner input =new Scanner(System.in);
        System.out.println(" enter thr number of the star");
        n=input.nextInt();
       for(int row=1;row<=n;row++){
           for(int j=n;j>=row;j--){
               System.out.print(" ");
           }
       for(int z=1;z<=2*row-1;z++){
           System.out.print("*");
       }
           System.out.println();
       }
       
       
       
    }
}
