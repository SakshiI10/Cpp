//OOP

#include<iostream>
#include<string>
using namespace std;

class Cars{
    private:
        int wheels;
        int doors;
        string color;
        int seats;

    public:
        void setWheels(int wheels){
            this->wheels = wheels;
        }

        void setDoors(int doors){
            this->doors = doors;
        }

        void setColor(string color){
            this->color = color;
        }

        void setSeats(int seats){
            this->seats = seats;
        }

        int getWheels(){
            return wheels;
        }

        int getDoors(){
            return doors;
        }

        string getColor(){
            return color;
        }

        int getSeats(){
            return seats;
        }

        void getAllInformation();
        // This is the method which is just declared inside of the class but will be accessed outside of the class and hence we can use that for our purpose of acccessing the elements
};

int main(){
    Cars c1;
    c1.setColor("Black");
    c1.setDoors(4);
    c1.setSeats(5);
    c1.setWheels(4);

    cout<<"Color of the car is "<<c1.getColor()<<endl;
    cout<<"Number of wheels in the car is "<<c1.getWheels()<<endl;
    cout<<"Number of seats in the car is "<<c1.getSeats()<<endl;
    cout<<"Number doors in the car is "<<c1.getDoors()<<endl;
    cout<<"All in one function "<<endl; 
   
    c1.getAllInformation();

    return 0;
}

void Cars :: getAllInformation(){
    cout<<"Color of the car is "<<this->color<<endl;
    cout<<"Number of doors in the car is "<<this->doors<<endl;
    cout<<"Number of seats in the class is "<<this->seats<<endl;
    cout<<"Number of wheels of the car is "<<this->wheels<<endl;
    return;
}