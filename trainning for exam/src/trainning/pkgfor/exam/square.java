/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package trainning.pkgfor.exam;

/**
 *
 * @author MF
 */
public class square extends rectangle {
    public square(){
        
    }
    public square(double side){
        super(side, side);
    }
    public square(double side, String color,boolean filled){
        super(side,side,color,filled);
    }

    public double getSide() {
        return length;
    }
    
    
}
