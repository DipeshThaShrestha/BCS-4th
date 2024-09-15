import java.rmi.*;
import java.rmi.registry.*;

public class Client {
    public static void main(String[] args) throws RemoteException, NotBoundException {
        try {
            // locate the remote registry
            Registry remoteRegistry = LocateRegistry.getRegistry("127.0.0.1", 9300);

            // Reference the object inside the registry
            Number numm = (Number) remoteRegistry.lookup("number");

            // call their method
            RemoteCalcObject remoteCalcObject = new RemoteCalcObject();
            double finalnum = remoteCalcObject.computerPower(numm.getNum());
            System.out.println("The power of " + numm.getNum() + " by 2 is " + finalnum);

        } catch (Exception e) {
            System.out.println("Clinet error occoured " + e.toString());
        }

    }
}
