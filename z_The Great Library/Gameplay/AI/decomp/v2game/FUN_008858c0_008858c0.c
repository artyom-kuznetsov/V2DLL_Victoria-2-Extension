// FUN_008858c0 @ 008858c0 body=[[008858c0, 008858f8]]


void FUN_008858c0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 0x343) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
  }
  return;
}

