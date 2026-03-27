#include<iostream>
using namespace std;

class GetterSetter{
    public:
    string name = "Amar";


     // private:
    // string address = "prabhakar nagar";
    
    void setaddress(string add){
        address = add;
    }
    
    string getaddress(){
        return address;
    }
    
    private:
    string address;
    
    
    
};
int main(){
    GetterSetter obj;
    cout<< obj.name << endl;
    obj.setaddress("PrabhakarNagar");
    cout<< obj.getaddress() << endl;
}


/*if you already giving value to your 
private variable dont use setter method*/