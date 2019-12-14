import java.util.Scanner;
class Vehicle
{
	double mileage,price;
	String model_type;
	Scanner s = new Scanner(System.in);
	Vehicle()
	{
		System.out.print("Enter Model_type : ");
		model_type = s.nextLine();
		System.out.print("Enter Mileage : ");
		mileage = s.nextDouble();
		System.out.print("Enter Price : ");
		price = s.nextDouble();
	}
}

class Car extends Vehicle
{
	double ownership_cost;
	int warranty,seat_capacity;
	String fuel_type;
	Scanner s = new Scanner(System.in);
	Car()
	{
		System.out.print("Enter Fuel Type of Car [Petrol / Diesel]: ");
		fuel_type = s.nextLine();
		System.out.print("Enter Ownership Cost of Car : ");
		ownership_cost = s.nextDouble();
		System.out.print("Enter Warranty of Car [by Years] : ");
		warranty = s.nextInt();
		System.out.print("Enter Seat Capacity of Car : ");
		seat_capacity = s.nextInt();
	}
	void showData()
	{
		System.out.print("\nCar Model type is : "+model_type);
		System.out.print("\nCar Mileage is : "+mileage);
		System.out.print("\nCar Price is : "+price);
		System.out.print("\nCar Fuel type is : "+fuel_type);
		System.out.print("\nCar Ownership Cost is : "+ownership_cost);
		System.out.print("\nCar Warranty is : "+warranty);
		System.out.print("\nCar Seat Capacity is : "+seat_capacity);
		
	}
}

class Bike extends Vehicle
{
	int no_cylender,no_gears,fuel_tank_size;
	String cool_type,wheel_type;
	Scanner s = new Scanner(System.in);
	Bike()
	{
		System.out.print("Enter Cooling Type of Bike [air / liquid / oil]: ");
		cool_type = s.nextLine();
		System.out.print("Enter Wheel Type of Bike [alloys / spoke]: ");
		wheel_type = s.nextLine();
		System.out.print("Enter No of Cylenders of Bike : ");
		no_cylender = s.nextInt();
		System.out.print("Enter No of Gears of Bike : ");
		no_gears = s.nextInt();
		System.out.print("Enter Fuel Tank Size of Bike : ");
		fuel_tank_size = s.nextInt();
	}
	void showData()
	{
		System.out.print("Bike Model type is : "+model_type);
		System.out.print("\nBike Mileage is : "+mileage);
		System.out.print("\nBike Price is : "+price);
		System.out.print("\nBike Cool Type type is : "+cool_type);
		System.out.print("\nBike Wheel Type is : "+wheel_type);
		System.out.print("\nBike No of Cylenders are : "+no_cylender);
		System.out.print("\nBike No of Gears is : "+no_gears);
		System.out.print("\nBike Fuel Tank Size is : "+fuel_tank_size);
	}
}

class Vehicle_9
{
	public static void main(String args[])
	{
		System.out.print("Enter Information of Audi Car : \n");
		Car Audi = new Car();
		System.out.print("\n\nEnter Information of Fort Car : \n");
		Car Fort = new Car();
		System.out.print("\n\nEnter Information of Bajaj Bike : \n");
		Bike Bajaj = new Bike();
		System.out.print("\n\nEnter Information of TVS Bike : \n");
		Bike TVS = new Bike();
		
		System.out.print("\n\n\nInformation of Audi Car : \n");
		Audi.showData();
		System.out.print("\n\nInformation of Fort Car : \n");
		Fort.showData();
		System.out.print("\n\nInformation of Bajaj Bike : \n");
		Bajaj.showData();
		System.out.print("\n\nInformation of TVS Bike : \n");
		TVS.showData();
	}
}
