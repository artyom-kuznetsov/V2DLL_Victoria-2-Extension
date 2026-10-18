// FUN_009e7350 @ 009e7350 body=[[009e7350, 009e74ad]]


void FUN_009e7350(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  short sVar2;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(in_ECX + 0xd8);
  *(undefined4 *)(in_ECX + 0xc4) = param_1;
  sVar2 = (short)param_1;
  if (iVar1 == 3) {
    local_10 = (int)sVar2 + *(int *)(in_ECX + 0xdc);
    local_c = (int)param_1._2_2_ + *(int *)(in_ECX + 0xe0);
  }
  else {
    if (iVar1 == 1) {
      local_c = (int)param_1._2_2_;
      local_10 = (int)sVar2 + *(int *)(in_ECX + 0xdc);
      goto LAB_009e7467;
    }
    if (iVar1 == 2) {
      local_c = (int)param_1._2_2_ + *(int *)(in_ECX + 0xe0);
    }
    else {
      if (iVar1 == 0) {
        local_c = (int)param_1._2_2_;
        local_10 = (int)sVar2;
        goto LAB_009e7467;
      }
      if (iVar1 == 4) {
        if (*(int *)(in_ECX + 0xd0) == 2) {
          local_10 = *(int *)(in_ECX + 0xdc) / 2 - (uint)(*(ushort *)(in_ECX + 0xb4) >> 1);
        }
        else {
          local_10 = *(int *)(in_ECX + 0xdc) / 2;
        }
        local_10 = local_10 + sVar2;
        local_c = *(int *)(in_ECX + 0xe0) / 2 + (int)param_1._2_2_;
        goto LAB_009e7494;
      }
      if (iVar1 == 5) {
        local_10 = *(int *)(in_ECX + 0xdc) / 2 + (int)sVar2;
        local_c = (int)param_1._2_2_;
LAB_009e7467:
        (**(code **)(**(int **)(in_ECX + 0x58) + 0xcc))(&local_10);
        return;
      }
      if (iVar1 == 6) {
        local_10 = *(int *)(in_ECX + 0xdc) / 2 + (int)sVar2;
        local_c = (int)param_1._2_2_ + *(int *)(in_ECX + 0xe0);
        goto LAB_009e7467;
      }
      local_c = (int)param_1._2_2_;
    }
    local_10 = (int)sVar2;
  }
LAB_009e7494:
  (**(code **)(**(int **)(in_ECX + 0x58) + 0xcc))(&local_10);
  return;
}

