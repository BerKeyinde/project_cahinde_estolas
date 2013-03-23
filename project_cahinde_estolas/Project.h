#include <string>
#ifndef PROJECT_H
#define PROJECT_H


class Project
{
	public:
		Project();
		virtual ~Project();
		void multiple_3and5();//PROBLEM NO.1
		void even_fibonacci();//PROBLEM NO.2
		void largest_prime_factor();//PROBLEM NO.3
		void largest_palindrome();//PROBLEM NO.4
		void smallest_multiple();//PROBLEM NO.5
		void sum_square_diff();//PROBLEM NO.6
		void ten_th_1st_prime();//PROBLEM NO.7
		void largest_product_in_series();//PROBLEM NO.8
		void special_pytho_triplet();//PROBLEM NO.9
		void summation_of_primes();//PROBLEMNO.10
		void largest_product_grid();//PROBLEM NO.11
		void divisible_triangular_number();//PROBLEM NO.12
		void largest_sum();//PROBLEM NO.13
		void longest_collatz_sequence();//PROBLEM NO.14
		void diophantine_reciprocals_a();//PROBLEM NO.15
		void power_digit_sum();//PROBLEM NO.16
		void number_letter_counts();//PROBLEM NO.17
		void max_path_sum_one();//PROBLEM NO.18
		void counting_sundays();//PROBLEM NO.19
		void factorial_digit_sum();//PROBLEM NO. 20
		void name_scores();//PROBLEM NO.21
		void first_1000_digit_fibonacci();//PROBLEM NO.22
		void truncatable_primes();//PROBLEM NO. 23




	protected:
	private:
		void m_diophantine_reciprocals_a(int);
		void m_truncatable_primes();
		int m_longest_collatz_sequence(int);//PROBLEM NO.14
        //int numDigits( BigNum num );



};

#endif // PROJECT_H
