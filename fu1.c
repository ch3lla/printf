#include <stdio.h>

#include <unistd.h>

#include <stdarg.h>



int _printf(const char *format, ...) {

	    int count = 0;

	        va_list args;

		    va_start(args, format);



		        for (int i = 0; format[i] != '\0'; i++) {

				        if (format[i] == '%') {

						            i++;

							                switch (format[i]) {

										                case 'd':

													                case 'i':

													                    count += write(1, itoa(va_arg(args, int)), sizeof(va_arg(args, int)));

															                        break;

																		                case '%':

																		                    write(1, "%", 1);

																				                        count++;

																							                    break;

																									                    default:

																									                        write(1, &format[i], 1);

																												                    count++;

																														                        break;

																																	            }

									        } else {

											            write(1, &format[i], 1);

												                count++;

														        }

					    }



			    va_end(args);

			        return count;

}


