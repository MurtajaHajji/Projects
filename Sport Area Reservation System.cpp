#include <iostream> 
#include <string> 
 
using namespace std; 
struct SportArea { 
 string SportName; 
 string GameType; 
 string NO_of_players; 
 string Field_NO; 
 string location; 
 string customerName; 
 string Age; 
 string Phone_number; 
 string ID;
 string res_price; 
 string availability; 
 string fileName = "tuition_report.txt"; 
}; 
 
SportArea sportList[100]; 
void addsport(int itemNo) { 
 cout << "\nEnter Sport Details\n"; 
 cout << "Sport Name: "; 
 getline(cin,sportList[itemNo].SportName); 
 cout << "Game Type: "; 
 getline(cin,sportList[itemNo].GameType); 
 cout << "Capacity for Number of players: "; 
 getline(cin,sportList[itemNo].NO_of_players); 
 cout << "Field Number: "; 
 getline(cin,sportList[itemNo].Field_NO);
 cout << "Location: "; 
 getline(cin,sportList[itemNo].location); 
 cout << "Reservation Price: "; 
 getline(cin,sportList[itemNo].res_price); 
 cout << "Availability: ";
 getline(cin,sportList[itemNo].availability); 
} 
 
    
 
void viewSport(int itemCount) { 
 cout << "\nSport List\n\n"; 
 for(int ctr = 0; ctr < itemCount; ctr++) { 
  cout <<"----------------------------------------------------\n"; 
  cout << "Sport Name: " << sportList[ctr].SportName << endl; 
  cout << "Game Type: " << sportList[ctr].GameType << endl; 
  cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
  cout << "Field Number: " << sportList[ctr].Field_NO << endl;
  cout << "Location: " << sportList[ctr].location << endl; 
  cout << "Reservation Price: " << sportList[ctr].res_price << endl; 
  cout << "Availability: " << sportList[ctr].availability << " \n";
  cout <<"----------------------------------------------------\n"; 
 } 
} 
 
 
void searchBycode(string code, int index) { 
 for(int ctr = 0; ctr < index ; ctr++) { 
  if(sportList[ctr].SportName.compare(code) == 0) { 
   cout << "\nSport Area Found\n"; 
   cout << "Sport Name: " << sportList[ctr].SportName << endl; 
   cout << "GameType: " << sportList[ctr].GameType << endl; 
   cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
   cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
   cout << "Location: " << sportList[ctr].location << " \n"; 
   cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
   cout << "Availability: " << sportList[ctr].availability << " \n\n";
   return; 
  } 
 } 
 cout << "\nSport Area is not available!\n\n"; 
} 
 
int num; 
void update(string code, int index) { 
 for(int ctr = 0; ctr < index ; ctr++) { 
  if(sportList[ctr].SportName.compare(code) == 0) { 
   cout << "\nWhich data you want to update?\n"; 
   cout << "1.Sport Name " << endl; 
   cout << "2.Game type " << endl; 
   cout << "3.Capacity for Number of players " << endl; 
   cout << "4.Field Number " << " \n"; 
   cout << "5.Location " << " \n"; 
   cout << "6.Reservation Price: " << " \n"; 
   cout << "7.Availability: " << " \n\n";
   cin >> num; 
    
   switch(num){ 
     
       case 1:
         cout << "Enter the new Sport Name: "; 
         (cin >> sportList[ctr].SportName); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n"; 
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
       
       case 2: 
         cout << "Enter the new Game type: "; 
         (cin >> sportList[ctr].GameType); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n"; 
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
    
       case 3: 
         cout << "Enter the new Number of players: "; 
         (cin >> sportList[ctr].NO_of_players); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n"; 
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
    
       case 4: 
         cout << "Enter the new Field Number: "; 
         (cin >> sportList[ctr].Field_NO); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n";
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
       
       case 5: 
         cout << "Enter the new location: "; 
         (cin >> sportList[ctr].location); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n";
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
       
       case 6: 
         cout << "Enter the new location: "; 
         (cin >> sportList[ctr].res_price); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n";
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
   
        case 7: 
         cout << "Enter the new location: "; 
         (cin >> sportList[ctr].availability); 
         cout << "\nSport Area details updated!\n"; 
         cout << "Sport Name: " << sportList[ctr].SportName << endl; 
         cout << "Game type: " << sportList[ctr].GameType << endl; 
         cout << "Capacity for Number of players: " << sportList[ctr].NO_of_players << endl; 
         cout << "Field Number: " << sportList[ctr].Field_NO << " \n"; 
         cout << "Location: " << sportList[ctr].location << " \n";
         cout << "Reservation Price: " << sportList[ctr].res_price << " \n"; 
         cout << "Availability: " << sportList[ctr].availability << " \n\n";
           break; 
      
   return; 
   }
  } 
 } 
 cout << "\nSport Area is not available!\n\n"; 
} 
    
SportArea customerList[100]; 
void addCustomer(int ItemNo) { 
 cout << "\nEnter Customer information\n"; 
 cout << "Name: "; 
 getline(cin,customerList[ItemNo].customerName); 
 cout << "Age: "; 
 getline(cin,customerList[ItemNo].Age); 
 cout << "Phone Nummber: "; 
 getline(cin, customerList[ItemNo].Phone_number); 
 cout << "Customer ID: "; 
 cin >> customerList[ItemNo].ID; 
} 
 
