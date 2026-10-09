// FUN_0059ca40 @ 0059ca40

undefined4 FUN_0059ca40(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined8 uVar7;
  undefined1 **ppuStack_48;
  undefined1 **ppuStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 *puStack_2c;
  void *pvStack_28;
  void *pvStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9ffb0;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX[4] + 0x28) == 0) {
    return 1;
  }
  if (*(int *)(in_ECX[5] + 0x28) == 0) {
    return 1;
  }
  iStack_40 = 0x59ca83;
  ExceptionList = &local_14;
  FUN_0059c3d0();
  in_ECX[8] = in_ECX[8] + 1;
  if (in_ECX[7] == -1) {
    iVar3 = in_ECX[4];
    iStack_3c = 0;
    iStack_40 = 5;
    ppuStack_44 = (undefined1 **)0x59ca97;
    FUN_009b7950();
    iStack_3c = 0x59ca9d;
    FUN_00c8911d();
    iStack_3c = 0;
    iStack_40 = 5;
    *(undefined4 *)(iVar3 + 0x30) = extraout_EDX;
    iVar3 = in_ECX[5];
    ppuStack_44 = (undefined1 **)0x59caad;
    FUN_009b7950();
    iStack_3c = 0x59cab3;
    FUN_00c8911d();
    *(undefined4 *)(iVar3 + 0x30) = extraout_EDX_00;
    iStack_3c = 0x59cac1;
    iVar3 = (**(code **)(*in_ECX + 0x24))();
    if (iVar3 == 1) {
      iStack_3c = in_ECX[5];
      pvStack_28 = (void *)in_ECX[4];
      iStack_40 = 0x59cad6;
      FUN_0059b190();
      iStack_3c = in_ECX[4];
      iStack_40 = 0x59cae1;
      FUN_0059b190();
      iStack_3c = 0x59caea;
      FUN_0059b150();
      iStack_3c = 0x59caf1;
      FUN_0059b150();
    }
    iStack_3c = 0;
    iStack_40 = 10;
    ppuStack_44 = (undefined1 **)0x59caff;
    cVar2 = (**(code **)(*in_ECX + 0x30))();
    if (cVar2 != '\0') {
      ExceptionList = local_14;
      return 1;
    }
    in_ECX[7] = 0;
  }
  if (4 < in_ECX[7]) {
    iVar3 = in_ECX[4];
    iStack_3c = 0;
    iStack_40 = 5;
    ppuStack_44 = (undefined1 **)0x59cb1b;
    FUN_009b7950();
    iStack_3c = 0x59cb21;
    FUN_00c8911d();
    iStack_3c = 0;
    iStack_40 = 5;
    *(undefined4 *)(iVar3 + 0x30) = extraout_EDX_01;
    iVar3 = in_ECX[5];
    ppuStack_44 = (undefined1 **)0x59cb31;
    FUN_009b7950();
    iStack_3c = 0x59cb37;
    FUN_00c8911d();
    *(undefined4 *)(iVar3 + 0x30) = extraout_EDX_02;
    in_ECX[7] = 0;
    if ((2 < in_ECX[8]) && (*(int *)(in_ECX[5] + 0x30) < *(int *)(in_ECX[4] + 0x30))) {
      piVar6 = *(int **)(in_ECX[5] + 0x20);
      while (piVar6 != (int *)0x0) {
        iVar3 = *piVar6;
        piVar6 = (int *)piVar6[2];
        *(int *)(iVar3 + 0x184) = *(int *)(iVar3 + 0x184) + -1000;
        if (*(int *)(iVar3 + 0x184) < 0) {
          *(undefined4 *)(iVar3 + 0x184) = 0;
        }
      }
    }
  }
  iStack_3c = in_ECX[5];
  iStack_40 = in_ECX[4];
  ppuStack_44 = (undefined1 **)0x59cb8a;
  FUN_00594800();
  iStack_3c = in_ECX[4];
  iStack_40 = in_ECX[5];
  ppuStack_44 = (undefined1 **)0x59cb97;
  FUN_00594800();
  iStack_3c = in_ECX[5];
  iStack_40 = 0x59cba5;
  (**(code **)(*(int *)in_ECX[4] + 0x38))();
  iStack_40 = in_ECX[4];
  ppuStack_44 = (undefined1 **)0x59cbb3;
  (**(code **)(*(int *)in_ECX[5] + 0x38))();
  ppuStack_44 = (undefined1 **)&stack0xffffffd0;
  ppuStack_48 = (undefined1 **)0x59cbc0;
  FUN_00595db0();
  ppuStack_44 = &puStack_2c;
  ppuStack_48 = (undefined1 **)0x59cbcd;
  FUN_00595db0();
  ppuStack_44 = (undefined1 **)0x59cbdc;
  iVar3 = (**(code **)(*in_ECX + 0x24))();
  ppuStack_44 = (undefined1 **)(uint)(iVar3 == 2);
  ppuStack_48 = (undefined1 **)0x59cbeb;
  FUN_005dc460();
  ppuStack_44 = (undefined1 **)0x59cbfa;
  iVar3 = (**(code **)(*in_ECX + 0x24))();
  ppuStack_44 = (undefined1 **)(uint)(iVar3 == 2);
  ppuStack_48 = (undefined1 **)0x59cc09;
  FUN_005dc460();
  iVar3 = in_ECX[4];
  ppuStack_44 = &pvStack_28;
  ppuStack_48 = (undefined1 **)0x59cc1d;
  iVar4 = (**(code **)(*param_1 + 0x58))();
  iVar5 = *(int *)(iVar3 + 0x38);
  iVar3 = *(int *)(iVar3 + 0x34);
  if (iVar3 == iVar5) {
LAB_0059cc40:
    ppuStack_48 = &puStack_2c;
    (**(code **)(*param_1 + 0x58))();
    ppuStack_48 = (undefined1 **)0x59cc5b;
    cVar2 = FUN_0042bb00();
    if (cVar2 != '\0') goto LAB_0059cc5f;
  }
  else {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(iVar4 + 4)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar5);
    if (iVar3 == iVar5) goto LAB_0059cc40;
