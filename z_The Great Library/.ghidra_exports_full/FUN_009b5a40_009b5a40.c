// FUN_009b5a40 @ 009b5a40 body=[[009b5a40, 009b5b76]]


void FUN_009b5a40(undefined4 param_1)

{
  int iVar1;
  short sVar2;
  int in_ECX;
  short sVar3;
  int local_10;
  int local_c;
  
  sVar3 = *(short *)(in_ECX + 0x150) + (short)param_1;
  *(undefined4 *)(in_ECX + 0x15c) = param_1;
  sVar2 = (short)((uint)param_1 >> 0x10) + *(short *)(in_ECX + 0x154);
  iVar1 = *(int *)(in_ECX + 0x178);
  if (iVar1 == 3) {
    local_10 = (int)sVar3 + *(int *)(in_ECX + 0x17c);
    local_c = (int)sVar2 + *(int *)(in_ECX + 0x180);
  }
  else {
    if (iVar1 == 1) {
      local_10 = (int)sVar3 + *(int *)(in_ECX + 0x17c);
      local_c = (int)sVar2;
      goto LAB_009b5b30;
    }
    if (iVar1 == 2) {
      local_c = (int)sVar2 + *(int *)(in_ECX + 0x180);
    }
    else {
      if (iVar1 == 0) {
        local_10 = (int)sVar3;
        local_c = (int)sVar2;
        goto LAB_009b5b30;
      }
      if (iVar1 == 4) {
        local_10 = *(int *)(in_ECX + 0x17c) / 2 + (int)sVar3;
        local_c = *(int *)(in_ECX + 0x180) / 2 + (int)sVar2;
        goto LAB_009b5b5b;
      }
      if (iVar1 == 5) {
        local_10 = *(int *)(in_ECX + 0x17c) / 2 + (int)sVar3;
        local_c = (int)sVar2;
LAB_009b5b30:
        (**(code **)(**(int **)(in_ECX + 0x110) + 0xcc))(&local_10);
        return;
      }
      if (iVar1 == 6) {
        local_10 = *(int *)(in_ECX + 0x17c) / 2 + (int)sVar3;
        local_c = (int)sVar2 + *(int *)(in_ECX + 0x180);
        goto LAB_009b5b30;
      }
      local_c = (int)sVar2;
    }
    local_10 = (int)sVar3;
  }
LAB_009b5b5b:
  (**(code **)(**(int **)(in_ECX + 0x110) + 0xcc))(&local_10);
  return;
}

