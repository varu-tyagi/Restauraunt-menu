#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#define MAX_ITEMS 50
// globle variables
char name[30];
int menuSelected;
int oneTimeRun = 0;
int increment_forRotiFun = 0;
int Item = 0;
int quantity_store = 0;
int roti_quantity_store = 0;

int quantity;
int roti_choice =0;
// Array
char name_array[MAX_ITEMS][30];
char roti_name_array[MAX_ITEMS][30];
int price_Array[MAX_ITEMS];
int roti_price_Array[MAX_ITEMS];
float quantity_array[MAX_ITEMS];
int roti_quantity_array[MAX_ITEMS];
char half_full_array[MAX_ITEMS];

void greeting();
void menu();
int menuInput();
void item();
void breakfast();
void lunch();
void dinner();
void fast_food();
void sweets();
void ice_cream();
void tea();
void coffee();
int food_input(int *ptr,char name_ptr[][30]);
void quantities();
void roti_fun(int *ptr,char roti_name_array[][30]);
void date_time(int d_t);
void generate_bill();

int main(){
    greeting();
    printf("\nEnter Your Name : ");
    fgets(name,sizeof(name),stdin);
    menu();
    menuSelected = menuInput();
    item(menuSelected);
    generate_bill();
    return 0;
}
void greeting(){
    printf("The Dss Restaurant \n");
    printf("\nHello Sir/Madam\tWelcome to Dss rastaurant \n");
}
void menu(){
    printf("Menu card \n");
    printf("1.Breakfast \n");
    printf("2.Lunch \n");
    printf("3.Dinner \n");
    printf("4.Fast Food\n");
    printf("5.Sweets \n");
    printf("6.Ice cream \n");
    printf("7.Tea \n");
    printf("8.Coffee \n");
}
int menuInput(){
    int a;
    printf("\nEnter a number from Menu card \n");
    scanf("%d",&a);
    return a;
}
void item(int x){

    switch(x){
        case 1:
            breakfast();
            break;
        case 2:
            lunch();
            break;
        case 3:
            dinner();
            break;
        case 4:
            fast_food();
            break;
        case 5:
            sweets();
            break;
        case 6:
            ice_cream();
            break;
        case 7:
            tea();
            break;
        case 8:
            coffee();
            break;

    default:
        printf("Please select valid option");
        x = menuInput();
        item(x);
    }
}
void breakfast(){
    printf("\nThe Breakfast Menu\n");
    printf("1.Poha             - 30₹\n");
    printf("2.Bread Butter     - 40₹\n");
    printf("3.Upma             - 50₹\n");
    printf("4.Paratha          - 25₹\n");
    printf("5.Khaman Dhokla    - 55₹\n");
    printf("6.Moong Dal Dosa   - 75₹\n");
    printf("7.Sabudana Khichdi - 35₹\n");
    printf("8.Brown Bread      - 25₹\n");
    printf("9.Chole Kulche     - 40₹\n");
    printf("10.Rajma Rice      - 30₹\n");
    food_input(price_Array,name_array);
}
void lunch(){
    printf("\nThe Lunch Menu\n");
    printf("1.Kadai Paneer    - 320₹\n");
    printf("2.Matar Paneer    - 240₹\n");
    printf("3.Aloo Chole      - 180₹\n");
    printf("4.Sev Tamater     - 160₹\n");
    printf("5.Besan Gatte     - 160₹\n");
    printf("6.Daal Fry        - 140₹\n");
    printf("7.Aloo Chole      - 180₹\n");
    printf("8.Aloo Mater      - 150₹\n");
    printf("9.Masala Bhindi   - 165₹\n");
    printf("10.Bhaigan Bharta - 190₹\n");
    food_input(price_Array,name_array);
    roti_fun(roti_price_Array,roti_name_array);
}
void dinner(){
    printf("\nThe Dinner Menu\n");
    printf("1.Dal Makhani      - 140₹\n");
    printf("2.Kadai Bhindi     - 160₹\n");
    printf("3.Sambar           - 120₹\n");
    printf("4.Malai Kofta      - 230₹\n");
    printf("5.Kaju Giri        - 340₹\n");
    printf("6.Shahi Paneer     - 320₹\n");
    printf("7.Palak Sabzi      - 160₹\n");
    printf("8.Sookhi Moong Dal - 120₹\n");
    printf("9.Khoya Paneer     - 330₹\n");
    printf("10.Kaju Giri       - 340₹\n");
    food_input(price_Array,name_array);
    roti_fun(roti_price_Array,roti_name_array);
}
void fast_food(){
    printf("\nThe Fast Food Menu\n");
    printf("1.Pizza          - 220₹\n");
    printf("2.Sandwich       - 80₹\n");
    printf("3.Burger         - 60₹\n");
    printf("4.Chowmein       - 55₹\n");
    printf("5.French Fries   - 50₹\n");
    printf("6.Momos          - 60₹\n");
    printf("7.Manchurian     - 80₹\n");
    printf("8.Masala Patties - 40₹\n");
    printf("9.Potato Salad   - 50₹\n");
    printf("10.Hot dog       - 35₹\n");
    food_input(price_Array,name_array);
}
void sweets(){
    printf("\nThe Sweets Menu\n");
    printf("1.Kaju Barfi  - 520₹\n");
    printf("2.Rasgulla    - 260₹\n");
    printf("3.Gulab Jamun - 360₹\n");
    printf("4.Ras Malai   - 460₹\n");
    printf("5.Milk Cake   - 340₹\n");
    printf("6.Jalebi      - 280₹\n");
    printf("7.Ghevar      - 720₹\n");
    printf("8.Imarti      - 370₹\n");
    printf("9.Kheer       - 210₹\n");
    printf("10.Khirmohan  - 680₹\n");
    printf("Per plat five piece\n");
    food_input(price_Array,name_array);
}
void ice_cream(){
    printf("\nThe Menu of Ice Cream\n");
    printf("The Ice Cream Menu\n");
    printf("1.Vanilla         - 120₹\n");
    printf("2.Strawberry      - 80₹\n");
    printf("3.Mango Tango     - 70₹\n");
    printf("4.Kaju Kishmish   - 140₹\n");
    printf("5.Choco Chips     - 60₹\n");
    printf("6.Kwsar Pista     - 180₹\n");
    printf("7.Berry American  - 170₹\n");
    printf("8.Chocoholic      - 155₹\n");
    printf("9.Maine Blueberry - 125₹\n");
    printf("10.Chocobar       - 110₹\n");
    food_input(price_Array,name_array);
}
void tea(){
    printf("The Tea Menu\n");
    printf("1.Plan Tea     - 20₹\n");
    printf("2.Rose Tea     - 30₹\n");
    printf("3.Elaichi Tea  - 25₹\n");
    printf("4.Adrak Tea    - 25₹\n");
    printf("5.Choclate Tea - 40₹\n");
    printf("6.Special Tea  - 50₹\n");
    printf("7.Green Tea    - 65₹\n");
    printf("8.Herbal Tea   - 40₹\n");
    printf("9.Black Tea    - 75₹\n");
    printf("10.Jasmine Tea - 55₹\n");
    food_input(price_Array,name_array);
}
void coffee(){
    printf("The Coffee Menu\n");
    printf("1.Hot Coffee        - 50₹\n");
    printf("2.Red Eye Coffee    - 80₹\n");
    printf("3.Iced coffee       - 60₹\n");
    printf("4.Cold Coffee       - 55₹\n");
    printf("5.Black Coffee      - 40₹\n");
    printf("6.Long black Coffee - 45₹\n");
    printf("7.Cold brew Coffee  - 65₹\n");
    printf("8.Cappuccino Coffee - 90₹\n");
    printf("9.Americano Coffee  - 85₹\n");
    printf("10.Espresso Coffee  - 95₹\n");
    food_input(price_Array,name_array);
}
void roti_fun(int *ptr, char name[][30]) {
    if(oneTimeRun==0){
    printf("\nWhich Roti would you like to eat\n");
    printf("1.Plan Roti - - - - - 10₹\n");
    printf("2.Rumali Roti - - - - 15₹\n");
    printf("3.Tandoori Roti - - - 20₹\n");
    printf("4.Makki Roti - - -  - 30₹\n");
    printf("5.Bajra Roti - - -  - 25₹\n");
    printf("6.Naan Roti - - - - - 20₹\n");
    printf("7.Kashmiri Roti - - - 45₹\n");
    printf("8.Soya Methi Roti - - 30₹\n");
    printf("9.Thepla Roti - - - - 35₹\n");
    printf("10.Mooli Jowar Roti - 10₹\n");
    }
    printf("\nEnter your choice\n");
    scanf("%d", &roti_choice);
    switch (roti_choice) {
        case 1:
            ptr[increment_forRotiFun] = 10;  // Plan Roti - 10₹
            strcpy(name[increment_forRotiFun], "Plan Roti\t");
            break;
        case 2:
            ptr[increment_forRotiFun] = 15;  // Rumali Roti - 15₹
            strcpy(name[increment_forRotiFun], "Rumali Roti\t");
            break;
        case 3:
            ptr[increment_forRotiFun] = 20;  // Tandoori Roti - 20₹
            strcpy(name[increment_forRotiFun], "Tandoori Roti\t");
            break;
        case 4:
            ptr[increment_forRotiFun] = 30;  // Makki Roti - 30₹
            strcpy(name[increment_forRotiFun], "Makki Roti\t");
            break;
        case 5:
            ptr[increment_forRotiFun] = 25;  // 5.Bajra Roti - 25₹
            strcpy(name[increment_forRotiFun], "Bajra Roti\t");
            break;
        case 6:
            ptr[increment_forRotiFun] = 20;  // Naan Roti - 20₹
            strcpy(name[increment_forRotiFun], "Naan Roti\t");
            break;
        case 7:
            ptr[increment_forRotiFun] = 45;  // Kashmiri Roti - 45₹
            strcpy(name[increment_forRotiFun], "Kashmiri Roti\t");
            break;
        case 8:
            ptr[increment_forRotiFun] = 30;  // Soya Methi Roti - 30₹
            strcpy(name[increment_forRotiFun], "Soya Methi Roti\t");
            break;
        case 9:
            ptr[increment_forRotiFun] = 35;  // Thepla Roti - 35₹
            strcpy(name[increment_forRotiFun], "Thepla Roti\t");
            break;
        case 10:
            ptr[increment_forRotiFun] = 10;  // Mooli Jowar Roti - 10₹
            strcpy(name[increment_forRotiFun], "Mooli Jowar Roti");
            break;
    }

    increment_forRotiFun++; // Increment the counter for the next roti
    quantities();           // fun calling for input quantity
}

