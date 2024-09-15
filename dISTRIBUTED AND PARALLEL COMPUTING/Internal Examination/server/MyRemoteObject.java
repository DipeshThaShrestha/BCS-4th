import java.rmi.*;
import java.rmi.server.UnicastRemoteObject;
import java.net.*;

public class MyRemoteObject extends UnicastRemoteObject implements MyRemoteObjectInterface {
    public MyRemoteObject() throws RemoteException {
    }

    public long getPower(long number, long power) throws RemoteException {
        return (long) Math.pow(number, power);
    }

    public static void main(String args[]) {
        try {
            System.out.println("ip=" + InetAddress.getLocalHost().getHostAddress());
            MyRemoteObjectInterface RemService = new MyRemoteObject();
            Naming.rebind("RemotePower", RemService);
        } catch (Exception ex) {
        }

    }

}
