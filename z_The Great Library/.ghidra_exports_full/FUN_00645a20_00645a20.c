// FUN_00645a20 @ 00645a20 body=[[00645a20, 00645b0e] [00645b12, 00645b24]]


void FUN_00645a20(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  uint in_stack_00000020;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5a250;
  local_8 = 0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  iVar6 = *param_2;
  local_10 = ExceptionList;
  puVar3 = local_24;
  ExceptionList = &local_10;
  while (local_24 = puVar3, iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 8);
    FUN_0057aab0(iVar6);
    iVar6 = iVar1;
    puVar3 = local_24;
  }
  uVar4 = (uint)local_8 >> 8;
  local_8 = CONCAT31((int3)uVar4,1);
  puVar5 = local_20;
  if (in_ECX != 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x58);
    local_24 = (undefined4 *)FUN_00aae9af(0x10);
    if (local_24 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      *local_24 = uVar2;
      local_24[1] = 0;
      local_24[2] = puVar3;
      *(undefined1 *)(local_24 + 3) = 0;
    }
    iVar6 = local_1c + 1;
    bVar7 = local_1c != 0;
    puVar5 = local_24;
    local_1c = iVar6;
    if (bVar7) {
      puVar3[1] = local_24;
      puVar5 = local_20;
    }
  }
  local_20 = puVar5;
  iVar6 = FUN_0066e3c0(*(undefined4 *)(DAT_012588e8 + 0xb24),&local_24,&param_3,param_1 + 0x8f4);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x160) = 0;
    FUN_0068f390();
  }
  FUN_00849e90();
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return;
}

