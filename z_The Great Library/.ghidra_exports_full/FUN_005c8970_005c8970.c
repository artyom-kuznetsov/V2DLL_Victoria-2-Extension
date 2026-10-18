// FUN_005c8970 @ 005c8970 body=[[005c8970, 005c8db9]]


int * FUN_005c8970(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 **ppuStack_44;
  int iStack_30;
  int iStack_2c;
  undefined1 *apuStack_20 [3];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a810;
  pvStack_14 = ExceptionList;
  iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 4);
  ExceptionList = &pvStack_14;
  *param_2 = 0;
  ppuStack_44 = (undefined1 **)0x5c89b2;
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (cVar4 == '\0') {
    apuStack_20[0] = (undefined1 *)param_1[0x30];
    iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0xbcc) +
                    0x30);
    if (*(int *)(*(int *)(*(int *)(param_1[0x37] + 0x118) + DAT_01258720 * 4) + 0x20) < 1) {
      iVar6 = 0;
    }
    else {
      iVar7 = iVar7 + *(int *)(*(int *)(param_1[0x37] + 0x9c) + 0x2f0);
    }
    ppuStack_44 = (undefined1 **)0x0;
    iVar6 = __alldiv((longlong)(iVar7 + 1000) * (longlong)iVar6,1000);
    lVar3 = (longlong)iVar6 * (longlong)param_1[0x2c];
  }
  else {
    apuStack_20[0] = (undefined1 *)param_1[0x30];
    iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0xbcc) +
                    0x40);
    ppuStack_44 = apuStack_20;
    (**(code **)(*param_1 + 0x2c))();
    piVar5 = (int *)FUN_005d7420();
    iVar8 = *piVar5;
    ppuStack_44 = (undefined1 **)0x0;
    iVar6 = __alldiv((longlong)(iVar7 + 1000) * (longlong)iVar6,1000);
    lVar3 = (longlong)iVar6 * (longlong)iVar8;
  }
  ppuStack_44 = (undefined1 **)0x0;
  iVar6 = __alldiv(lVar3,1000);
  ppuStack_44 = (undefined1 **)0x0;
  iStack_30 = __alldiv((longlong)
                       (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) +
                                         0xa60) + 0x60) + 1000) * (longlong)iVar6,1000);
  piVar5 = (int *)param_1[0xe];
  while( true ) {
    if (piVar5 == (int *)0x0) {
      ExceptionList = pvStack_14;
      return param_2;
    }
    piVar1 = (int *)*piVar5;
    piVar5 = (int *)piVar5[2];
    iVar6 = 1000;
    ppuStack_44 = (undefined1 **)0x5c8af1;
    cVar4 = (**(code **)(*piVar1 + 0x28))();
    if (cVar4 == '\0') break;
    ppuStack_44 = (undefined1 **)0x5c8afe;
    cVar4 = FUN_005c0440();
    if (cVar4 == '\0') goto LAB_005c8d32;
    ppuStack_44 = (undefined1 **)0x0;
    iStack_30 = __alldiv((longlong)param_1[0x2c] * (longlong)iStack_30,1000);
    ppuStack_44 = (undefined1 **)0x0;
    uVar9 = __allmul(iStack_30,iStack_30 >> 0x1f,1000);
    ppuStack_44 = (undefined1 **)0x0;
    iVar7 = __alldiv(uVar9,1000);
    if (iVar7 + 0x189373U < 0x39580e) {
      iVar6 = (iVar7 * 1000) / 3000 + 1000;
      iVar8 = *(int *)(piVar1[0xe] + 0xb0);
    }
    else {
      ppuStack_44 = (undefined1 **)0x0;
      uVar9 = __allmul(iVar7,iVar7 >> 0x1f,1000);
      ppuStack_44 = (undefined1 **)0x0;
      iVar6 = __alldiv(uVar9,3000);
      iVar6 = iVar6 + 1000;
      iVar8 = *(int *)(piVar1[0xe] + 0xb0);
    }
LAB_005c8cfd:
    ppuStack_44 = (undefined1 **)0x0;
    iVar7 = __alldiv((longlong)iVar8 * (longlong)iVar7,1000);
    *param_2 = *param_2 + iVar7;
    if (param_3 != '\0') {
      ppuStack_44 = (undefined1 **)(iVar7 + piVar1[0xf]);
      apuStack_20[0] = (undefined1 *)&ppuStack_44;
      FUN_005c02f0();
LAB_005c8d32:
      if (param_3 != '\0') {
        iVar7 = piVar1[0xd];
        if (iVar6 == 0) {
          iVar6 = -1;
        }
        else if (iVar7 + 0x189373U < 0x39580e) {
          iVar6 = (iVar7 * 1000) / iVar6;
        }
        else {
          ppuStack_44 = (undefined1 **)0x0;
          uVar9 = __allmul(iVar7,iVar7 >> 0x1f,1000);
          apuStack_20[0] = (undefined1 *)((ulonglong)uVar9 >> 0x20);
          ppuStack_44 = (undefined1 **)(iVar6 >> 0x1f);
          iVar6 = __alldiv(uVar9,iVar6);
        }
        piVar1[0xd] = iVar6;
        if (100000 < iVar6) {
          piVar1[0xd] = 100000;
        }
      }
    }
  }
  if (piVar1[0xc] != 0) {
    ppuStack_44 = (undefined1 **)0x5c8bb2;
    cVar4 = FUN_005c0440();
    if (cVar4 != '\0') {
      puVar2 = (undefined1 *)piVar1[0xc];
      ppuStack_44 = (undefined1 **)0x43fa4001;
      apuStack_20[0] = puVar2;
      FUN_00401000();
      ppuStack_44 = (undefined1 **)0x5c8bdc;
      iStack_2c = FUN_00b31c00();
      if (*(char *)(*(int *)(puVar2 + 0x68) + 0x42) != '\0') {
        ppuStack_44 = (undefined1 **)0x0;
        iVar6 = FUN_00965870(puVar2);
        iVar8 = iVar6 * 1000;
        ppuStack_44 = (undefined1 **)0x0;
        iVar7 = FUN_00965930();
        apuStack_20[0] = (undefined1 *)(iVar7 * 1000);
        if ((0 < iVar8) && (0 < (int)apuStack_20[0])) {
          if (apuStack_20[0] == (undefined1 *)0x0) {
            iStack_2c = -1;
          }
          else if (iVar8 + 0x189373U < 0x39580e) {
            iStack_2c = (iVar6 * 1000000) / (int)apuStack_20[0];
          }
          else {
            ppuStack_44 = (undefined1 **)0x0;
            uVar9 = __allmul(iVar8,iVar8 >> 0x1f,1000);
            ppuStack_44 = (undefined1 **)((int)apuStack_20[0] >> 0x1f);
            iStack_2c = __alldiv(uVar9,apuStack_20[0]);
          }
          if (1000 < iStack_2c) {
            iStack_2c = 1000;
          }
        }
      }
      ppuStack_44 = (undefined1 **)0x0;
      iStack_30 = __alldiv((longlong)param_1[0x2c] * (longlong)iStack_30,1000);
      ppuStack_44 = (undefined1 **)0x0;
      iVar7 = __alldiv((longlong)iStack_2c * (longlong)iStack_30,1000);
      if (iVar7 + 0x189373U < 0x39580e) {
        iVar6 = (iVar7 * 1000) / 3000;
      }
      else {
        ppuStack_44 = (undefined1 **)0x0;
        uVar9 = __allmul(iVar7,iVar7 >> 0x1f,1000);
        ppuStack_44 = (undefined1 **)0x0;
        iVar6 = __alldiv(uVar9,3000);
      }
      iVar6 = iVar6 + 1000;
      iVar8 = *(int *)(piVar1[0xe] + 0xb0);
      goto LAB_005c8cfd;
    }
  }
  goto LAB_005c8d32;
}

