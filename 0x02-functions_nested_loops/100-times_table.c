vi 100-times_table.c 
#include"main.h" 
 
/** 
 *  * print_times_table - prints time table of n 
 *   * 
 *    * @n: takes number input 
 *    */ 
 
void print_times_table(int n) 
{ 
	 int prod, mult, num; 
	  
	  if (n <= 15 && n >= 0) 
		   { 
			     for (num = 0; num <= n; ++num) 
				       { 
					          _putchar(48); 
						     for (mult = 1; mult <= n; ++mult) 
							        { 
									    _putchar(','); 
									        _putchar(' '); 
										 
										    prod = num * mult; 
										     
										        if (prod <= 9) 
												     _putchar(' '); 
											    if (prod <= 99) 
												         _putchar(' '); 
											     
											        if (prod >= 100) 
													    { 
														         _putchar((prod / 100) + 48); 
															      _putchar((prod / 10) % 10 + 48); 
															          } else if (prod <= 99 && prod >= 10) 
																	       _putchar((prod / 10) + 48); 
																      _putchar((prod % 10) + 48); 
																 
#include"main.h" 
 
/** 
 * main - Entry point 
 * 
 * Description: computes the sum of all the multiples of 3 or 5 
 * below 1024 (excluded) 
 *  
 * Return: Always 0 (Success) 
 */ 
 
int main(void) 
{ 
	 int sum, num; 
	  
	  for (num = 0; num < 1024; ++num) 
		   { 
			     if ((num % 3 == 0) || (num % 5 == 0)) 
				        sum += num; 
			      } 
	   printf("%d\n", sum); 
	    
	    return (0); 
} 
 
