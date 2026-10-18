// FUN_00593ca0 @ 00593ca0  (requested 00593CA0, first bytes: 55 8B EC 83 EC 0C 8B 45)


int * FUN_00593ca0(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x34);
  *param_2 = 0;
  bVar1 = false;
  while ((*(uint *)(param_1 + 0x34) <= uVar5 && (uVar5 < *(uint *)(param_1 + 0x38)))) {
    if (param_4 == 1) {
      iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xf4);
    }
    else {
      iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xf8);
    }
    iVar2 = __alldiv((longlong)(iVar4 + 1000) * (longlong)param_3,1000,0);
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar5 + 4) * 4);
    iVar3 = iVar2;
    if (0 < iVar2) {
      iVar3 = __alldiv((longlong)(*(int *)(*(int *)(iVar4 + 0xbcc) + 0x288) + 1000) *
                       (longlong)iVar2,1000,0);
    }
    *(int *)(iVar4 + 0xea0) = *(int *)(iVar4 + 0xea0) + iVar3;
    if (*(int *)(iVar4 + 0xea0) < 0) {
      *(undefined4 *)(iVar4 + 0xea0) = 0;
    }
    if (!bVar1) {
      *param_2 = iVar2;
    }
    bVar1 = true;
    uVar5 = uVar5 + 8;
  }
  iVar4 = FUN_00595b90();
  if (iVar4 != 0) {
    if (param_3 + 0x189373U < 0x39580e) {
      iVar3 = (param_3 * 1000) / 100000;
    }
    else {
      uVar6 = __allmul(param_3,param_3 >> 0x1f,1000,0);
      iVar3 = __alldiv(uVar6,100000,0);
    }
    FUN_005b66b0(iVar3 + *(int *)(iVar4 + 0xd8));
  }
  return param_2;
}

