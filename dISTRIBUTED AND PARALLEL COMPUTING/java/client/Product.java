import java.rmi.*;

public interface Product extends Remote {
    // Define product behaviour (Methods)

    public String getName() throws RemoteException;

    public String getDescription() throws RemoteException;

    public double getPrice() throws RemoteException;
}