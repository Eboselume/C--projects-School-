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
public class Order {

    private String fullName;
    private String address;
    private int poundChocolate;

    public Order(String fullName, String address, int poundChocolate) {
        setFullName(fullName);
        setAddress(address);
        setPoundChocolate(poundChocolate);
    }//end of Order constructor

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }//end of setFullName

    public String getFullName() {
        return fullName;
    }//end of getFullName

    public void setAddress(String address) {
        this.address = address;
    }//end of setAddress

    public String getAddress() {
        return address;
    }//end of getAddress

    public void setPoundChocolate(int poundChocolate) {
        this.poundChocolate = poundChocolate;
    }//end of setPoundChocolate

    public int getPoundChocolate() {
        return poundChocolate;
    }//end of getPoundChocolate
}//end of Order class

