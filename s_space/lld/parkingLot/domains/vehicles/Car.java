package parkinglot.domains.vehicles

public class Car extends Vehicle{
    public Car(String vehicleNumber){
        super(vehicleNumber, VehicleType.CAR);
    }
}