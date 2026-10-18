// FUN_00ae7c40 @ 00ae7c40 body=[[00ae7c40, 00ae7d6d]]


void FUN_00ae7c40(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b37ec1;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (((param_1 != uVar1) && (*(uint *)(in_ECX + 0x14) = param_1, uVar1 < param_1)) &&
     (*(uint *)(in_ECX + 0x18) < param_1)) {
    FUN_00ae84a0(param_1);
  }
  if (param_1 != 0) {
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x10) + iVar5);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      iVar3 = (*(code *)PTR_FUN_00f01b08)(0xc,0x18,4,0,0,0xffffffff,uVar2);
      uStack_4 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00b1ab90();
      }
      uStack_4 = 0xffffffff;
      puVar6[4] = uVar4;
      iVar3 = (*(code *)PTR_FUN_00f01b08)(0x4c,0x18,4,0,0,0xffffffff);
      uStack_4 = 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00b1a740();
      }
      uStack_4 = 0xffffffff;
      puVar6[5] = uVar4;
      iVar3 = (*(code *)PTR_FUN_00f01b08)(0xc,0x18,4,0,0,0xffffffff);
      uStack_4 = 2;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00b1a1e0();
      }
      iVar5 = iVar5 + 0x1c;
      param_1 = param_1 - 1;
      uStack_4 = 0xffffffff;
      puVar6[6] = uVar4;
    } while (param_1 != 0);
  }
  ExceptionList = local_c;
  return;
}

