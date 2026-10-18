// FUN_008a85e0 @ 008a85e0 body=[[008a85e0, 008a8648]]


void FUN_008a85e0(int param_1,int param_2)

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
    return;
  }
  if (param_2 != 0x3ba) {
    (**(code **)(*(int *)(in_ECX + 0x28) + 0x10))(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
  return;
}

