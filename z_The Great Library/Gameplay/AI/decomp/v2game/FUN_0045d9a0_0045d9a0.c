// FUN_0045d9a0 @ 0045d9a0 body=[[0045d9a0, 0045daca] [0045dace, 0045daf8] [0045dafc, 0045db79] [0045db7d, 0045dbbc]]


undefined1 * FUN_0045d9a0(undefined1 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 local_6c [5];
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51f4a;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24)) / 0x1c < 1) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return param_1;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_18 = 0;
  uVar4 = param_2;
  do {
    FUN_00408ed0(*(int *)(in_ECX + 0x24) +
                 ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) %
                 ((*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24)) / 0x1c)) * 0x1c,0,0xffffffff);
    if (param_3 == 0) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00408ed0(local_34,0,0xffffffff);
      local_8 = 2;
      local_14 = local_14 | 2;
      puVar2 = local_50;
    }
    else {
      puVar2 = (uint *)FUN_0046d080(local_6c,local_34,param_3,uVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = local_14 | 1;
    }
    FUN_00408ed0(puVar2,0,0xffffffff);
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    local_8 = 0;
    if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    if ((param_4 == 0) ||
       (iVar1 = *(int *)(param_4 + 4), iVar3 = FUN_0045c080(iVar1,local_34), iVar3 == iVar1)) break;
    iVar1 = (*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24)) / 0x1c;
    local_18 = local_18 + 1;
    uVar4 = (int)(param_2 + local_18) % iVar1;
  } while (local_18 <= iVar1);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (local_20 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

