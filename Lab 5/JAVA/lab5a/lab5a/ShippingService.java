package lab5a;

import java.util.Random;
import java.util.UUID;

/**
 * Simulates an external API for buying postage
 */
public class ShippingService {

    private final Random random = new Random();

    private static final int BASE_COST_IN_CENTS = 950;
    private static final int COST_PER_POUND_IN_CENTS = 75;

    private static final int MIN_TIME_TO_SLEEP = 3;
    private static final int MAX_TIME_TO_SLEEP = 5;

    /**
     * Purchase a shipping label
     *
     * @param recipientName The First and Last name of the recipient
     * @param destinationAddress The full mailing address of the recipient
     * @param weightInPounds The weight of the package
     * @return A ShippingLabel with tracking information and cost
     */
    public ShippingLabel getShippingLabel(String recipientName, String destinationAddress, double weightInPounds) {

        // Sleep for 3-10 seconds
        Integer millis = random.ints(1, MIN_TIME_TO_SLEEP, MAX_TIME_TO_SLEEP).map(seconds -> seconds * 1_000).findFirst().getAsInt();
        try {
            Thread.sleep(millis);
        } catch (InterruptedException ex) {
            ex.printStackTrace();
        }

        String confirmationNumber = UUID.randomUUID().toString().replace("-", "");
        int shippingCost = (int) (BASE_COST_IN_CENTS + COST_PER_POUND_IN_CENTS * weightInPounds);
        return new ShippingLabel(confirmationNumber, recipientName, destinationAddress, weightInPounds, shippingCost);

    }

}//end of ShippingService class
