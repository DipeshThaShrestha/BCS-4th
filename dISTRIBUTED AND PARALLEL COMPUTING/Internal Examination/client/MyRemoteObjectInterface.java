package client;

import java.rmi.*;

public interface MyRemoteObjectInterface extends Remote {
    public long getPower(long number, long power) throws RemoteException;
}