// PHYSFS_seek @ 00b22360 body=[[00b22360, 00b2242a]]


/* WARNING: Removing unreachable block (ram,0x00b22398) */

undefined4 PHYSFS_seek(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  
                    /* 0x722360  49  PHYSFS_seek */
  if (*(char *)(param_1 + 1) == '\0') {
    iVar1 = param_1[7];
    if (iVar1 != param_1[6]) {
      lVar6 = (**(code **)(param_1[3] + 0x3c))(*param_1,param_1[4] + iVar1,param_1[6] - iVar1,1);
      if (lVar6 < 1) {
        return 0;
      }
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  if ((param_1[4] != 0) && (*(char *)(param_1 + 1) != '\0')) {
    uVar7 = PHYSFS_tell(param_1);
    uVar3 = param_2 - (uint)uVar7;
    iVar1 = (param_3 - (int)((ulonglong)uVar7 >> 0x20)) - (uint)(param_2 < (uint)uVar7);
    if (iVar1 < 0) {
      uVar4 = param_1[7];
      iVar1 = iVar1 + (uint)(uVar3 != 0);
      bVar5 = -iVar1 < 0;
      if ((iVar1 == 0 || bVar5) && ((bVar5 || (-uVar3 < uVar4 || -uVar4 == uVar3))))
      goto LAB_00b2241c;
    }
    else {
      uVar4 = param_1[7];
      if ((iVar1 < 0) || ((iVar1 < 1 && (uVar3 <= param_1[6] - uVar4)))) {
LAB_00b2241c:
        param_1[7] = uVar4 + uVar3;
        return 1;
      }
    }
  }
  param_1[7] = 0;
  param_1[6] = 0;
  uVar2 = (**(code **)(param_1[3] + 0x48))(*param_1,param_2,param_3);
  return uVar2;
}

