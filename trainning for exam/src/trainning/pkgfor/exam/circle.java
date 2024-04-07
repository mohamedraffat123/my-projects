/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package trainning.pkgfor.exam;

/**
 *
 * @author MF
 */
public class circle extends shape {

    protected double redius = 1.0;

    public circle() {

    }

    public circle(double redius) {
        this.redius = redius;
    }

    public circle(double redius, String color, boolean filled) {
        super(color, filled);
        this.redius = redius;
    }

    public double getRedius() {
        return redius;
    }

    public void setRedius(double redius) {
        this.redius = redius;
    }

    @Override
    public double get_area() {
        return Math.pow(redius, 2) * redius;
    }

    @Override
    public double get_parameter() {
        return 2 * 3.14 * redius;
    }
   @Override
   public String toString(){
       return super.toString()+"\narea is \n"+this.get_area()+"\n parameter is \n"+this.get_parameter()+"redius"+redius;
   }

}
