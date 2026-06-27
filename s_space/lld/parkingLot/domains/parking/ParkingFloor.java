package parkinglot.domain.parking;

import java.util.List;

public class ParkingFloor{
    private final String floorId;
    private final List<ParkingSpot> parkingSpots;

    public ParkingFloor(String floorId, List<ParkingSpot> parkingSpots){
        this.floorId = floorId;
        this.parkingSpots = parkingSpots;
    }

    public List<ParkingSpot> getParkingSpots(){
        return List.copyOf(parkingSpots);
    }

    public string getFloorId(){return floorId;}
}