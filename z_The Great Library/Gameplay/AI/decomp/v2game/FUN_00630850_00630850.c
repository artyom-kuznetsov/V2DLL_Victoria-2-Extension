// FUN_00630850 @ 00630850 body=[[00630850, 00630922]]


void FUN_00630850(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = in_EAX - in_ECX >> 2;
  iVar3 = local_10 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar3) {
    local_14 = iVar3 * 2 + 2;
    do {
      local_18 = *(undefined4 *)(in_ECX + -4 + iVar3 * 4);
      iVar3 = iVar3 + -1;
      local_14 = local_14 + -2;
      local_c = iVar3;
      for (iVar2 = local_14; iVar2 < local_10; iVar2 = iVar2 * 2 + 2) {
        local_8 = *(int *)(in_ECX + -4 + iVar2 * 4);
        iVar1 = *(int *)(in_ECX + iVar2 * 4);
        if ((iVar1 == param_1) && (local_8 != param_1)) {
LAB_006308db:
          iVar2 = iVar2 + -1;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x156c);
          if (((*(int *)(iVar1 + 0x14) == *(int *)(param_1 + 0x20)) &&
              (*(int *)(*(int *)(local_8 + 0x156c) + 0x14) != *(int *)(param_1 + 0x20))) ||
             (*(int *)(iVar1 + 0xc) < *(int *)(*(int *)(local_8 + 0x156c) + 0xc)))
          goto LAB_006308db;
        }
        *(undefined4 *)(in_ECX + local_c * 4) = *(undefined4 *)(in_ECX + iVar2 * 4);
        local_c = iVar2;
      }
      if (iVar2 == local_10) {
        *(undefined4 *)(in_ECX + local_c * 4) = *(undefined4 *)(in_ECX + -4 + local_10 * 4);
      }
      FUN_00631c30(iVar3,&local_18,param_1);
    } while (0 < iVar3);
  }
  return;
}