LAB_0059cc5f:
    iVar3 = *(int *)(in_ECX[6] + 0x58);
    ppuStack_48 = (undefined1 **)0x59cc6e;
    iVar5 = (**(code **)(*param_1 + 0x38))();
    uVar1 = *(undefined4 *)(*(int *)(iVar5 + 0x20d8) + iVar3 * 4);
    puStack_2c = (undefined1 *)&ppuStack_48;
    FUN_00595820(in_ECX[4],uVar1);
    puStack_2c = (undefined1 *)&ppuStack_48;
    FUN_00595820(in_ECX[5],uVar1);
  }
  ppuStack_48 = (undefined1 **)0x59ccb3;
  cVar2 = (**(code **)(*(int *)in_ECX[4] + 0x3c))();
  if (cVar2 == '\0') {
    ppuStack_48 = (undefined1 **)0x59cdee;
    cVar2 = (**(code **)(*(int *)in_ECX[5] + 0x3c))();
    if (cVar2 == '\0') {
      ppuStack_48 = (undefined1 **)0x59cf34;
      cVar2 = (**(code **)(*in_ECX + 0x2c))();
      if ((cVar2 == '\0') && (iVar3 = (**(code **)(*in_ECX + 0x24))(), iVar3 == 1)) {
        (**(code **)(*in_ECX + 0x30))(2,1);
      }
      in_ECX[7] = in_ECX[7] + 1;
      ExceptionList = pvStack_24;
      return 0;
    }
    ppuStack_48 = &puStack_2c;
    FUN_005dc0e0(in_ECX[4] + 0x20);
    ppuStack_48 = &puStack_2c;
    FUN_005dc0e0(in_ECX[5] + 0x20);
    ppuStack_48 = (undefined1 **)0x59ce21;
    iVar3 = (**(code **)(*in_ECX + 0x24))();
    if (iVar3 == 2) {
      ppuStack_48 = (undefined1 **)0x0;
      cVar2 = (**(code **)(*(int *)in_ECX[5] + 0x20))();
      if (cVar2 != '\0') goto LAB_0059cec2;
    }
    ppuStack_48 = &puStack_2c;
    piVar6 = (int *)FUN_005dc0e0(in_ECX[4] + 0x20);
    iVar3 = *piVar6;
    ppuStack_48 = &puStack_2c;
    piVar6 = (int *)FUN_005dc0e0(in_ECX[5] + 0x20);
    iVar5 = *piVar6;
    if (iVar3 + 0x189373U < 0x39580e) {
      iVar3 = (iVar3 * 1000) / 10000;
    }
    else {
      ppuStack_48 = (undefined1 **)0x0;
      uVar7 = __allmul(iVar3,iVar3 >> 0x1f,1000);
      ppuStack_48 = (undefined1 **)0x0;
      iVar3 = __alldiv(uVar7,10000);
    }
    if (iVar3 <= iVar5) {
LAB_0059cec2:
      ppuStack_48 = (undefined1 **)0x59cecb;
      iVar3 = (**(code **)(*in_ECX + 0x24))();
      if (iVar3 == 2) {
        piVar6 = (int *)in_ECX[5];
        ppuStack_48 = (undefined1 **)0x0;
        cVar2 = (**(code **)(*piVar6 + 0x20))();
        if (cVar2 == '\0') {
          ppuStack_48 = (undefined1 **)0x0;
          cVar2 = (**(code **)(*piVar6 + 0x1c))();
          if (cVar2 != '\0') {
            ExceptionList = pvStack_24;
            return 0;
          }
          (**(code **)(*piVar6 + 0x18))(0);
          ExceptionList = pvStack_28;
          return 0;
        }
      }
      ppuStack_48 = (undefined1 **)0x0;
      FUN_005a0180();
      (**(code **)(*(int *)in_ECX[5] + 0x44))();
      ExceptionList = local_14;
      return 1;
    }
    ppuStack_48 = (undefined1 **)in_ECX[5];
    FUN_00595660();
    ppuStack_48 = (undefined1 **)0x0;
    FUN_005a0180();
LAB_0059cd61:
    iStack_3c = 0x59cd66;
    FUN_00595760();
  }
  else {
    ppuStack_48 = (undefined1 **)0x59ccc4;
    iVar3 = (**(code **)(*in_ECX + 0x24))();
    if (iVar3 == 2) {
      ppuStack_48 = (undefined1 **)0x0;
      cVar2 = (**(code **)(*(int *)in_ECX[4] + 0x20))();
      if (cVar2 == '\0') goto LAB_0059ccdd;
    }
    else {
LAB_0059ccdd:
      ppuStack_48 = &puStack_2c;
      piVar6 = (int *)FUN_005dc0e0(in_ECX[4] + 0x20);
      iVar3 = *piVar6;
      ppuStack_48 = &puStack_2c;
      piVar6 = (int *)FUN_005dc0e0(in_ECX[5] + 0x20);
      iVar5 = *piVar6;
      if (iVar5 + 0x189373U < 0x39580e) {
        iVar5 = (iVar5 * 1000) / 10000;
      }
      else {
        ppuStack_48 = (undefined1 **)0x0;
        uVar7 = __allmul(iVar5,iVar5 >> 0x1f,1000);
        ppuStack_48 = (undefined1 **)0x0;
        iVar5 = __alldiv(uVar7,10000);
      }
      if (iVar3 < iVar5) {
        ppuStack_48 = (undefined1 **)in_ECX[4];
        FUN_00595660();
        ppuStack_48 = (undefined1 **)0x1;
        FUN_005a0180();
        goto LAB_0059cd61;
      }
    }
    ppuStack_48 = (undefined1 **)0x59cd85;
    iVar3 = (**(code **)(*in_ECX + 0x24))();
    if (iVar3 == 2) {
      piVar6 = (int *)in_ECX[4];
      ppuStack_48 = (undefined1 **)0x0;
      cVar2 = (**(code **)(*piVar6 + 0x20))();
      if (cVar2 == '\0') {
        ppuStack_48 = (undefined1 **)0x0;
        cVar2 = (**(code **)(*piVar6 + 0x1c))();
        if (cVar2 != '\0') {
          ExceptionList = pvStack_24;
          return 0;
        }
        (**(code **)(*piVar6 + 0x18))(0);
        ExceptionList = pvStack_28;
        return 0;
      }
    }
    ppuStack_48 = (undefined1 **)0x1;
    FUN_005a0180();
    (**(code **)(*(int *)in_ECX[4] + 0x44))();
  }
  ExceptionList = local_14;
  return 1;
}


