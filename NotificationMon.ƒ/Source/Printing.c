/**/#include <Printing.h>short GetPrinterID(){	THPrint	tpr;	short	printerID;	short	err;		tpr = NewHandle(sizeof(TPrint));	if(!tpr)	return -1;	PrOpen();	if(err = PrError())	{			Debugger();	}	(void) PrValidate(tpr);		/* initialize print rec */					/* get printer ID from high byte of wDev */	printerID = (**tpr).prStl.wDev >> 8;		PrClose();	DisposHandle(tpr);		return printerID;} 