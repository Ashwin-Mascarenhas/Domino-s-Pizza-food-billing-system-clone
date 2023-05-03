#include<iostream>
#include<conio.h>
int static price;
using namespace std;
class Pizza
{
public:
	int  vp1, vp2, vp3, vp4, vp5, nvp1, nvp2, nvp3, nvp4, nvp5, s1, s2, s3, s4, s5, ch;
	int  sumv[5], sumnv[5], sums[5];
	void menu1()
	{
		cout << "\n\n\n\t\t\t\t\t\t      ========== WELCOME TO DOMINO'S PIZZA ==========" << endl;
		cout << "\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER=====" << endl;
		cout << "\n\n\n\t===========================\t\t\t==========================\t\t\t\t===========================" << endl;
		cout << "\n \t\tVEG PIZZAS\t\t\t\t\tNON-VEG PIZZAS\t\t\t\t\t\tSLIDES " << endl;
		cout << "\t[1] The Unthinkable Pizza (Rs.459)\t\t[6] Pepper Barbecue Chicken(Rs.399)\t\t\t[11] Paneer Tikka Stuffed Garlic Bread (Rs.159)\n\t[2] Veg Extravaganza (Rs.459)\t\t\t[7] Chicken Sausage Pizza (Rs.339) \t\t\t[12] Red Velvet Lava Cake (Rs.129)\n\t[3] Margherita (Rs.199)\t\t\t\t[8] Chicken Golden Delight (Rs.459)\t\t\t[13] Butterscotch Mousse Cake (Rs.99)\n\t[4] Farmhouse (Rs.399)\t\t\t\t[9] Non Veg Supreme Pizza(Rs.579)\t\t\t[14] Taco Mexicana Veg (Rs.125)\n\t[5] Veggie Paradise (Rs.399)\t\t\t[10] Indi Chicken Tikka (Rs.579)\t\t\t[15] Moroccan Spice Pasta (Rs.129)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT" << endl;
		cout << "\n\t=======================================================================================================================================" << endl;
	}
};
class VegPizza :virtual public Pizza
{
public:

	void menu2(int ch)
	{

		switch (ch)
		{
		case 1:

			cout << "\n\n\tYOU HAVE SELECTED THE UNTHINKABLE PIZZA!";
			cout << "\n\tHOW MANY PIZZAS DO YOU WANT :";
			cin >> vp1;
			sumv[0] = 459 * vp1;
			price = price + sumv[0];
			cout << "\t===========================\n";
			cout << "\tYOU ORDERED THE UNTHINKABLE PIZZA : 459";
			cout << " \n";
			cout << "\tNUMBER OF PIZZAs ORDERED IS : " << vp1;
			cout << "\n";
			cout << "\tYOU ORDERED " << vp1 << " THE UNTHINKABLE PIZZA totalling to: " << vp1 * 459 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;
		case 2:
			cout << "\n\n\tYOU HAVE SELECTED VEG EXTRAVAGANZA PIZZA!";
			cout << "\n\tHOW MANY PIZZAs DO YOU WANT :";
			cin >> vp2;
			sumv[1] = 459 * vp2;
			price = price + sumv[1];
			cout << "\tYOU ORDERED VEG EXTRAVAGANZA PIZZA : 459";
			cout << " \n";
			cout << "\tNUMBER OF PIZZAs ORDERED IS : " << vp2;
			cout << "\n";
			cout << "\tYOU ORDERED " << vp2 << " VEG EXTRAVAGANZA PIZZA totalling to: " << vp2 * 459 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 3:
			cout << "\n\n\tYOU HAVE SELECTED MARGHERITA PIZZA!";
			cout << "\n\tHOW MANY MARGHERITA PIZZAs DO YOU WANT :";
			cin >> vp3;
			sumv[2] = 199 * vp3;
			price = price + sumv[2];
			cout << "\tYOU ORDERED  MARGHERITA PIZZA: 199";
			cout << " \n";
			cout << "\tNUMBER OF MARGHERITA PIZZAs IS : " << vp3;
			cout << "\n";
			cout << "\tYOU ORDERED " << vp3 << " MARGHERITA PIZZAs totalling to: " << vp3 * 199 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 4:
			cout << "\n\n\tYOU HAVE SELECTED FARMHOUSE PIZZA!";
			cout << "\n\tHOW MANY FARMHOUSE PIZZAs DO YOU WANT :";
			cin >> vp4;
			sumv[3] = 399 * vp4;
			price = price + sumv[3];
			cout << "\tYOU ORDERED FARMHOUSE PIZZA : 399";
			cout << " \n";
			cout << "\tNUMBER OF FARMHOUSE PIZZAs IS : " << vp4;
			cout << "\n";
			cout << "\tYOU ORDERED " << vp4 << " FARMHOUSE PIZZAs totalling to: " << vp4 * 399 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 5:
			cout << "\n\n\tYOU HAVE SELECTED VEGGIE PARADISE PIZZA!";
			cout << "\n\tHOW MANY VEGGIE PARADISE PIZZAs YOU WANT:";
			cin >> vp5;
			sumv[4] = 399 * vp5;
			price = price + sumv[4];
			cout << "\tYOU ORDERED  VEGGIE PARADISE PIZZA : 399";
			cout << " \n";
			cout << "\tNUMBER OF VEGGIE PARADISE PIZZAs IS : " << vp5;
			cout << "\n";
			cout << "\tYOU ORDERED " << vp5 << " VEGGIE PARADISE PIZZAs totalling to: " << vp5 * 399 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;
		}
	}
};
class NonVegPizza : virtual public Pizza
{
public:

	void menu3(int ch)
	{
		switch (ch)
		{
		case 6:
			cout << "\n\n\tYOU HAVE SELECTED PEPPER BARBECUE CHICKEN PIZZA!";
			cout << "\n\tHOW MANY PEPPER BARBECUE CHICKEN PIZZAs DO YOU WANT:";
			cin >> nvp1;
			sumnv[0] = 399 * nvp1;
			price = price + sumnv[0];
			cout << "\tYOU ORDERED PEPPER BARBECUE CHICKEN PIZZA : 399";
			cout << "\n ";
			cout << "\tNUMBER OF PEPPER BARBECUE CHICKEN PIZZAs IS : " << nvp1;
			cout << "\n";
			cout << "\tYOU ORDERED " << nvp1 << " PEPPER BARBECUE CHICKEN PIZZAs totalling to: " << nvp1 * 399 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 7:
			cout << "\n\n\tYOU HAVE SELECTED CHICKEN SAUSAGE PIZZA!";
			cout << "\n\tHOW MANY CHICKEN SAUSAGE PIZZAs DO YOU WANT:";
			cin >> nvp2;
			sumnv[1] = 399 * nvp2;
			price = price + sumnv[1];
			cout << "\tYOU ORDERED CHICKEN SAUSAGE PIZZA: 339";
			cout << "\n ";
			cout << "\tNUMBER OF CHICKEN SAUSAGE PIZZAs IS : " << nvp2;
			cout << "\n";
			cout << "\tYOU ORDERED " << nvp2 << " CHICKEN SAUSAGE PIZZAs totalling to: " << nvp2 * 399 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 8:
			cout << "\n\n\tYOU HAVE SELECTED CHICKEN GOLDEN DELIGHT PIZZA!";
			cout << "\n\tHOW MANY CHICKEN GOLDEN DELIGHT PIZZAs DO YOU WANT :";
			cin >> nvp3;
			sumnv[2] = 459 * nvp3;
			price = price + sumnv[2];
			cout << "\tYOU ORDERED CHICKEN GOLDEN DELIGHT PIZZA : 459";
			cout << " \n";
			cout << "\tNUMBER OF CHICKEN GOLDEN DELIGHT PIZZAs IS : " << nvp3;
			cout << "\n";
			cout << "\tYOU ORDERED " << nvp3 << " CHICKEN GOLDEN DELIGHT PIZZAs totalling to: " << nvp3 * 459 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 9:
			cout << "\n\n\tYOU HAVE SELECTED NON VEG SUPREME PIZZA!";
			cout << "\n\tHOW MANY NON VEG SUPREME PIZZAs DO YOU WANT :";
			cin >> nvp4;
			sumnv[3] = 579 * nvp4;
			price = price + sumnv[3];
			cout << "\tYOU ORDERED NON VEG SUPREME PIZZA : 579";
			cout << " \n";
			cout << "\tNUMBER OF NON VEG SUPREME PIZZAs IS : " << nvp4;
			cout << "\n";
			cout << "\tYOU ORDERED " << nvp4 << " NON VEG SUPREME PIZZAs totalling to: " << nvp4 * 579 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 10:
			cout << "\n\n\tYOU HAVE SELECTED INDI CHICKEN TIKKA PIZZA !";
			cout << "\n\tHOW MANY INDI CHICKEN TIKKA PIZZAs DO YOU WANT :";
			cin >> nvp5;
			sumnv[4] = 579 * nvp5;
			price = price + sumnv[4];
			cout << "\tYOU ORDERED INDI CHICKEN TIKKA PIZZA : 579";
			cout << " \n";
			cout << "\tNUMBER OF INDI CHICKEN TIKKA PIZZAs IS : " << nvp5;
			cout << "\n";
			cout << "\tYOU ORDERED " << nvp5 << " INDI CHICKEN TIKKA PIZZAs totalling to: " << nvp5 * 579 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;
		}
	}
};
class Slides : virtual public Pizza
{
public:

	void menu4(int ch)
	{
		switch (ch)
		{
		case 11:
			cout << "\n\n\tYOU HAVE SELECTED PANEER TIKKA STUFFED GARLIC BREAD!";
			cout << "\n\tHOW MANY PANEER TIKKA STUFFED GARLIC BREAD DO YOU WANT :";
			cin >> s1;
			sums[0] = 159 * s1;
			price = price + sums[0];
			cout << "\tYOU ORDERED PANEER TIKKA STUFFED GARLIC BREAD : 159";
			cout << " \n";
			cout << "\tNUMBER OF PANEER TIKKA STUFFED GARLIC BREAD IS : " << s1;
			cout << "\n";
			cout << "\tYOU ORDERED " << s1 << " PANEER TIKKA STUFFED GARLIC BREAD totalling to: " << s1 * 159 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 12:
			cout << "\n\n\tYOU HAVE SELECTED RED VELVET LAVA CAKE!";
			cout << "\n\tHOW MANY RED VELVET LAVA CAKEs DO YOU WANT :";
			cin >> s2;
			sums[1] = 129 * s2;
			price = price + sums[1];
			cout << "\tYOU ORDERED RED VELVET LAVA CAKE : 129";
			cout << " \n";
			cout << "\tNUMBER OF RED VELVET LAVA CAKEs IS : " << s2;
			cout << "\n";
			cout << "\tYOU ORDERED " << s2 << " RED VELVET LAVA CAKEs totalling to: " << s2 * 129 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 13:
			cout << "\n\n\tYOU HAVE SELECTED BUTTERSCOTCH MOUSSE CAKE!";
			cout << "\n\tHOW MANY BUTTERSCOTCH MOUSSE CAKEs DO YOU WANT :";
			cin >> s3;
			sums[2] = 99 * s3;
			price = price + sums[2];
			cout << "\tYOU ORDERED BUTTERSCOTCH MOUSSE CAKE  : 99";
			cout << " \n";
			cout << "\tNUMBER OF BUTTERSCOTCH MOUSSE CAKEs IS : " << s3;
			cout << "\n";
			cout << "\tYOU ORDERED " << s3 << " BUTTERSCOTCH MOUSSE CAKEs totalling to: " << s3 * 99 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		case 14:
			cout << "\n\n\tYOU HAVE SELECTED TACO MEXICANA VEG!";
			cout << "\n\tHOW MANY TACO MEXICANA VEG DO YOU WANT :";
			cin >> s4;
			sums[3] = 125 * s4;
			price = price + sums[3];
			cout << "\tYOU ORDERED TACO MEXICANA VEG  : 125";
			cout << " \n";
			cout << "\tNUMBER OF TACO MEXICANA VEG IS : " << s4;
			cout << "\n";
			cout << "\tYOU ORDERED " << s4 << " TACO MEXICANA VEG totalling to: " << s4 * 125 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;;
			break;

		case 15:
			cout << "\n\n\tYOU HAVE SELECTED MOROCCAN SPICE PASTA!";
			cout << "\n\tHOW MANY MOROCCAN SPICE PASTAs DO YOU WANT :";
			cin >> s5;
			sums[4] = 129 * s5;
			price = price + sums[4];
			cout << "\tYOU ORDERED  MOROCCAN SPICE PASTA : 129";
			cout << "\n ";
			cout << "\tNUMBER OF MOROCCAN SPICE PASTAs : " << s5;
			cout << "\n";
			cout << "\tYOU ORDERED" << s5 << " MOROCCAN SPICE PASTAs totalling to: " << s5 * 129 << endl << "\tYOUR ORDER IS SUCCESSFULLY SAVED " << endl;
			break;

		}
	}
};
class Bill : public VegPizza, public NonVegPizza, public Slides
{
public:
	void operator ++()
	{
		cout << " TOTAL = " << price << endl;
	}
};
void main()
{
	int ch, a = 0, b;
	int  sumv[5] = {}, sumnv[5] = {}, sums[5] = {};
	Pizza pz;
	pz.menu1();
	while (a == 0)
	{
		cout << endl << "Would you like to order/add anything? [press 1 for yes & 0 for no]" << endl;
		cin >> b;
		if (b == 1)
		{
			cout << "\n\n\tENTER YOUR ORDER (one order at a time): ";
			cin >> ch;
			if (ch >= 1 && ch <= 5)
			{
				VegPizza vpz;
				vpz.menu2(ch);
			}
			else if (ch >= 6 && ch <= 10)
			{
				NonVegPizza nvpz;
				nvpz.menu3(ch);
			}
			else if (ch >= 10 && ch <= 15)
			{
				Slides sl;
				sl.menu4(ch);
			}
			else if (ch == 16)
			{
				a = 1;
			}
		}
		else
		{
			Bill b;
			++b;
			cout << "THANK YOU";
			break;
		}
	}
	_getch();
}