int food_input(int *ptr,char name[][30]){
    int serialNo;

    printf("\nEnter the serial number of the item you want to order:\n");
    scanf("%d", &serialNo);


    switch(menuSelected){    // all menu item price insert in switch
        case 1 :
    switch(serialNo){       // breakfast price insert
        case 1 :
            ptr[Item++] = 30; //poha - 30
            strcpy(name[Item-1], "Poha\t\t");
            break;
        case 2 :
            ptr[Item++] = 40; //Bread Butter - 40₹
            strcpy(name[Item-1], "Bread Butter\t");
            break;
        case 3 :
            ptr[Item++] = 50; //Upma 50₹
            strcpy(name[Item-1], "Upma\t\t");
            break;
        case 4 :
            ptr[Item++] = 25; //Paratha - 25₹
            strcpy(name[Item-1], "Paratha\t\t");
            break;
        case 5 :
            ptr[Item++] = 55; //Khaman Dhokla - 55₹
            strcpy(name[Item-1], "Khaman Dhokla\t");
            break;
        case 6 :
            ptr[Item++] = 75; //Moong Dal Dosa - 75₹
            strcpy(name[Item-1], "Moong Dal Dosa\t");
            break;
        case 7 :
            ptr[Item++] = 35; //Sabudana Khichdi - 35₹
            strcpy(name[Item-1], "Sabudana Khichdi");
            break;
        case 8 :
            ptr[Item++] = 25; //Brown Bread - 25₹
            strcpy(name[Item-1], "Brown Bread\t");
            break;
        case 9 :
            ptr[Item++] = 40; //Chole Kulche- 40₹
            strcpy(name[Item-1], "Chole Kulche\t");
            break;
        case 10 :
            ptr[Item++] = 30; //Rajma Rice - 30₹
            strcpy(name[Item-1],"Rajma Rice\t");
            break;
    default:
        printf("Invalid serial number for Breakfast. Please try again.\n");

    }
            break;

        case 2 :
    switch(serialNo){         // lunch price insert
        case 1 :
            ptr[Item++] = 320; //Kadai Paneer - 320₹
            strcpy(name[Item-1], "Kadai Paneer\t");
            break;
        case 2 :
            ptr[Item++] = 240; //Matar Paneer - 240₹
            strcpy(name[Item-1], "Matar Paneer\t");
            break;
        case 3 :
            ptr[Item++] = 180; //Aloo Chole - 180₹
            strcpy(name[Item-1], "Aloo Chole\t");
            break;
        case 4 :
            ptr[Item++] = 160; //Sev Tamater - 160₹
            strcpy(name[Item-1], "Sev Tamater\t");
            break;
        case 5 :
            ptr[Item++] = 160; //Besan Gatte - 160₹
            strcpy(name[Item-1], "Besan Gatte\t");
            break;
        case 6 :
            ptr[Item++] = 140; //Daal Fry - 140₹
            strcpy(name[Item-1], "Daal Fry\t");
            break;
        case 7 :
            ptr[Item++] = 180; //Aloo Chole - 180₹
            strcpy(name[Item-1], "Aloo Chole\t");
            break;
        case 8 :
            ptr[Item++] = 150; //Aloo Mater - 150₹
            strcpy(name[Item-1], "Aloo Mater\t");
            break;
        case 9 :
            ptr[Item++] = 165; //Masala Bhindi - 165₹
            strcpy(name[Item-1], "Masala Bhindi\t");
            break;
        case 10 :
            ptr[Item++] = 190; //Bhaigan Bharta - 190₹
            strcpy(name[Item-1], "Bhaigan Bharta\t");
            break;
    default:
        printf("Invalid serial number for Lunch. Please try again.\n");

    }
            break;
        case 3 :
            switch(serialNo){         // dinner price insert
        case 1 :
            ptr[Item++] = 140; //Dal Makhani - 140₹
            strcpy(name[Item-1], "Dal Makhani\t");
            break;
        case 2 :
            ptr[Item++] = 160; //Kadai Bhindi  - 160₹
            strcpy(name[Item-1], "Kadai Bhindi\t");
            break;
        case 3 :
            ptr[Item++] = 120; //Sambar - 120₹₹
            strcpy(name[Item-1], "Sambar\t\t");
            break;
        case 4 :
            ptr[Item++] = 230; //Malai Kofta - 230₹
            strcpy(name[Item-1], "Malai Kofta\t");
            break;
        case 5 :
            ptr[Item++] = 340; //Kaju Giri - 340₹
            strcpy(name[Item-1], "Kaju Giri\t");
            break;
        case 6 :
            ptr[Item++] = 320; //Shahi Paneer - 320₹
            strcpy(name[Item-1], "Shahi Paneer\t");
            break;
        case 7 :
            ptr[Item++] = 160; //Palak Sabzi - 160₹
            strcpy(name[Item-1], "Palak Sabzi\t");
            break;
        case 8 :
            ptr[Item++] = 120; //Sookhi Moong Dal - 120₹
            strcpy(name[Item-1], "Sookhi Moong Dal");
            break;
        case 9 :
            ptr[Item++] = 330; //Khoya Paneer - 330₹
            strcpy(name[Item-1], "Khoya Paneer\t");
            break;
        case 10 :
            ptr[Item++] = 340; //Kaju Giri - 340₹
            strcpy(name[Item-1], "Kaju Giri\t");
            break;
    default:
        printf("Invalid serial number for Dinner. Please try again.\n");
    }
            break;
        case 4 :
    switch(serialNo){         // fast food price insert
        case 1 :
            ptr[Item++] = 220; //Pizza - 220₹
            strcpy(name[Item-1], "Pizza\t\t");
            break;
        case 2 :
            ptr[Item++] = 80; //Sandwich - 80₹
            strcpy(name[Item-1], "Sandwich\t");
            break;
        case 3 :
            ptr[Item++] = 60; //Burger - 60₹
            strcpy(name[Item-1], "Burger\t\t");
            break;
        case 4 :
            ptr[Item++] = 55; //Chowmein - 55₹
            strcpy(name[Item-1], "Chowmein\t");
            break;
        case 5 :
            ptr[Item++] = 50; //French Fries - 50₹
            strcpy(name[Item-1], "French Fries\t");
            break;
        case 6 :
            ptr[Item++] = 50; //Momos - 60₹
            strcpy(name[Item-1], "Momos\t\t");
            break;
        case 7 :
            ptr[Item++] = 80; //Manchurian - 80₹
            strcpy(name[Item-1], "Manchurian\t");
            break;
        case 8 :
            ptr[Item++] = 40; //Masala Patties - 40₹
            strcpy(name[Item-1], "Masala Patties\t");
            break;
        case 9 :
            ptr[Item++] = 50; //Potato Salad - 50₹
            strcpy(name[Item-1], "Potato Salad\t");
            break;
        case 10 :
            ptr[Item++] = 35; //Hot dog - 35₹
            strcpy(name[Item-1], "Hot dog\t\t");
            break;
    default:
        printf("Invalid serial number for Fast Food. Please try again.\n");
    }
            break;
        case 5 :
     switch(serialNo){         // sweets price insert
        case 1 :
            ptr[Item++] = 520; //Kaju Barfi - 520₹
            strcpy(name[Item-1], "Kaju Barfi\t");
            break;
        case 2 :
            ptr[Item++] = 260; //Rasgulla - 260₹
            strcpy(name[Item-1], "Rasgulla\t");
            break;
        case 3 :
            ptr[Item++] = 360; //Gulab Jamun - 360₹
            strcpy(name[Item-1], "Gulab Jamun\t");
            break;
        case 4 :
            ptr[Item++] = 460; //Ras Malai - 460₹
            strcpy(name[Item-1], "Ras Malai\t");
            break;
        case 5 :
            ptr[Item++] = 340; //Milk Cake - 340₹
            strcpy(name[Item-1], "Milk Cake\t");
            break;
        case 6 :
            ptr[Item++] = 280; //Jalebi - 280₹
            strcpy(name[Item-1], "Jalebi\t\t");
            break;
        case 7 :
            ptr[Item++] = 720; //Ghevar - 720₹
            strcpy(name[Item-1], "Ghevar\t\t");
            break;
        case 8 :
            ptr[Item++] = 370; //Imarti - 370₹
            strcpy(name[Item-1], "Imarti\t\t");
            break;
        case 9 :
            ptr[Item++] = 210; //Kheer - 210₹
            strcpy(name[Item-1], "Kheer\t\t");
            break;
        case 10 :
            ptr[Item++] = 680; //Khirmohan - 680₹
            strcpy(name[Item-1], "Khirmohan\t");
            break;
    default:
        printf("Invalid serial number for Sweets. Please try again.\n");
    }
            break;
        case 6 :
    switch(serialNo){         // ice cream price insert
        case 1 :
            ptr[Item++] = 120; //Vanilla - 120₹
            strcpy(name[Item-1], "Vanilla\t\t");
            break;
        case 2 :
            ptr[Item++] = 80; //Strawberry - 80₹
            strcpy(name[Item-1], "Strawberry\t");
            break;
        case 3 :
            ptr[Item++] = 70; //Mango Tango - 70₹
            strcpy(name[Item-1], "Mango Tango\t");
            break;
        case 4 :
            ptr[Item++] = 140; //Kaju Kishmish - 140₹
            strcpy(name[Item-1], "Kaju Kishmish\t");
            break;
        case 5 :
            ptr[Item++] = 60; //Choco Chips - 60₹
            strcpy(name[Item-1], "Choco Chips\t");
            break;
        case 6 :
            ptr[Item++] = 180; //Kwsar Pista - 180₹
            strcpy(name[Item-1], "Kwsar Pista\t");
            break;
        case 7 :
            ptr[Item++] = 170; //Berry American - 170₹
            strcpy(name[Item-1], "Berry American\t");
            break;
        case 8 :
            ptr[Item++] = 155; //Chocoholic - 155₹
            strcpy(name[Item-1], "Chocoholic\t");
            break;
        case 9 :
            ptr[Item++] = 125; //Maine Blueberry - 125₹
            strcpy(name[Item-1], "Maine Blueberry\t");
            break;
        case 10 :
            ptr[Item++] = 110; //Chocobar - 110₹
            strcpy(name[Item-1], "Chocobar\t");
            break;
    default:
        printf("Invalid serial number for Ice cream. Please try again.\n");
    }
            break;
        case 7 :
    switch(serialNo){         // tea cream price insert
        case 1 :
            ptr[Item++] = 20; //Plan Tea - 20₹
            strcpy(name[Item-1], "Plan Tea\t");
            break;
        case 2 :
            ptr[Item++] = 30; //Rose Tea - 30₹
            strcpy(name[Item-1], "Rose Tea\t");
            break;
        case 3 :
            ptr[Item++] = 25; //Elaichi Tea - 25₹
            strcpy(name[Item-1], "Elaichi Tea\t");
            break;
        case 4 :
            ptr[Item++] = 25; //Adrak Tea - 25₹
            strcpy(name[Item-1], "Adrak Tea\t");
            break;
        case 5 :
            ptr[Item++] = 40; //Choclate Tea - 40₹
            strcpy(name[Item-1], "Choclate Tea\t");
            break;
        case 6 :
            ptr[Item++] = 50; //Special Tea - 50₹
            strcpy(name[Item-1], "Special Tea\t");
            break;
        case 7 :
            ptr[Item++] = 65; //7.Green Tea - 65₹
            strcpy(name[Item-1], "Green Tea\t");
            break;
        case 8 :
            ptr[Item++] = 40; //Herbal Tea - 40₹
            strcpy(name[Item-1], "Herbal Tea\t");
            break;
        case 9 :
            ptr[Item++] = 75; //Black Tea - 75₹
            strcpy(name[Item-1], "Black Tea\t");
            break;
        case 10 :
            ptr[Item++] = 55; //Jasmine Tea - 55₹
            strcpy(name[Item-1], "Jasmine Tea\t");
            break;
    default:
        printf("Invalid serial number for Tea. Please try again.\n");
    }
            break;
        case 8 :
    switch(serialNo){         // coffee price insert
        case 1 :
            ptr[Item++] = 50; //Hot Coffee - 50₹
            strcpy(name[Item-1], "Hot Coffee\t");
            break;
        case 2 :
            ptr[Item++] = 80; //Red Eye Coffee - 80
            strcpy(name[Item-1], "Red Eye Coffee\t");
            break;
        case 3 :
            ptr[Item++] = 60; //Iced coffee - 60₹
            strcpy(name[Item-1], "Iced coffee\t");
            break;
        case 4 :
            ptr[Item++] = 55; //Cold Coffee - 55₹
            strcpy(name[Item-1], "Cold Coffee\t");
            break;
        case 5 :
            ptr[Item++] = 40; //Black Coffee - 40₹
            strcpy(name[Item-1], "Black Coffee\t");
            break;
        case 6 :
            ptr[Item++] = 45; //Long black Coffee - 45₹
            strcpy(name[Item-1], "Long black Coffee");
            break;
        case 7 :
            ptr[Item++] = 65; //Cold brew Coffee - 65₹
            strcpy(name[Item-1], "Cold brew Coffee");
            break;
        case 8 :
            ptr[Item++] = 90; //Cappuccino Coffee - 90₹
            strcpy(name[Item-1], "Cappuccino Coffee");
            break;
        case 9 :
            ptr[Item++] = 85; //Americano Coffee - 85₹
            strcpy(name[Item-1], "Americano Coffee");
            break;
        case 10 :
            ptr[Item++] = 95; //Espresso Coffee - 95₹
            strcpy(name[Item-1], "Espresso Coffee\t");
            break;
    default:
        printf("Invalid serial number for Coffee. Please try again.\n");
    }
            break;
    default:
        printf("Invalid menu selection. Please try again.\n");
}
    quantities();   // fun calling for input quantity
}
void quantities(){
    char another;
    int quantity;
    char* half_full;

    if(roti_choice == 0){
    if(menuSelected == 2 || menuSelected ==3){
        printf("Enter quantity(Half/Full): ");
        scanf("%s",half_full);
    if(strcmp(half_full,"half") == 0 || strcmp(half_full,"Half") == 0){
        quantity_array[quantity_store] = 0.5;
    }else{
        quantity_array[quantity_store] = 1.0;
    }

    } else{
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        quantity_array[quantity_store] = quantity;
    }

    } else{
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        roti_quantity_array[roti_quantity_store] = quantity;
        roti_quantity_store++; // Increment the quantity store
    }

    quantity_store++; // Increment the quantity store
    printf("Do you want to order another item? (y/n): ");
    scanf(" %c", &another);

    if(another == 'y' || another == 'Y'){
    if(roti_choice == 0){
        food_input(price_Array,name_array);
    } else{
        oneTimeRun++;
        roti_fun(roti_price_Array,roti_name_array);
    }
    }
}

