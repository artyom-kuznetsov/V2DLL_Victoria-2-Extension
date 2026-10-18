// FUN_00b23450 @ 00b23450 body=[[00b23450, 00b2349a]]


undefined4 FUN_00b23450(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  param_1 = param_1 - (int)param_2;
  do {
    cVar1 = param_2[param_1];
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 < cVar2) {
      return 0xffffffff;
    }
    if (cVar2 < cVar1) {
      return 1;
    }
  } while (cVar1 != '\0');
  return 0;
}

