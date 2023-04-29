/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab5a;

/**
 *
 * @author INES
 */
public class PrintLabel implements Runnable {

    private final ShippingService service;
    private final Order order;
    private static int totalCost;

    public PrintLabel(Order order) {
        this.order = order;
        service = new ShippingService();

    }//end of constructor

    public synchronized void sync(Order order) {

    }//end of synchronized

    public void setTotalCost(int totalCost) {
        this.totalCost = totalCost;
    }//end of setTotalCost method

    public int getTotalCost() {
        return totalCost;
    }//end of getTotalCost

    @Override
    public void run() {
        ShippingLabel label = service.getShippingLabel(order.getFullName(), order.getAddress(), order.getPoundChocolate());

    }//end of run method

}//end of PrintLabel