void viewCustomer(int ItemCount) { 
 cout << "\nCustomer List\n\n"; 
 for(int Ctr = 0; Ctr < ItemCount; Ctr++) { 
  cout <<"----------------------------------------------------\n"; 
  cout << "Name: " << customerList[Ctr].customerName << endl; 
  cout << "Age: " << customerList[Ctr].Age << endl; 
  cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
  cout << "Customer ID: " << customerList[Ctr].ID << " \n"; 
  cout <<"----------------------------------------------------\n"; 
 } 
} 
 
 
void SearchBycode(string Code, int Index) { 
 for(int Ctr = 0; Ctr < Index ; Ctr++) { 
  if(customerList[Ctr].customerName.compare(Code) == 0) { 
   cout << "\nCustomer Found\n"; 
   cout << "Name: " << customerList[Ctr].customerName << endl; 
   cout << "Age: " << customerList[Ctr].Age << endl; 
   cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
   cout << "Customer ID: " << customerList[Ctr].ID << " \n\n"; 
   return; 
  } 
 } 
 cout << "\nCustomer is not available!\n\n"; 
} 
 
 
int Num; 
void Update(string Code, int Index) { 
 for(int Ctr = 0; Ctr < Index ; Ctr++) { 
  if(customerList[Ctr].customerName.compare(Code) == 0) { 
   cout << "\nWhich data would you want to update?\n"; 
   cout << "1.Name " << endl; 
   cout << "2.Age " << endl; 
   cout << "3.Phone Number " << endl; 
   cout << "4.Customer ID: " << " \n\n"; 
    
   cin >> Num; 
    
   switch(Num){ 
     
       case 1: 
         cout << "Enter the new Name: "; 
         (cin >> customerList[Ctr].customerName); 
         cout << "\nCustomer information updated!\n"; 
         cout << "Name: " << customerList[Ctr].customerName << endl; 
         cout << "Age: " << customerList[Ctr].Age << endl; 
         cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
         cout << "Customer ID: " << customerList[Ctr].ID << " \n\n";
           break; 
       
       case 2: 
         cout << "Enter the new Age: "; 
         (cin >> customerList[Ctr].Age); 
         cout << "\nCustomer information updated!\n"; 
         cout << "Name: " << customerList[Ctr].customerName << endl; 
         cout << "Age: " << customerList[Ctr].Age << endl; 
         cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
         cout << "Customer ID: " << customerList[Ctr].ID << " \n\n";
           break; 
    
       case 3: 
         cout << "Enter the new Phone Number: "; 
         (cin >> customerList[Ctr].Phone_number); 
         cout << "\nCustomer information updated!\n";
         cout << "Name: " << customerList[Ctr].customerName << endl; 
         cout << "Age: " <<customerList[Ctr].Age << endl; 
         cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
         cout << "Customer ID: " << customerList[Ctr].ID << " \n\n";
           break; 
    
       case 4: 
         cout << "Enter the new Customer ID: "; 
         (cin >> customerList[Ctr].ID); 
         cout << "\nCustomer information updated!\n"; 
         cout << "Name: " << customerList[Ctr].customerName << endl; 
         cout << "Age: " << customerList[Ctr].Age << endl; 
         cout << "Phone Number: " << customerList[Ctr].Phone_number << endl; 
         cout << "Customer ID: " << customerList[Ctr].ID << " \n\n";
           break; 
       
   } 
   return; 
  } 
 } 
 cout << "\nCustomer is not available!\n\n"; 
} 
        
    
//driver code 
int main() { 
    int index = 0; 
    int Index = 0; 
    int choice; 
    string code; 
    string Code; 
    do { 
        cout <<"ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ\n";
        cout <<"| 1.Add Sport Area                |\n"; 
        cout <<"| 2.View Sport Area List          |\n"; 
        cout <<"| 3.Search Sport Area             |\n"; 
        cout <<"| 4.Update Sport Area details     |\n"; 
        cout <<"| 6.Add Customer                  |\n"; 
        cout <<"| 7.View Customer list            |\n"; 
        cout <<"| 8.Search Customer               |\n"; 
        cout <<"| 9.Update Customer information   |\n"; 
        cout <<"| 11. Exit                        |\n"; 
        cout <<"ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ ــــ\n";
        cout <<"Enter your choice: "; 
        cin >> choice; 
        cin.ignore(); 
        
        switch(choice) { 
            case 1: 
              addsport(index); 
              index++; 
              cout << "\n"; 
                break; 
            case 2: 
              viewSport(index); 
              cout << "\n"; 
                break; 
            case 3: 
              cout << "Enter Sport Name: "; 
              cin >> code; 
              searchBycode(code, index); 
                break; 
            case 4: 
              cout <<"Enter Sport Name: "; 
              cin >> code; 
              update(code, index); 
                break; 
            case 6: 
              addCustomer(Index); 
              Index++; 
              cout << "\n"; 
                break; 
            case 7: 
              viewCustomer(Index); 
              cout << "\n"; 
                break; 
            case 8: 
               cout <<"Enter Customer Name: "; 
               cin >> Code; 
               SearchBycode(Code, Index); 
                break; 
            case 9: 
              cout <<"Enter Customer Name: "; 
              cin >> Code; 
              Update(Code, Index);  
            case 11: 
              cout << "Thank you for using our service!\n\n"; 
                break; 
        default: 
            cout << "Incorrect input!\n\n"; 
              break; 
  } 
 } while(choice!=15); 
}