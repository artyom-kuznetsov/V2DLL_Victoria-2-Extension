// FUN_0072b850 @ 0072b850 body=[[0072b850, 0072b8bf]]


void FUN_0072b850(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 0x2a1) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    FUN_0043bb10();
    return;
  }
  FUN_009a2620();
  return;
}

