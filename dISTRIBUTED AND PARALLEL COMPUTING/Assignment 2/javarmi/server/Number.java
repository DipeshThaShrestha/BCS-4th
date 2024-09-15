import java.rmi.*;

public interface Number extends Remote {
    public double getNum() throws RemoteException;
}
