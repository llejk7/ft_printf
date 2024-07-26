/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:33:24 by krenken           #+#    #+#             */
/*   Updated: 2024/07/26 20:57:46 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// Standard test cases
	ft_printf("ft_printf: Hello, World!\n");
	printf("printf: Hello, World!\n");
	ft_printf("\n");

	ft_printf("ft_printf: Character: %c\n", 'A');
	printf("printf: Character: %c\n", 'A');
	ft_printf("\n");
	
	ft_printf("ft_printf: String: %s\n", "Hello");
	printf("printf: String: %s\n", "Hello");
	ft_printf("\n");
	
	ft_printf("ft_printf: Pointer: %p\n", (void *)0x12345678);
	printf("printf: Pointer: %p\n", (void *)0x12345678);
	ft_printf("\n");
	
	ft_printf("ft_printf: Decimal: %d\n", 1234);
	printf("printf: Decimal: %d\n", 1234);
	ft_printf("\n");
	
	ft_printf("ft_printf: Integer: %i\n", 5678);
	printf("printf: Integer: %i\n", 5678);
	ft_printf("\n");
	
	ft_printf("ft_printf: Unsigned: %u\n", 9876);
	printf("printf: Unsigned: %u\n", 9876);
	ft_printf("\n");
	
	ft_printf("ft_printf: Hex (lower): %x\n", 12345);
	printf("printf: Hex (lower): %x\n", 12345);
	ft_printf("\n");
	
	ft_printf("ft_printf: Hex (upper): %X\n", 0xABCDEF);
	printf("printf: Hex (upper): %X\n", 0xABCDEF);
	ft_printf("\n");
	
	ft_printf("ft_printf: Percent: %%\n");
	printf("printf: Percent: %%\n");
	ft_printf("\n");
	
	// Edge cases
	ft_printf("ft_printf: Null string: %s\n", (char *)NULL);
	printf("printf: Null string: %s\n", (char *)NULL);
	ft_printf("\n");
	
	ft_printf("ft_printf: Empty string: %s\n", "");
	printf("printf: Empty string: %s\n", "");
	ft_printf("\n");
	
	ft_printf("ft_printf: Zero integer: %d\n", 0);
	printf("printf: Zero integer: %d\n", 0);
	ft_printf("\n");
	
	ft_printf("ft_printf: Large integer: %d\n", 2147483647);
	printf("printf: Large integer: %d\n", 2147483647);
	ft_printf("\n");
	
	ft_printf("ft_printf: Negative integer: %d\n", -2147483647 - 1);
	printf("printf: Negative integer: %d\n", -2147483647 - 1);
	ft_printf("\n");
	
	return (0);
}
