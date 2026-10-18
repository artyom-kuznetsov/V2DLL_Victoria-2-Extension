// FUN_0043ddd0 @ 0043ddd0 body=[[0043ddd0, 0043df39]]


void FUN_0043ddd0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uStack_40;
  undefined8 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  pvStack_14 = ExceptionList;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x14) + 0x22c);
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x14) + 0x228);
  uStack_40._4_4_ = &local_20;
  uStack_40._0_4_ = 0x43de16;
  ExceptionList = &pvStack_14;
  FUN_004a5020();
  bVar5 = (uint)local_20 < uVar1;
  iVar4 = (uint)local_20 - uVar1;
  iVar2 = local_20._4_4_ - iVar2;
  uStack_40._4_4_ = (undefined8 *)0x43de35;
  fVar6 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x10))();
  if ((float)fVar6 < 0.0) {
    local_20 = 0xbfe0000000000000;
  }
  else {
    local_20 = 0x3fe0000000000000;
  }
  uStack_40._4_4_ = (undefined8 *)0x43de6c;
  uVar7 = FUN_00b31c36();
  uStack_40._0_4_ = iVar4;
  uStack_40._4_4_ = (undefined8 *)(iVar2 - (uint)bVar5);
  lVar8 = __allmul(uVar7);
  uStack_40._4_4_ = (undefined8 *)0x50;
  uStack_40._0_4_ = 0x43de87;
  iVar2 = FUN_00aae9af();
  uStack_c = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x14);
    local_20 = CONCAT44(local_20._4_4_,&uStack_40);
    uStack_40 = lVar8 >> 0xf;
    if ((*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) & 0xfffffffcU) == 0) {
      uVar3 = FUN_00588650(iVar2,0);
    }
    else {
      uVar3 = FUN_00588650(iVar2,**(undefined4 **)(iVar4 + 0x48));
    }
  }
  uStack_c = 0xffffffff;
  uStack_40._4_4_ = (undefined8 *)0x43def0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  uStack_40._0_4_ = 0x43defb;
  uStack_40._4_4_ = (undefined8 *)uVar3;
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
  if (*(int *)(in_ECX + 8) != 0) {
    uStack_40._0_4_ = 0x43df0d;
    (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x38))();
  }
  *(undefined4 *)(in_ECX + 0xc) = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = pvStack_18;
  return;
}

