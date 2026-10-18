// FUN_006aaa70 @ 006aaa70 body=[[006aaa70, 006aab50]]


void FUN_006aaa70(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char *pcVar5;
  
  cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x5c) + 0x18) + 0x94))(param_1);
  cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x60) + 0x18) + 0x94))(param_1);
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x80))();
      if (iVar3 == *(int *)(in_ECX + 0x264)) {
        *(bool *)(in_ECX + 0x272) = *(char *)(in_ECX + 0x272) == '\0';
        FUN_006b0970(in_ECX);
        return;
      }
      *(int *)(in_ECX + 0x264) = iVar3;
      FUN_006b0970(in_ECX);
      return;
    }
    pcVar5 = (char *)(in_ECX + 0x271);
    piVar4 = (int *)(in_ECX + 0x26c);
  }
  else {
    pcVar5 = (char *)(in_ECX + 0x270);
    piVar4 = (int *)(in_ECX + 0x268);
  }
  iVar3 = (**(code **)(*param_1 + 0x80))();
  if (iVar3 == *piVar4) {
    *pcVar5 = *pcVar5 == '\0';
    FUN_006b2050(in_ECX);
    return;
  }
  *piVar4 = iVar3;
  FUN_006b2050(in_ECX);
  return;
}

