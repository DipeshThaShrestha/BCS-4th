import java.rmi.*;

import java.rmi.server.*;

public class NumberImpl implements Number {

    double numm;

    NumberImpl(double newnumm) throws RemoteException {

        this.numm = newnumm;

    }

    public double getNum() throws RemoteException {

        return this.numm;

    }

}
