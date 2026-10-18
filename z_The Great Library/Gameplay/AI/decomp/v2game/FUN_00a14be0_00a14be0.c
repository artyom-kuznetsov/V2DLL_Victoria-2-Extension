// FUN_00a14be0 @ 00a14be0 body=[[00a14be0, 00a14c7a] [00a14d78, 00a14e75]]


void FUN_00a14be0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  bool bVar4;
  undefined **local_98 [25];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b54f8b;
  local_10 = ExceptionList;
  bVar4 = DAT_01258b30 == (int *)0x0;
  local_14 = &stack0xfffffd9c;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x8c) = param_1;
  if (bVar4) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      local_8 = 10;
      iVar1 = FUN_00aae9af(0x30);
      local_8._0_1_ = 0xb;
      if (iVar1 == 0) {
        DAT_01258b30 = (int *)0x0;
      }
      else {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x8c) + 0x38) + 0x58))();
        DAT_01258b30 = (int *)FUN_00a73670();
      }
      local_8._0_1_ = 10;
      (**(code **)(*DAT_01258b30 + 4))();
      DAT_01258b34 = DAT_01258b34 + 1;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("largefile.cpp",0xd);
      local_8._0_1_ = 0xc;
      FUN_004015b0(local_34,0x1da,0x301);
      local_8._0_1_ = 0xd;
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x6c);
      uVar2 = FUN_00987d20();
      uVar3 = FUN_00447240(uVar2,uVar3);
      FUN_00401280(uVar3);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00987ac0(local_98);
      local_98[0] = std::ios_base::vftable;
      FUN_00aad52d(local_98);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    else {
      local_8 = 0;
      local_14 = &stack0xfffffd9c;
      iVar1 = FUN_00aae9af(0x20);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        DAT_01258b30 = (int *)0x0;
      }
      else {
        DAT_01258b30 = (int *)FUN_00a748d0(iVar1);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(*DAT_01258b30 + 4))();
      DAT_01258b34 = DAT_01258b34 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}

