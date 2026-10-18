// FUN_005f8470 @ 005f8470 body=[[005f8470, 005f871c] [005f8728, 005f87a7] [005f87ab, 005f8994] [005f8998, 005f89dd] [005f89e1, 005f89fd] [005f8a01, 005f8a28] [005f8a2c, 005f8aa4]]


void FUN_005f8470(void)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_40;
  void *pvStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b70fc3;
  pvStack_14 = ExceptionList;
  iVar7 = *(int *)(in_ECX + 0xa0);
  uStack_ac = *(int **)(iVar7 + 300);
  DAT_01258a66 = 0;
  ExceptionList = &pvStack_14;
  if (uStack_ac != (int *)0x0) {
    piStack_b0 = (int *)0x5f84b8;
    ExceptionList = &pvStack_14;
    FUN_009af9f0();
  }
  uStack_ac = *(int **)(iVar7 + 0x130);
  DAT_01258a66 = 1;
  if (uStack_ac != (int *)0x0) {
    piStack_b0 = (int *)0x5f84cf;
    FUN_009af9f0();
  }
  piStack_b0 = (int *)0x5f84d5;
  FUN_005fc350();
  piVar4 = (int *)(in_ECX + 0xac);
  for (piVar1 = *(int **)(in_ECX + 0xac); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if (((piVar1[2] == 1) && (piVar1[1] != 0x102)) && (*piVar1 == 0x7a)) {
      *(undefined1 *)(piVar1 + 6) = 1;
      *(undefined1 *)(in_ECX + 0x94) = 1;
    }
  }
  uStack_ac = (int *)0x5f851c;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x20))();
  if (cVar2 != '\0') {
    uStack_60 = *(undefined4 *)(in_ECX + 0x58);
    uStack_5c = 1;
    uStack_58 = 1;
    iVar7 = *(int *)(in_ECX + 0xb0);
    uStack_ac = (int *)0x28;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_54 = uStack_54 & 0xffff0000;
    piStack_b0 = (int *)0x5f8557;
    puVar3 = (undefined8 *)FUN_00aae9af();
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = CONCAT44(uStack_68,uStack_6c);
      puVar3[1] = CONCAT44(uStack_60,uStack_64);
      *(undefined4 *)(puVar3 + 2) = uStack_5c;
      *(undefined4 *)((int)puVar3 + 0x14) = uStack_58;
      *(uint *)(puVar3 + 3) = uStack_54;
      *(int *)((int)puVar3 + 0x1c) = iVar7;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined1 *)((int)puVar3 + 0x24) = 0;
    }
    iVar5 = *(int *)(in_ECX + 0xb4);
    *(undefined8 **)(in_ECX + 0xb0) = puVar3;
    *(int *)(in_ECX + 0xb4) = iVar5 + 1;
    if (iVar5 == 0) {
      *piVar4 = (int)puVar3;
    }
    else {
      *(undefined8 **)(iVar7 + 0x20) = puVar3;
    }
  }
  uStack_ac = (int *)0x5f85bb;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x58))();
  if (cVar2 != '\0') {
    uStack_60 = *(undefined4 *)(in_ECX + 0x58);
    iVar7 = *(int *)(in_ECX + 0xb0);
    uStack_ac = (int *)0x28;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_5c = 2;
    uStack_58 = 1;
    uStack_54 = uStack_54 & 0xffff0000;
    piStack_b0 = (int *)0x5f85f9;
    puVar3 = (undefined8 *)FUN_00aae9af();
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = CONCAT44(uStack_68,uStack_6c);
      puVar3[1] = CONCAT44(uStack_60,uStack_64);
      *(undefined4 *)(puVar3 + 2) = uStack_5c;
      *(undefined4 *)((int)puVar3 + 0x14) = uStack_58;
      *(uint *)(puVar3 + 3) = uStack_54;
      *(int *)((int)puVar3 + 0x1c) = iVar7;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined1 *)((int)puVar3 + 0x24) = 0;
    }
    iVar5 = *(int *)(in_ECX + 0xb4);
    *(undefined8 **)(in_ECX + 0xb0) = puVar3;
    *(int *)(in_ECX + 0xb4) = iVar5 + 1;
    if (iVar5 == 0) {
      *piVar4 = (int)puVar3;
    }
    else {
      *(undefined8 **)(iVar7 + 0x20) = puVar3;
    }
  }
  iVar7 = *(int *)(in_ECX + 0xb0);
  uStack_ac = (int *)0x28;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = uStack_54 & 0xffff0000;
  piStack_b0 = (int *)0x5f8684;
  puVar3 = (undefined8 *)FUN_00aae9af();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = CONCAT44(uStack_68,uStack_6c);
    puVar3[1] = CONCAT44(uStack_60,uStack_64);
    *(undefined4 *)(puVar3 + 2) = uStack_5c;
    *(undefined4 *)((int)puVar3 + 0x14) = uStack_58;
    *(uint *)(puVar3 + 3) = uStack_54;
    *(int *)((int)puVar3 + 0x1c) = iVar7;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 0x24) = 0;
  }
  iVar5 = *(int *)(in_ECX + 0xb4);
  *(undefined8 **)(in_ECX + 0xb0) = puVar3;
  *(int *)(in_ECX + 0xb4) = iVar5 + 1;
  if (iVar5 == 0) {
    *piVar4 = (int)puVar3;
  }
  else {
    *(undefined8 **)(iVar7 + 0x20) = puVar3;
  }
  uStack_ac = &iStack_88;
  piStack_b0 = (int *)0x5f86ed;
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x4c))();
  uStack_b4 = *(undefined4 *)(in_ECX + 0x1c);
  piStack_b0 = piVar4;
  (**(code **)(**(int **)(in_ECX + 0x98) + 4))(*(undefined4 *)(in_ECX + 0x58));
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar4);
  }
  *piVar4 = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x14))();
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x14))();
  uStack_68 = 0xf;
  uStack_6c = 0;
  auStack_7c[0] = 0;
  FUN_00409350("options",7);
  uStack_1c = 0;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(auStack_7c);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
  uStack_20 = 0xffffffff;
  if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_80);
  }
  uStack_6c = 0xf;
  uStack_70 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  puVar6 = (undefined4 *)*piVar4;
  if (puVar6 != (undefined4 *)0x0) {
    do {
      (**(code **)(*(int *)*puVar6 + 0x2c))();
      cVar2 = (**(code **)(*(int *)*puVar6 + 0x28))();
      if (cVar2 != '\0') {
        uStack_ac = (int *)CONCAT13(1,(undefined3)uStack_ac);
      }
      puVar6 = (undefined4 *)puVar6[2];
    } while (puVar6 != (undefined4 *)0x0);
    if (uStack_ac._3_1_ != '\0') {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x18) + 0x38))();
    }
  }
  FUN_00648460(in_ECX,1);
  cVar2 = FUN_0099c370(*(undefined4 *)(in_ECX + 0x9c));
  if (cVar2 == '\0') {
    ExceptionList = pvStack_28;
    return;
  }
  piVar4 = *(int **)(*(int *)(in_ECX + 0x9c) + 100);
  DAT_01258a6c = 0;
  DAT_01258a70 = 0;
  (**(code **)(*piVar4 + 0xa4))(piVar4);
  piVar4 = *(int **)(*(int *)(in_ECX + 0x9c) + 100);
  iVar7 = 0;
  (**(code **)(*piVar4 + 0xac))(piVar4,0,0,7,0xff000000,DAT_00f092fc);
  FUN_00999bb0();
  FUN_00999fa0();
  if (*(char *)(in_ECX + 0x95) == '\0') {
    if (DAT_013f0838 == 0) goto LAB_005f8a40;
  }
  else {
    DAT_013f0838 = 0xf;
  }
  DAT_013f0838 = DAT_013f0838 + -1;
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  FUN_00409350("SCREENSHOT_TAKEN",0x10);
  uStack_40 = 1;
  FUN_009a8ee0(&uStack_b4,&uStack_84);
  uStack_40._0_1_ = 2;
  puVar6 = DAT_0125b5e0;
  in_ECX = iVar7;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar5 = FUN_00aae9af();
    uStack_40._0_1_ = 3;
    if (iVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
      in_ECX = iVar7;
    }
    else {
      puVar6 = (undefined4 *)FUN_00475150();
      in_ECX = iVar7;
    }
    uStack_40._0_1_ = 4;
    if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar6;
  uStack_40._0_1_ = 2;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  uStack_40._0_1_ = 5;
  FUN_007e1210();
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_54 = 0xf;
  uStack_58 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_40 = CONCAT31(uStack_40._1_3_,6);
  FUN_009adb70();
  piVar4 = piStack_b0;
  if (piStack_b0 != (int *)0x0) {
    while( true ) {
      if (piVar4 == uStack_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < (uint)piVar4[5]) break;
      piVar4[5] = 0xf;
      piVar4[4] = 0;
      *(undefined1 *)piVar4 = 0;
      piVar4 = piVar4 + 8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_40 = 0xffffffff;
  piStack_b0 = (int *)0x0;
  uStack_ac = (int *)0x0;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
LAB_005f8a40:
  *(undefined1 *)(in_ECX + 0x95) = 0;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x9c) + 100) + 0xa8))();
  iVar7 = *(int *)(in_ECX + 0x9c);
  *(int *)(iVar7 + 0x6bc8c) = *(int *)(iVar7 + 0x6bc8c) + 1;
  if (((*(char *)(iVar7 + 0x6bca0) != '\0') &&
      (iVar5 = (**(code **)(**(int **)(iVar7 + 100) + 0x44))(*(int **)(iVar7 + 100),0,0,0,0),
      iVar5 != 0)) && (iVar5 == -0x7789f798)) {
    *(undefined1 *)(iVar7 + 0x6bca0) = 0;
  }
  ExceptionList = pvStack_28;
  return;
}

