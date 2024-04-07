/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.star1;

/**
 *
 * @author MF
 */
public class STAR1 {

    public static void main(String[] args) {
        for(int i=1;i<=5;i++){
            for(int j=5;j>=i;j--){
                System.out.print(" ");
            }
            for(int z=1;z<=2*i-1;z++){
                System.out.print("*");
            }
            System.out.println();
            
            
            
        }
    }
}
