package parkinglot.domains.parking

import parkinglot.domains.vehicles.Vehicle;
import parkinglot.domains.vehicles.VehicleType;

public class ParkingSpot{
    private final String id;
    private final VehicleType vehicleType;
    private Vehicle vehicle;

    public ParkingSpot(String id, VehicleType vehicleType){
        this.id = id;
        this.vehicleType = vehicleType;
    }

    public synchronised boolean parkVehicle(Vehicle vehicle){
        if(this.vehicle == null && vehicleType == vehicle.getVehicleType()){
            this.vehicle = vehicle;
            return true;
        }
        return false;
    }

    public synchronised void removeVehicle(){
        this.vehicle = null;
    }

    public boolean isSpotAvailable(){
        return vehicle == null;
    }

    public String getId(){
        return id;
    }

    public VehicleType getVehicleType(){
        return vehicleType;
    }
}