// FUN_00429fd0 @ 00429fd0 body=[[00429fd0, 0042a06e]]


void FUN_00429fd0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int in_ECX;
  
  if (param_2 == 0x2a1) {
    pcVar4 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
    FUN_0043bb10();
    return;
  }
  if (param_2 != 0x9e4) {
    FUN_009a0f40();
    return;
  }
  iVar2 = FUN_00aae9af();
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00424d90();
  }
  *(int **)(in_ECX + 8) = piVar3;
  (**(code **)(*piVar3 + 0xc))();
  return;
}

