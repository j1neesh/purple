typedef unsigned char uint8;

void main(void)
{
	uint8 a;
	
	a = 0x10;
	
	bit_set(&a, 2, 4);
}

void bit_set(uint8 *value, uint8 set_pos, uint8 reset_pos)
{
	if ((value != NULL) && (set_pos < 8) && (reset_pos < 8))
	{
		*value |= (1 << set_pos);
		*value &= ~(1 << reset_pos);
	}
}