void date_time(int d_t){
    if(d_t == 1){
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Date: %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    getch();
    }else{
     time_t t;
    t = time(NULL);
    struct tm tm;
	tm = *localtime(&t);
    printf("Time: %d:%d\n", tm.tm_hour+6, tm.tm_min-30);
    getch();
    }
}

void generate_bill(){
    float sub_total = 0;
    printf("\n\n*******************Dss Restaurant**********************\n");
    printf("Bill Receipt\n");
    printf("Customer's Name : Mr/Mrs %s", name);
    date_time(0);
    date_time(1);
    printf("-------------------------------------------------------\n");
    printf("Items\t\t\t\t");
    printf("Price\t");
    printf("Qty\t");
    printf("Total\t\n");
    printf("-------------------------------------------------------\n");

    // Print food items
    for(int i = 0; i < Item; i++){
        sub_total += price_Array[i] * quantity_array[i];
        printf("%s\t\t%d₹\t%.1f\t%.1f\n", name_array[i], price_Array[i], quantity_array[i], price_Array[i] * quantity_array[i]);
    }
    // Print Roti items if selected
    if(roti_choice != 0){
    for(int i = 0; i < increment_forRotiFun; i++){
        sub_total += roti_price_Array[i] * roti_quantity_array[i];
        printf("%s\t\t%d₹\t%d\t%d\n", roti_name_array[i], roti_price_Array[i], roti_quantity_array[i], roti_price_Array[i] * roti_quantity_array[i]);
    }
    }
    float discount = sub_total/10;
    float net_total = sub_total-discount;
    float cgst = net_total*5/100;
    float sgst = net_total*5/100;
    float grand_total = net_total+cgst+sgst;
    printf("-------------------------------------------------------\n");
    printf("Sub Total:\t\t\t\t\t%.2f\n", sub_total);
    printf("Discount @10%s\t\t\t\t\t%.2f\n","%",discount);
    printf("Net Total\t\t\t\t\t%.2f\n",net_total);
    printf("CGST @05%s\t\t\t\t\t%.2f\n","%",cgst);
    printf("SGST @05%s\t\t\t\t\t%.2f\n","%",sgst);
    printf("-------------------------------------------------------\n");
    printf("Grand Total\t\t\t\t\t%.2f\n",grand_total);
    printf("-------------------------------------------------------\n");
    printf("\nThank you for dining with us, Have a great day!!! :)\n");
}
