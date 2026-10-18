// FUN_005c7b80 @ 005c7b80 body=[[005c7b80, 005c81d2]]


void FUN_005c7b80(void)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *in_ECX;
  uint uStack_3c;
  undefined1 *puStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb9381;
  pvStack_14 = ExceptionList;
  uStack_3c = 0x5c7baa;
  ExceptionList = &pvStack_14;
  cVar4 = (**(code **)(*in_ECX + 0x40))();
  if ((cVar4 != '\0') && (in_ECX[0x1d] != 0)) {
    in_ECX[0x22] = 2;
  }
  if (in_ECX[0x17] != 0) {
    puStack_28 = *(undefined1 **)(in_ECX[0x17] + 0xc0);
    uStack_3c = 1;
    cVar4 = FUN_0051af10();
    if (cVar4 == '\0') {
      uStack_3c = 0x5c7bfb;
      FUN_005da120();
    }
  }
  puVar3 = (uint *)puStack_28;
  if (in_ECX[0x1d] == 0) {
LAB_005c7c1a:
    puStack_28 = (undefined1 *)puVar3;
    uStack_3c = 0x5c7c21;
    FUN_005cfd40();
  }
  else {
    puStack_28 = (undefined1 *)&uStack_3c;
    uStack_3c = 0;
    FUN_005cd900(in_ECX);
    puVar3 = &uStack_3c;
    if (in_ECX[0x1d] == 0) goto LAB_005c7c1a;
  }
  if ((0 < in_ECX[0x3b]) ||
     (puStack_28 = (undefined1 *)in_ECX[0x30],
     *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0x67c) == '\0')) {
    in_ECX[0x61] = 0;
    in_ECX[0x62] = DAT_0125ff58;
  }
  if (in_ECX[0x1d] == 0) {
    *(undefined1 *)((int)in_ECX + 0x86) = 0;
  }
  if (0 < in_ECX[0x3b]) {
    if (in_ECX[0x1d] == 0) {
      FUN_005d25c0();
    }
    else {
      uStack_3c = 0x5c7c8b;
      cVar4 = (**(code **)(*in_ECX + 0x3c))();
      if (cVar4 != '\0') {
        uStack_3c = 0x5c7c96;
        cVar4 = FUN_005cbf30();
        if (cVar4 != '\0') {
          *(undefined1 *)(in_ECX + 0x41) = 1;
          if (in_ECX[0x1d] != 0) {
            uStack_3c = 0x5c7caf;
            FUN_005a9640();
          }
          in_ECX[0x1d] = 0;
        }
      }
    }
  }
  uStack_3c = 0x5c7cbd;
  FUN_005c81e0();
  if (((char)in_ECX[0x2f] == '\0') || (in_ECX[0x1d] != 0)) {
LAB_005c7cf0:
    if ((((in_ECX[0x3b] < 1) && ((char)in_ECX[0x41] == '\0')) && (in_ECX[0x1d] == 0)) &&
       (in_ECX[0x1c] == 0)) {
      uStack_3c = DAT_012588e8 + 0xab4;
      FUN_005b57a0();
    }
  }
  else if (in_ECX[0x3b] < 1) {
    *(undefined1 *)(in_ECX + 0x2f) = 0;
    FUN_005cae80();
    uStack_3c = in_ECX[0x37];
    FUN_005cb2c0();
    goto LAB_005c7cf0;
  }
  if (((char)in_ECX[0x41] == '\x01') && (in_ECX[0x3b] < 1)) {
    *(undefined1 *)(in_ECX + 0x41) = 0;
  }
  if ((((char)in_ECX[0x1e] != '\0') && (in_ECX[0x3b] < 1)) && (in_ECX[0x1d] == 0)) {
    FUN_005d9310();
  }
  uStack_3c = 0x5c7d65;
  cVar4 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar4 != '\0') {
    uStack_3c = in_ECX[0x37];
    if ((*(char *)(*(int *)(uStack_3c + 0x5c) + 0x2a) != '\0') && (in_ECX[0x3b] < 1)) {
      cVar4 = (**(code **)(*in_ECX + 0x84))();
      if ((cVar4 == '\0') &&
         ((*(int *)(in_ECX[0x37] + 300) != 0 && (*(int *)(in_ECX[0x37] + 0x158) != 0)))) {
        if (0 < in_ECX[0x10]) {
          uStack_3c = 0x5c7dd3;
          cVar4 = FUN_005cf180();
          if (cVar4 != '\0') {
            uStack_3c = 0x5c7de4;
            iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
            if (*(char *)(iVar5 + 0x34) == '\x01') {
              uStack_3c = 0x90;
              puStack_28 = (undefined1 *)FUN_00aae9af();
              uStack_c = 2;
              if (puStack_28 == (undefined1 *)0x0) {
                uVar6 = 0;
              }
              else {
                uStack_3c = 0;
                uVar6 = FUN_005de7d0(puStack_28,in_ECX,
                                     *(undefined4 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0xdc),1,0,0);
              }
              uStack_c = 0xffffffff;
              uStack_3c = 0x5c7e41;
              iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
              uStack_3c = uVar6;
              (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
            }
            goto LAB_005c7e5a;
          }
        }
        FUN_0068a850();
      }
    }
  }
LAB_005c7e5a:
  if ((in_ECX[0x1d] == 0) && (in_ECX[0x1c] == 0)) {
    uStack_3c = 0x42c90000;
    FUN_00401000();
    uStack_3c = 0x5c7e81;
    iVar5 = FUN_00b31c00();
    piVar7 = (int *)FUN_005cd690();
    if ((*piVar7 < iVar5) &&
       ((((char)in_ECX[0x30] == 'R' && (*(char *)((int)in_ECX + 0xc1) == 'E')) &&
        (*(char *)((int)in_ECX + 0xc2) == 'B')))) {
      FUN_0068a850();
    }
  }
  uStack_3c = 0x5c7ec1;
  cVar4 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar4 != '\0') {
    uStack_3c = 0x5c7ece;
    (**(code **)(*in_ECX + 0x30))();
    uStack_3c = 0x5c7ed5;
    FUN_005d7e20();
  }
  uStack_3c = 0x5c7ede;
  cVar4 = (**(code **)(*in_ECX + 0x3c))();
  if (((cVar4 != '\0') && (in_ECX[0x10] == 0)) &&
     (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) == '\0')) {
    uStack_3c = 0x5c7f15;
    iVar8 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
    iVar5 = DAT_012588e8;
    if (*(char *)(iVar8 + 0x34) == '\x01') {
      uStack_3c = in_ECX[0x31];
      cVar4 = FUN_006875e0(in_ECX[0x30]);
      bVar2 = true;
      if (cVar4 == '\0') goto LAB_005c7f3c;
    }
    else {
LAB_005c7f3c:
      bVar2 = false;
    }
    if ((((char)in_ECX[1] == '\0') && (*(int *)(iVar5 + 0xb60) == in_ECX[0x31])) || (bVar2)) {
      uStack_3c = 100;
      puStack_28 = (undefined1 *)FUN_00aae9af();
      uStack_c = 3;
      if (puStack_28 == (undefined1 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005e02a0(puStack_28);
      }
      uStack_c = 0xffffffff;
      uStack_3c = 0x5c7f99;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      uStack_3c = uVar6;
      (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
    }
  }
  uStack_3c = 0x5c7fad;
  cVar4 = (**(code **)(*in_ECX + 0x38))();
  if ((cVar4 == '\0') || (in_ECX[0x10] != 0)) goto LAB_005c8060;
  uStack_3c = 0x5c7fd1;
  iVar8 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
  iVar5 = DAT_012588e8;
  if (*(char *)(iVar8 + 0x34) == '\x01') {
    uStack_3c = in_ECX[0x31];
    cVar4 = FUN_006875e0(in_ECX[0x30]);
    bVar2 = true;
    if (cVar4 == '\0') goto LAB_005c7ff8;
  }
  else {
LAB_005c7ff8:
    bVar2 = false;
  }
  if ((((char)in_ECX[1] == '\0') && (*(int *)(iVar5 + 0xb60) == in_ECX[0x31])) || (bVar2)) {
    uStack_3c = 100;
    puStack_28 = (undefined1 *)FUN_00aae9af();
    uStack_c = 4;
    if (puStack_28 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_005e02a0(puStack_28);
    }
    uStack_c = 0xffffffff;
    uStack_3c = 0x5c8055;
    iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    uStack_3c = uVar6;
    (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
  }
LAB_005c8060:
  pcVar1 = *(code **)(*in_ECX + 0x38);
  in_ECX[0x22] = in_ECX[0x22] + -1;
  uStack_3c = 0x5c806f;
  cVar4 = (*pcVar1)();
  if (((cVar4 != '\0') && (in_ECX[0x3b] < 1)) && (in_ECX[0x1d] == 0)) {
    uStack_3c = 0x5c8097;
    iVar5 = (**(code **)(*in_ECX + 0x2c))();
    if (*(int *)(iVar5 + 0x1b4) == 0) {
      puStack_28 = (undefined1 *)in_ECX[0x30];
      if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0x67c) != '\0') &&
         (puStack_28 = (undefined1 *)in_ECX[0x30],
         in_ECX[0x61] <
         *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0xbcc) + 0x1c))
         ) {
        iVar5 = *(int *)(DAT_012588e8 + 0xb0c);
        if (in_ECX[0x62] + (**(int **)(DAT_012586dc + 0x20) / 1000) * 0x18 <= iVar5) {
          in_ECX[0x61] = in_ECX[0x61] + 1000;
          in_ECX[0x62] = iVar5;
        }
      }
    }
  }
  FUN_005c8f10();
  if ((in_ECX[0x1d] == 0) && (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
    uStack_3c = 0x5c8158;
    cVar4 = (**(code **)(*in_ECX + 0x3c))();
    if (cVar4 != '\0') {
      uStack_3c = 0x5c8165;
      (**(code **)(*in_ECX + 0x30))();
      uStack_3c = 0x5c816c;
      FUN_005d7e20();
    }
  }
  uVar6 = (uint)puStack_28 >> 8;
  puStack_28 = (undefined1 *)((uint)puStack_28 & 0xffffff00);
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0x67c) == '\0') &&
     ((((char)in_ECX[0x30] != 'R' || (*(char *)((int)in_ECX + 0xc1) != 'E')) ||
      (*(char *)((int)in_ECX + 0xc2) != 'B')))) {
    puStack_28 = (undefined1 *)CONCAT31((int3)uVar6,1);
  }
  uStack_3c = (uint)puStack_28;
  FUN_005c8330(in_ECX);
  ExceptionList = pvStack_14;
  return;
}

