#include <iostream>
#include "Project.h"
#include <string>
#include <cstdlib>
#include <math.h>


using namespace std;

string problem[] {"Multiples of 3 and 5", "Even Fibonacci", "Largest Prime Factor of 600851475143", "Largest Palindrome", "Smallest Multiple","Sum Square Difference", "10001st Prime", "Largest Product in Series","Special Pythagorean Triplet","Summation of primes","Largest Product in a Grid","Highly Divisible Triangular Number","Large Sum","Longest Collatz Sequence","Diophantine Reciprocals A","Powr Digit Sum","Number Letter Counts","Maximum Path Sum I","Counting Sundays","Factorial Digit Sum","Name Scores","1000-digit Fibonacci Number" ," Truncatable Primes","Exit"};
const int num_problems=23;
const int Exit=num_problems+1;

int main()
{

    bool done = false;
    int i = 1, ch = 0;
    Project proj;

    while (done == false)
    {
        system("cls");
        for (i = 0; i < num_problems+1; i++)
        {
            cout << i+1 << ". " << problem[i] << endl;
        }
		cout<<"Choose problem: ";
		cin>>ch;
		switch (ch)
		{
            case 1:

				proj.multiple_3and5();
				break;

            case 2:
                proj.even_fibonacci();
                break;

            case 3:
                proj.largest_prime_factor();
                break;

            case 4:
                proj.largest_palindrome();
                break;

            case 5:
                proj.smallest_multiple();
                break;

            case 6:
                proj.sum_square_diff();
                break;

            case 7:
                proj.ten_th_1st_prime();
                break;

            case 8:
                proj.largest_product_in_series();
                break;
            case 9:
                proj.special_pytho_triplet();
                break;
            case 10:
                 proj.summation_of_primes();
                 break;
            case 11:
                proj.largest_product_grid();
                break;
            case 12:
                proj.divisible_triangular_number();
                break;
            case 13:
                proj.largest_sum();
                break;
            case 14:
                proj.longest_collatz_sequence();
                break;
            case 15:
                proj.diophantine_reciprocals_a();
                break;
            case 16:
                proj.power_digit_sum();
                break;
            case 17:
                proj.number_letter_counts();
                break;
            case 18:
                proj.max_path_sum_one();
                break;
            case 19:
                proj.counting_sundays();
                break;
            case 20:
                proj.factorial_digit_sum();
                break;
            case 21:
                proj.name_scores();
                break;
            case 22:
                proj.first_1000_digit_fibonacci();
                break;
            case 23:
                proj.truncatable_primes();
                break;

            case Exit:
				cout<<"\n\n       |**************************************************************|"<<endl;
				cout<<"       |                                                              |"<<endl;
				cout<<"       |          Thank you! Good Bye! God Bless!  SMILE  ;D          |"<<endl;
				cout<<"       |                                                              |"<<endl;
				cout<<"       |**************************************************************|\n\n";
				done=true;
				break;

		}
		system("PAUSE");
    };


    return 0;
}
