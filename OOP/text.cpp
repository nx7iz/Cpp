#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    Person(string n="",int a=0){name=n;age=a;}
    virtual void displaydata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Patient:public Person{
    private:
    string disease;
    int days;
    float dailycharge;
    public:
    Patient(string n="",int a=0,string di="",int da=0,float dc=0.0):Person(n,a){disease=di;days=da;dailycharge=dc;}
    void displaydata()override{
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Disease:"<<disease<<endl;
        cout<<"Days Admitted:"<<days<<endl;
        cout<<"Total Bill Rs.:"<<dailycharge*days<<endl;
    }
    float getbill(){
        return dailycharge*days;
    }
    string getname(){
        return name;
    }
};
class Doctor:public Person{
    private:
    string specialty;
    public:
    Doctor(string n="",int a=0,string s=""):Person(n,a){specialty=s;}
    void displaydata()override{
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Specialty:"<<specialty<<endl;
    }
    string getname(){
        return name;
    }
};
class Appointment{
    private:
    string patientName;
    string doctorName;
    string date;
    string time;
    string status;
    public:
    Appointment(string p="",string d="",string dt="",string t=""):patientName(p),doctorName(d),date(dt),time(t){status="Pending";}
    void display(){
        cout<<"Patient Name:"<<patientName<<endl;
        cout<<"Doctor Name:"<<doctorName<<endl;
        cout<<"Date:"<<date<<endl;
        cout<<"Time:"<<time<<endl;
        cout<<"Status:"<<status<<endl;
    }
};
class Hospital{
    private:
    Patient patients[50];
    Doctor doctors[20];
    Appointment appointments[100];
    int countpatient;
    int countdoctor;
    int countappointment;
    public:
    Hospital(){
        countpatient=0;
        countdoctor=0;
        countappointment=0;
    }
    void addpatient(){
        if(countpatient<50){
            string name;
            string disease;
            int age;
            int days;
            float charge;
            cout<<"Enter Patient Name:"<<endl;
            cin>>name;
            cout<<"Enter Patient Disease:"<<endl;
            cin>>disease;
            cout<<"Enter Patient Age:"<<endl;
            cin>>age;
            cout<<"Enter Admitted Days:"<<endl;
            cin>>days;
            cout<<"Enter Charges per Day:"<<endl;
            cin>>charge;
            patients[countpatient]=Patient(name,age,disease,days,charge);
            countpatient++;
            cout<<"Patient Added Successfully"<<endl;
        }else{
            cout<<"Patient limit Reached:"<<endl;
        }
    }
    void adddoctor(){
        if(countdoctor<20){
            string name;
            string specialty;
            int age;
            cout<<"Enter Doctor Name:"<<endl;
            cin>>name;
            cout<<"Enter Doctor Specialty:"<<endl;
            cin>>specialty;
            cout<<"Enter Doctor Age:"<<endl;
            cin>>age;
            doctors[countdoctor]=Doctor(name,age,specialty);
            countdoctor++;
            cout<<"Doctor Added Successfully"<<endl;
        }else{
            cout<<"Doctor limit Reached:"<<endl;
        }
    }
    void showpatients(){
        if(countpatient==0){
            cout<<"NO Patient in Hospital"<<endl;
        }
        for(int i=0;i<countpatient;i++){
            patients[i].displaydata();
        }
    }
    void showdoctors(){
        if(countdoctor==0){
            cout<<"NO Doctor Available in Hospital"<<endl;
        }
        for(int i=0;i<countdoctor;i++){
            doctors[i].displaydata();
        }
    }
    void totalearning(){
        float total=0.0;
        for(int i=0;i<countpatient;i++){
            total+=patients[i].getbill();
        }
        cout<<"Total Earnings from Patients: Rs."<<total<<endl;
    }
    void deletepatient(){
        if(countpatient==0){
            cout<<"No patients available"<<endl;
            return;
        }
        string delName;
        cout<<"Enter patient name to delete:"<<endl;
        cin>>delName;
        for(int i=0;i<countpatient;i++){
            if(patients[i].getname()==delName){
                for(int j=i;j<countpatient-1;j++){
                    patients[j]=patients[j + 1];
                }
                countpatient--; 
                cout<<"Patient Deleted"<<endl;
                return;
            }
        }
        cout<<"Patient Not Found"<<endl;
    }
    void addappointment(){
        if(countappointment<100){
            string patientName;
            string doctorName;
            string date;
            string time;
            cout<<"Enter Patient Name:"<<endl;
            cin>>patientName;
            cout<<"Enter Doctor Name:"<<endl;
            cin>>doctorName;
            cout<<"Enter Date (dd/mm/yyyy):"<<endl;
            cin>>date;
            cout<<"Enter Time (hh:mm):"<<endl;
            cin>>time;
            appointments[countappointment]=Appointment(patientName,doctorName,date,time);
            countappointment++;
            cout<<"Appointment Booked Successfully"<<endl;
        }else{
            cout<<"Appointment Limit Reached"<<endl;
        }
    }
    void showappointments(){
        if(countappointment==0){
            cout<<"No Appointments"<<endl;
            return;
        }
        for(int i=0;i<countappointment;i++){
            appointments[i].display();
        }
    }
};
int main(){
    Hospital h;
    int choice;
    do{
        cout<<"==== Hospital Management Dashboard ===="<<endl;
        cout<<"1.Add Patient"<<endl;
        cout<<"2.Add Doctor"<<endl;
        cout<<"3.Show Patients"<<endl;
        cout<<"4.Show Doctors"<<endl;
        cout<<"5.Total Earnings"<<endl;
        cout<<"6.Delete Patient"<<endl;
        cout<<"7.Add Appointment"<<endl;
        cout<<"8.Show Appointments"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"Enter Your Choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:h.addpatient();break;
            case 2:h.adddoctor();break;
            case 3:h.showpatients();break;
            case 4:h.showdoctors();break;
            case 5:h.totalearning();break;
            case 6:h.deletepatient();break;
            case 7:h.addappointment();break;
            case 8:h.showappointments();break;
            case 9:cout<<"Exiting..."<<endl;break;
            default:cout<<"Invalid Choice!"<<endl;break;
        }
    }while(choice!=9);
    return 0;
}