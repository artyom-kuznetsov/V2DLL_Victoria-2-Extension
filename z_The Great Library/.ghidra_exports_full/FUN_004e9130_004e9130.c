// FUN_004e9130 @ 004e9130 body=[[004e9130, 004e935d]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e9130(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  longlong lVar6;
  undefined8 uVar7;
  int iStack_8c;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_01258a10 == (undefined4 *)0x0) {
    puStack_7c = (undefined4 *)0x278;
    puStack_80 = (undefined4 *)0x4e9163;
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_01258a10 = (undefined4 *)0x0;
    }
    else {
      puStack_80 = (undefined4 *)0x4e917c;
      puStack_7c = puVar1;
      FUN_00954a40();
      *puVar1 = CNullPop::vftable;
      DAT_01258a10 = puVar1;
    }
  }
  local_8 = 0xffffffff;
  puStack_7c = (undefined4 *)(in_ECX + 0x38);
  uStack_88 = CONCAT44(0x4e91a1,(undefined4)uStack_88);
  puStack_80 = DAT_01258a10;
  FUN_008a8730();
  uStack_88 = *(undefined8 *)(in_ECX + 0xb8);
  puStack_7c = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x1f40000;
  iStack_8c = 0x4e91c4;
  lVar6 = __allmul();
  puStack_80 = (undefined4 *)0x4e91d6;
  iVar2 = FUN_004e9360();
  uStack_88 = (longlong)
              (int)((uint)(lVar6 >> 0xf) >> 0xf | (int)((ulonglong)(lVar6 >> 0xf) >> 0x20) << 0x11)
              * (longlong)(iVar2 * 1000);
  puStack_7c = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x3e8;
  iStack_8c = 0x4e91f8;
  iVar3 = __alldiv();
  puStack_7c = (undefined4 *)0x4e920c;
  iVar2 = -(*(int *)(in_ECX + 0x88) * 4 + 4);
  *(undefined1 **)((int)&puStack_7c + iVar2) = &stack0xffffff88 + iVar2;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 0x4e9214;
  FUN_004e3850();
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0x4e9233;
  iVar4 = FUN_005db9b0();
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 20000;
  *(int *)((int)&uStack_88 + iVar2 + 4) = iVar4 * 1000 >> 0x1f;
  *(int *)((int)&uStack_88 + iVar2) = iVar4 * 1000;
  *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e9248;
  uVar7 = __allmul();
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 1000;
  *(int *)((int)&uStack_88 + iVar2 + 4) = (int)((ulonglong)uVar7 >> 0x20);
  *(int *)((int)&uStack_88 + iVar2) = (int)uVar7;
  *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e9256;
  iVar4 = __alldiv();
  if (iVar4 < 1000) {
    iVar4 = 1000;
  }
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 1000;
  *(int *)((int)&uStack_88 + iVar2 + 4) = iVar3 >> 0x1f;
  *(int *)((int)&uStack_88 + iVar2) = iVar3;
  *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e9276;
  uVar7 = __allmul();
  *(int *)((int)&puStack_7c + iVar2) = iVar4 >> 0x1f;
  *(int *)((int)&puStack_80 + iVar2) = iVar4;
  *(int *)((int)&uStack_88 + iVar2 + 4) = (int)((ulonglong)uVar7 >> 0x20);
  *(int *)((int)&uStack_88 + iVar2) = (int)uVar7;
  *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e9286;
  iVar4 = __alldiv();
  lVar6 = *(longlong *)(in_ECX + 0xb8);
  *(undefined4 *)((int)&puStack_7c + iVar2) = extraout_ECX;
  *(float *)((int)&puStack_7c + iVar2) =
       ((float)((float10)lVar6 * (float10)3.0517578125e-05) + 0.0005) * 1000.0;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 0x4e92ba;
  FUN_00401000();
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0x4e92c2;
  iVar3 = FUN_00b31c00();
  if (iVar3 + 0x189373U < 0x39580e) {
    iVar3 = iVar3 * 1000;
    iVar5 = iVar3 / 20000;
  }
  else {
    *(undefined4 *)((int)&puStack_7c + iVar2) = 0;
    *(undefined4 *)((int)&puStack_80 + iVar2) = 1000;
    *(int *)((int)&uStack_88 + iVar2 + 4) = iVar3 >> 0x1f;
    *(int *)((int)&uStack_88 + iVar2) = iVar3;
    *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e92fa;
    uVar7 = __allmul();
    *(undefined4 *)((int)&puStack_7c + iVar2) = 0;
    *(undefined4 *)((int)&puStack_80 + iVar2) = 20000;
    *(int *)((int)&uStack_88 + iVar2 + 4) = (int)((ulonglong)uVar7 >> 0x20);
    *(int *)((int)&uStack_88 + iVar2) = (int)uVar7;
    *(undefined4 *)((int)&iStack_8c + iVar2) = 0x4e9308;
    iVar5 = __alldiv();
    iVar3 = extraout_ECX_00;
  }
  *(int *)((int)&puStack_7c + iVar2) = iVar3;
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0x41a3ffff;
  *(undefined4 *)((int)&puStack_80 + iVar2) = 0x4e931d;
  FUN_00401000();
  *(undefined4 *)((int)&puStack_7c + iVar2) = 0x4e9325;
  iVar2 = FUN_00b31c00();
  iVar4 = iVar4 + (iVar5 - iVar2);
  if (iVar4 < 0) {
    *param_1 = 0;
  }
  else if (iVar4 < 0x3e9) {
    *param_1 = iVar4;
  }
  else {
    *param_1 = 1000;
  }
  ExceptionList = local_10;
  return;
}

