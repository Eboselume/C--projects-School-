/*
 * Ines Ngaleu Moumeni
 * CMSY-167-001
 * This program is supposed to create and print shipping labels for a company.
 *
 */
package lab5a;

import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/**
 *
 * @author INES
 */
public class Lab5A {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws InterruptedException {
        // TODO code application logic here
        ArrayBlockingQueue<Order> buffer = new ArrayBlockingQueue<>(6);
        buffer.put(new Order("ines ngaleu ", "8611 HARTWOLDE", 9876));
        buffer.put(new Order("jeff mihno", "7890 largo road", 4323));
        buffer.put(new Order("yousney delo", "5703 partant st", 3457));
        buffer.put(new Order("chris pastor", "2224 thioo road", 2209));
        buffer.put(new Order("denise lamii", "6670 howard blvd", 5555));
        buffer.put(new Order("memeff deegage ", "8773 taanderstltn", 9876));

        ExecutorService executorService = Executors.newCachedThreadPool();

        while (!buffer.isEmpty()) {
            executorService.execute(new PrintLabel(buffer.take()));

        }//end of while statement 
        executorService.shutdown();
        executorService.awaitTermination(1, TimeUnit.MINUTES);
    }//end of main

}//end of lab5a class
