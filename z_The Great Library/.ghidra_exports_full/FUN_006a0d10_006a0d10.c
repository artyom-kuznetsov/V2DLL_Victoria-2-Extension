// FUN_006a0d10 @ 006a0d10 body=[[006a0d10, 006a0db7] [006a0dbb, 006a0ffc]]


void FUN_006a0d10(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_88 [5];
  uint uStack_74;
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7eeb0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_01258728 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar5 = param_1[0x16] * 0xb0 + *DAT_01258728;
  if (param_4 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x1c))(local_88);
    uStack_c = 0;
    FUN_00408ed0(uVar3,0,0xffffffff);
    uStack_c = 0xffffffff;
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
  }
  switch(param_2) {
  case 0:
    uVar3 = (**(code **)(*param_1 + 0x1c))(auStack_6c);
    puStack_10 = (undefined1 *)0x1;
    *param_3 = 3;
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = pvStack_18;
    return;
  case 1:
    uVar3 = (**(code **)(*(int *)param_1[0x62] + 0x20))(auStack_50);
    puStack_10 = (undefined1 *)0x2;
    *param_3 = 3;
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = pvStack_18;
    return;
  case 2:
    param_3[0x19] = 9;
    iVar1 = *(int *)(iVar5 + 0x80);
    uVar6 = __alldiv(iVar1 * -0x8000,
                     (*(int *)(iVar5 + 0x84) + (uint)(iVar1 != 0)) * -0x8000 | (uint)-iVar1 >> 0x11,
                     DAT_00f0bd30,DAT_00f0bd34);
    *param_3 = 9;
    *(undefined8 *)(param_3 + 0x14) = uVar6;
    param_3[1] = 2;
    uVar3 = FUN_005659c0(*(undefined4 *)(*(int *)(iVar5 + 8) + 0x80),auStack_34);
    uStack_c = 3;
    *param_3 = 3;
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = pvStack_14;
    return;
  case 3:
    puVar4 = (undefined4 *)FUN_004c1180();
    *param_3 = 8;
    param_3[0x14] = *puVar4;
    param_3[0x15] = puVar4[1];
    param_3[1] = 2;
    ExceptionList = pvStack_14;
    return;
  case 4:
    uVar6 = __alldiv(*(uint *)(iVar5 + 0x80) << 0xf,
                     *(int *)(iVar5 + 0x84) << 0xf | *(uint *)(iVar5 + 0x80) >> 0x11,DAT_00f0bd30,
                     DAT_00f0bd34);
    *param_3 = 9;
    *(undefined8 *)(param_3 + 0x14) = uVar6;
    param_3[1] = 2;
    ExceptionList = pvStack_14;
    return;
  case 5:
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *param_3 = 0xb;
    param_3[0x16] = uVar3;
    ExceptionList = pvStack_14;
    return;
  case 6:
    uVar3 = *(undefined4 *)(iVar5 + 0x88);
    uVar2 = *(undefined4 *)(iVar5 + 0x8c);
    *param_3 = 8;
    param_3[0x14] = uVar3;
    param_3[0x15] = uVar2;
    param_3[1] = 2;
  }
  ExceptionList = pvStack_14;
  return;
}

