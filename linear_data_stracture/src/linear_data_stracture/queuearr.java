/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class queuearr {

    private int maxsize;
    private long[] qarr;
    private int nitem;

    public queuearr(int size) {
        maxsize = size;
        qarr = new long[maxsize];
        nitem = 0;
    }

    public void insert(long item) {

        int j;
        if (nitem == 0) {
            qarr[nitem++] = item;
        } else {
            for (j = nitem - 1; j >= 0; j--) {
                if (item > qarr[j]) {//32  98 55
                    qarr[j + 1] = qarr[j];
                } else {
                    break;
                }  
            }
            qarr[j+1]=item;
                nitem++;
        }
    }
    
    public void dispaly(){
        for (int j=0;j<nitem;j++){
            System.out.println(qarr[j]);
        }
    }
    
    
}
