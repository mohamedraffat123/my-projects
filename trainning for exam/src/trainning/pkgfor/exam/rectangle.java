/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package trainning.pkgfor.exam;

/**
 *
 * @author MF
 */
public class rectangle extends shape {
    protected double width=1.0;
    protected double length=1.0;
    public rectangle(){
        
    }
     public rectangle(double width,double length){
         this.length=length;
         this.width=width;
     }
     public rectangle(double width,double length ,String color,boolean filled){
         super(color,filled);
        this.length=length;
         this.width=width;
     }

    public double getWidth() {
        return width;
    }

    public double getLength() {
        return length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setLength(double length) {
        this.length = length;
    }
     @Override
    public double get_area(){
        return length*width;
    }
    @Override
    public double get_parameter(){
        return 2*(length+width);      
    }

    @Override
    public String toString() {
        return "rectangle{" + "width=" + width + ", length=" + length + '}'+super.toString();
    }
   
    
    
    
    
}
