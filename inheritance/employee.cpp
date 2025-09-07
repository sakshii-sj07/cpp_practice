/* write a class for employee
 derived classes
 1. full time employee with salary.
 2. part time employee with daily wages.*/
 
 #include<iostream>
 using namespace std;

 class Employee {
   private :
      int id;
      string name;
   public:
      Employee() {
         id = 0;
         name = "Unknown";
      }

      Employee(int i,string n) {
         id = i;
         name = n;
       }

       void setEmployeeId(int i) {
         id = i;
       }

       void setEmployeename(string n) {
         name = n;
       }

       int getEmployeeId() {
         return id;
       }

       string getEmployeeName() {
         return name;
       }
 };
 class Full_time_employee : public Employee {
   private :
      int salary;

   public :
      Full_time_employee() {
         salary = 0;
      }
      Full_time_employee(int i, string n, int s):Employee(i,n) {
         salary = s;
      }

      void setSalary(int s) {
         salary =s;
      }

      int getSalary() {
         return salary;
      }

 };
 class part_time_employee : public Employee {
   private :
      int daily_wage;

   public :
      part_time_employee() {
         daily_wage = 0;
      }
      part_time_employee(int i, string n, int w):Employee(i,n) {
         daily_wage = w;
      }

      void setDaily_Wage(int w) {
         daily_wage =w;
      }

      int getDaily_Wage() {
         return daily_wage;
      }
 };
 int main() {
   Full_time_employee e;
   e.setEmployeeId(890);
   e.setEmployeename("john");
   e.setSalary(12000);
   
   cout<<"salary of "<<e.getEmployeeName()<<" is "<<e.getSalary()<<endl;

   part_time_employee p;
   p.setEmployeeId(568);
   p.setEmployeename("Joy");
   p.setDaily_Wage(2000);

   cout<<"Daily wage of "<<p.getEmployeeName()<<" is "<<p.getDaily_Wage();
    return 0;
 }
