

_estack = ORIGIN(SRAM) + LENGTH(SRAM);

MEMORY
{
	SRAM  (xrw) : ORIGIN = 0x20000000  , LENGTH = 96K
	FLASH (xr)  : ORIGIN = 0x08000000  , LENGTH = 512K	
}

SECTIONS
{
	.isr_vector :
	{
		. = ALIGN(4);
		*(.isr_vector)
		. = ALIGN(4);

	}>FLASH

	.text :
	{
		. = ALIGN(4);
		*(.text)
		*(.text*)
		. = ALIGN(4);
		_etext = . ;

	}>FLASH

	.rodata :
	{
		. = ALIGN(4);
		*(.rodata)
		*(.rodata*)
		. = ALIGN(4);
		_erodata = . ;

	}>FLASH

	_sidata = LOADADDR(.data);

	.data :
	{
		_sdata = . ;
		. = ALIGN(4);
		*(.data)
		*(.data*)
		. = ALIGN(4);
		_edata = . ;

	}>SRAM AT>FLASH

	.bss :
	{
		_sbss = . ;
		. = ALIGN(4);
		*(.bss)
		*(.bss*)
		. = ALIGN(4);
		_ebss = . ;

	}>SRAM
}
