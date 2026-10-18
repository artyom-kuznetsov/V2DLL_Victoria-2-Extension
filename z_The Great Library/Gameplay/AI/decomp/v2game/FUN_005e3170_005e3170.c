// FUN_005e3170 @ 005e3170 body=[[005e3170, 005e31c9]]


void FUN_005e3170(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 0x1a) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    return;
  }
  if (param_2 != 0x416) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_0072d580();
  return;
}

