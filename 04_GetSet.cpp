#include<iostream>
using namespace std;

class GetterSetter{
    public:
    string name = "Amar";


     // private:
    // string address = "prabhakar nagar";
    
    void setAddress(string add){
        address = add;
    }
    
    string getAddress(){
        return address;
    }
    
    private:
    string address;
    
};

int main(){
    GetterSetter obj;
    cout<< obj.name << endl;
    obj.setAddress("PrabhakarNagar");
    cout<< obj.getAddress() << endl;
}


/*if you already giving value to your 
private variable dont use setter method only use getter method*/