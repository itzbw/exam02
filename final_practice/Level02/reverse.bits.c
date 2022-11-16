#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char c = 0;
    unsigned       byte_len = 8;
    
    while (byte_len--)
    {
        c = (c << 1) | (octet & 1);
        octet >>= 1;
    }
    return (c);
}

unsigned char reverse_bits2(unsigned char b) {
   b = (b & 0b11110000) >> 4 | (b & 0b00001111) << 4;
   b = (b & 0b11001100) >> 2 | (b & 0b00110011) << 2;
   b = (b & 0b10101010) >> 1 | (b & 0b01010101) << 1;
   return b;
}


/*
unsigned char reverse_bits3(unsigned char b)
{
	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4; // 1)
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2; // 2)
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1; // 3)
	return (b);
}*/

/*
unsigned char	reverse_bits3(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
}*/



// Test //


int	main(void)
{
	unsigned char c;

	c = '2';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits2(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	// c = reverse_bits3(c);
	// write(1, &c, 1);
	// write(1, "\n", 1);

	return (0);
}