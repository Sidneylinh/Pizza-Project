#include
#include
#include
#include
using namespace std;

int main() {
char userInput;
int x;
vector ingredientOption {"cheese", "diced onion", "diced green pepper", "pepperoni","sliced mushrooms", "diced jalepenos", "sardines", "pinapple chunks", "tofu", "ham chunks", "dry red pepper", "dried basil"};
vector ingredientCrustSauce {"regular crust", "gluten-free crust","red sauce", "no red sauce"};
vector ingredientOptionFinal;
vector ingredientAmountsCA {"1", "1/4 cup", "1/2 cup", "No amount"};
vector<vector> ingredientAmounts = {
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // cheese
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // diced onion
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // diced green pepper
{"2 pieces", "4 pieces", "6 pieces", "8 pieces"}, // pepperoni
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // sliced mushrooms
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // diced jalepenos
{"1", "2", "3", "4"}, // sardines
{"2 pieces", "4 pieces", "6 pieces", "8 pieces"}, // pineapple chunks
{"1/8 cup", "1/4 cup", "1/2 cup", "1 cup"}, // tofu
{"2 pieces", "4 pieces", "6 pieces", "8 pieces"}, // ham chunks
{"1 Generous sprinkle", "2 Generous sprinkles", "3 Generous sprinkles", "4 Generous sprinkles"}, // dry red pepper
{"1 Generous sprinkle", "2 Generous sprinkles", "3 Generous sprinkles", "4 Generous sprinkles"} // dried basil
};

vector<string> ingredientAmountFinal;      
vector<char> ingredientLetter {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};    
vector<char> ingredientLetterFinal;     
cout << "Please choose one crust option: " << endl << endl;  
cout << "a. regular crust             b. gluten-free crust" << endl << endl;  
cout << "Enter choice: ";  
cin >> userInput;  
if (userInput == 'a') {  
    ingredientOptionFinal.push_back(ingredientCrustSauce[0]);  
    ingredientAmountFinal.push_back(ingredientAmountsCA[0]);  
    cout << endl << "You chose: " << ingredientCrustSauce[0] << " = " << ingredientAmountsCA[0] << endl; 
}  

else if (userInput == 'b') {  
    ingredientOptionFinal.push_back(ingredientCrustSauce[1]);  
    ingredientAmountFinal.push_back(ingredientAmountsCA[0]);  
    cout << endl << "You chose: " << ingredientCrustSauce[1] << " = " << ingredientAmountsCA[0] << endl; 
}  

cout << "Please choose one sauce option: " << endl << endl;  
cout << "a. red sauce             b. no red sauce" << endl << endl;  
cout << "Enter choice: ";  
cin >> userInput;  

if (userInput == 'a') {  
    ingredientOptionFinal.push_back(ingredientCrustSauce[2]);  
        cout << "Please choose one amount: " << endl << endl; 
        cout << "a. 1/4 cup           b. ½ cup" << endl << endl;  
        cout << "Enter choice: ";  
        cin >> userInput;  

        if (userInput == 'a') {  
            ingredientOptionFinal.push_back(ingredientCrustSauce[2]);  
            ingredientAmountFinal.push_back(ingredientAmountsCA[1]);  
            cout << endl << "You chose: " << ingredientCrustSauce[2] << " = " << ingredientAmountsCA[1] << endl; 
        }  


        else if (userInput == 'b') {  
            ingredientAmountFinal.push_back(ingredientAmountsCA[2]);  
            ingredientAmountFinal.push_back(ingredientAmountsCA[1]);  
            cout << endl << "You chose: " << ingredientCrustSauce[2] << " = " << ingredientAmountsCA[2] << endl;  
        }  
    }  


        else if (userInput == 'b') {  

          ingredientOptionFinal.push_back(ingredientCrustSauce[3]);  
          ingredientAmountFinal.push_back(ingredientAmountsCA[3]);  
          
          cout << endl << "You chose: " << ingredientCrustSauce[3] << " = " << ingredientAmountsCA[3] << endl; 
    }  




while (!ingredientOption.empty()) {        
    cout << "Please choose one ingredient option: " << endl << endl;     
    for (int i = 0; i < ingredientOption.size(); ++i) {   
       if (i == 2 || i == 5 || i == 8 || i == 11) {  
            cout << ingredientLetter[i] << ". " << left << setw(-20) << ingredientOption[i] << endl;   
        }  


        else {  
        cout << ingredientLetter[i] << ". " << left << setw(-20) << ingredientOption[i] << " ";  
        }  
    }   


    cout << "Enter choice: ";     
    cin >> userInput;      


    int ingredientIndex = -1;   
    for (x = 0; x < ingredientLetter.size(); ++x) {    // scan for input, assign final option, delete option from list      
        if (userInput == ingredientLetter[x]) {          
            ingredientIndex = x;   
            ingredientLetterFinal.push_back(ingredientLetter[x]);     
            ingredientOptionFinal.push_back(ingredientOption[x]);      
            ingredientOption.erase(ingredientOption.begin() + x);   
            ingredientLetter.pop_back();      
            
            break;  

        }         
    }       



  
if (ingredientIndex == -1) {    // if userInput is not in ingredientIndex than the loop restarts.   
    cout << "Invalid ingredient choice." << endl;   
    continue;   
}   


cout << "Please choose one amount: " << endl;    

const auto& amountsForSelected = ingredientAmounts[ingredientIndex]; // get amounts   
for (int i = 0; i < amountsForSelected.size(); ++i) {      
    cout << ingredientLetter[i] << ". " << amountsForSelected[i] << " ";      

}      


    cout << endl;      
    cout << "Enter choice: ";      
    cin >> userInput;     


    for (int i = 0; i < amountsForSelected.size(); ++i) {      
        if (userInput == ingredientLetter[i]) {      
            ingredientAmountFinal.push_back(amountsForSelected[i]);   
            ingredientAmounts.erase(ingredientAmounts.begin() + x);   
            cout << "You chose: " << ingredientLetterFinal.back() << ". " << ingredientOptionFinal.back() << " = " << ingredientAmountFinal.back() << endl;         
            break;   

        }      
    }      


    cout << "Would you like to add another ingredient?" << endl << endl;     
    cout << "a. continue              b. finished" << endl << endl;     
    cout << "Enter choice: ";      
    cin  >> userInput;     
    if (userInput == 'b') {     

    break;     
    }    
}   


cout << endl << "* Your pizza recipe *" << endl;     
for (int i = 0; i < ingredientAmountFinal.size(); ++i) {     
cout << ingredientOptionFinal[i] << "         " << ingredientAmountFinal[i] << endl;     
}   



 return 0;   