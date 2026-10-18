// FUN_00b234a0 @ 00b234a0 body=[[00b234a0, 00b234f7]]


undefined4 FUN_00b234a0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  
  if (param_3 != 0) {
    param_1 = param_1 - (int)param_2;
    do {
      cVar1 = param_2[param_1];
      cVar2 = *param_2;
      param_3 = param_3 + -1;
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
    } while ((cVar1 != '\0') && (param_3 != 0));
  }
  return 0;
}

