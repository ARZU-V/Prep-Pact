package parkinglot.domains.vehicles;

public abstract class Vehicle {
    private final String vehicleNumber;
    private final VehicleType vehicleType;

    puclic Vehicle(String vehivleNumber, VehicleType vehicleType){
        this.vehicleNumber = vehicleNumber;
        this.vehicleType = vehicleType;
    }

    public String getVehicleNumber() {return vehicleNumber};
    public VehicleType getVehicleType() {return vehicleType};

}