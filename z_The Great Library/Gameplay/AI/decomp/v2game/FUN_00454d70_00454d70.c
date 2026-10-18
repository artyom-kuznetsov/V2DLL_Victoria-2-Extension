// FUN_00454d70 @ 00454d70 body=[[00454d70, 00454dbd]]


void FUN_00454d70(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  if (param_2 == 0x1a) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
  }
  else if (param_2 == 0x4a1) {
    (**(code **)(*(int *)(in_ECX + 0x24) + 0xc))(param_1);
    return;
  }
  return;
}

