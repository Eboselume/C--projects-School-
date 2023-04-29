package lab5a;

import java.util.Objects;

/**
 * Represents a Shipping Label to be used as postage
 */
public class ShippingLabel {

    private String trackingNumber;
    private String recipientName;
    private String destinationAddress;
    private double weightInPounds;
    private int costInCents;

    public ShippingLabel() {

    }

    public ShippingLabel(String trackingNumber, String recipientName, String destinationAddress, double weightInPounds, int costInCents) {
        this.trackingNumber = trackingNumber;
        this.recipientName = recipientName;
        this.destinationAddress = destinationAddress;
        this.weightInPounds = weightInPounds;
        this.costInCents = costInCents;
    }

    public String getTrackingNumber() {
        return trackingNumber;
    }

    public void setTrackingNumber(String trackingNumber) {
//        this.trackingNumber = trackingNumber;
    }

    public String getRecipientName() {
        return recipientName;
    }

    public void setRecipientName(String recipientName) {
        this.recipientName = recipientName;
    }

    public String getDestinationAddress() {
        return destinationAddress;
    }

    public void setDestinationAddress(String destinationAddress) {
        this.destinationAddress = destinationAddress;
    }

    public double getWeightInPounds() {
        return weightInPounds;
    }

    public void setWeightInPounds(double weightInPounds) {
        this.weightInPounds = weightInPounds;
    }

    public int getCostInCents() {
        return costInCents;
    }

    public void setCostInCents(int costInCents) {
        this.costInCents = costInCents;
    }

    @Override
    public String toString() {

        return "ShippingLabel\n{" + "trackingNumber:\n" + trackingNumber + ", recipientName:\n" + recipientName + ", destinationAddress:\n" + destinationAddress + ", weightInPounds=" + weightInPounds + ", costInCents:\n" + costInCents + '}';
    }

    @Override
    public int hashCode() {
        int hash = 3;
        hash = 97 * hash + Objects.hashCode(this.trackingNumber);
        hash = 97 * hash + Objects.hashCode(this.recipientName);
        hash = 97 * hash + Objects.hashCode(this.destinationAddress);
        hash = 97 * hash + (int) (Double.doubleToLongBits(this.weightInPounds) ^ (Double.doubleToLongBits(this.weightInPounds) >>> 32));
        hash = 97 * hash + this.costInCents;
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final ShippingLabel other = (ShippingLabel) obj;
        if (Double.doubleToLongBits(this.weightInPounds) != Double.doubleToLongBits(other.weightInPounds)) {
            return false;
        }
        if (this.costInCents != other.costInCents) {
            return false;
        }
        if (!Objects.equals(this.trackingNumber, other.trackingNumber)) {
            return false;
        }
        if (!Objects.equals(this.recipientName, other.recipientName)) {
            return false;
        }
        if (!Objects.equals(this.destinationAddress, other.destinationAddress)) {
            return false;
        }
        return true;
    }

}//end of ShippingLabel class
