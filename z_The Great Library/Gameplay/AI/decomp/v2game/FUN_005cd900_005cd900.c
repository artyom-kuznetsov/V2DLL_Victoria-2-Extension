// FUN_005cd900 @ 005cd900 body=[[005cd900, 005cdadc] [005cdae0, 005cdb59]]


void FUN_005cd900(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_24;
  uint uStack_20;
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b0d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 != 0) goto LAB_005cda10;
  iVar7 = *(int *)(param_1 + 0x74);
  iVar8 = 0;
  ExceptionList = &local_14;
  if (iVar7 != 0) {
    iVar1 = *(int *)(*(int *)(iVar7 + 0x10) + 0x38);
    iVar5 = *(int *)(*(int *)(iVar7 + 0x10) + 0x34);
    if (iVar5 == iVar1) {
LAB_005cd983:
      ExceptionList = &local_14;
      cVar4 = FUN_0042bb00();
      if (cVar4 == '\0') goto LAB_005cd9e0;
      iVar8 = FUN_005dc520();
    }
    else {
      do {
        if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0xc4)) break;
        iVar5 = iVar5 + 8;
      } while (iVar5 != iVar1);
      if (iVar5 == iVar1) goto LAB_005cd983;
      iVar8 = 0;
      for (piVar6 = *(int **)(*(int *)(iVar7 + 0x14) + 0x20); ExceptionList = &local_14,
          piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
        iVar8 = iVar8 + *(int *)(*piVar6 + 0x40);
      }
    }
    piVar6 = (int *)FUN_005dc710(&local_24);
    iVar7 = __alldiv((longlong)*piVar6 * (longlong)(iVar8 * 1000),1000,0);
    iVar8 = __alldiv((longlong)iVar7 * (longlong)DAT_0125fed8,1000,0);
  }
LAB_005cd9e0:
  if (iVar8 == 0) {
    ExceptionList = local_14;
    return;
  }
  uVar9 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
  param_2 = __alldiv(uVar9,4000,0);
  if (param_2 < 0) {
    param_2 = 0;
  }
LAB_005cda10:
  if (12000 < param_2) {
    param_2 = 12000;
  }
  iVar7 = FUN_009b7950(0,0);
  if (param_2 + 0x189373U < 0x39580e) {
    iVar8 = (param_2 * 1000) / 3000;
  }
  else {
    uVar9 = __allmul(param_2,param_2 >> 0x1f,1000,0);
    iVar8 = __alldiv(uVar9,3000,0);
  }
  iVar7 = __alldiv((longlong)(*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x48) + 0x40) + 1000) *
                   (longlong)(iVar8 + 1000 + (iVar7 % 6) * 1000),1000,0);
  local_24 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x24) * (longlong)iVar7,
                      1000,0);
  piVar6 = *(int **)(param_1 + 0x38);
joined_r0x005cdad4:
  if (piVar6 == (int *)0x0) {
    ExceptionList = local_14;
    return;
  }
  piVar2 = (int *)*piVar6;
  piVar6 = (int *)piVar6[2];
  cVar4 = (**(code **)(*piVar2 + 0x28))();
  if (cVar4 != '\0') goto code_r0x005cdaf2;
  goto LAB_005cdb33;
code_r0x005cdaf2:
  uVar3 = piVar2[0x1f];
  if ((uVar3 != 0) || (piVar2[0x20] != 0)) {
    iStack_1c = piVar2[0x20];
    iVar7 = DAT_01258a94;
    if (uVar3 < 0x1269) {
      iVar7 = DAT_01258a98;
    }
    uStack_20 = uVar3;
    if ((iVar7 != 0) && (iVar7 = FUN_009c1d40(), iVar7 != 0)) {
LAB_005cdb33:
      piVar2[0xd] = piVar2[0xd] + local_24;
      if (100000 < piVar2[0xd]) {
        piVar2[0xd] = 100000;
      }
    }
  }
  goto joined_r0x005cdad4;
}

