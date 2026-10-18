// FUN_004b5730 @ 004b5730 body=[[004b5730, 004b58d6] [004b58e0, 004b5a80]]


void FUN_004b5730(int param_1,char *param_2,undefined4 *param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba1ff0;
  local_14 = ExceptionList;
  local_24 = *(int *)(param_1 + 0x134);
  if (*(int *)(param_2 + 4) == local_24) {
    return;
  }
  if (((*(int *)(param_1 + 300) == 0) && (*(int *)(param_2 + 4) != 0)) &&
     (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
    return;
  }
  if ((*(int *)(param_1 + 0x110) == 0) ||
     (iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x10),
     (int)(*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x34) & 0xfffffff8U) < 1)) {
    puVar6 = (undefined4 *)(param_1 + 0x130);
  }
  else {
    puVar6 = *(undefined4 **)(iVar5 + 0x34);
  }
  local_20 = *puVar6;
  local_1c = puVar6[1];
  ExceptionList = &local_14;
  if (param_4 != '\0') {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x358) = *param_3;
  }
  local_28 = *(undefined4 *)(param_1 + 0x130);
  if (local_24 != 0) {
    for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_24 * 4) + 0x9e8);
        (piVar2 != (int *)0x0 && (*piVar2 != *(int *)(param_1 + 0x58))); piVar2 = (int *)piVar2[2])
    {
    }
    FUN_005f2ae0(piVar2);
    if ((((*(char *)(param_1 + 0x130) == 'R') && (*(char *)(param_1 + 0x131) == 'E')) &&
        (*(char *)(param_1 + 0x132) == 'B')) && (iVar5 = FUN_0068bb30(param_1), iVar5 != 0)) {
      FUN_004e5970();
    }
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)param_2;
  iVar5 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0x134) = iVar5;
  if ((((iVar5 == 0) ||
       (FUN_0050e250(*(undefined4 *)(param_1 + 0x58)), *(char *)(param_1 + 0x130) != 'R')) ||
      ((*(char *)(param_1 + 0x131) != 'E' || (*(char *)(param_1 + 0x132) != 'B')))) ||
     ((((char)local_28 == 'R' && ((char)((uint)local_28 >> 8) == 'E')) && (local_28._2_1_ == 'B'))))
  {
LAB_004b593a:
    if (*(int *)(param_1 + 300) != 0) goto LAB_004b596a;
  }
  else if (*(int *)(param_1 + 300) != 0) {
    piVar2 = *(int **)(param_1 + 0xec);
    do {
      if (piVar2 == (int *)0x0) goto LAB_004b593a;
      iVar5 = *piVar2;
      piVar2 = (int *)piVar2[2];
    } while ((((*(char *)(iVar5 + 0xc0) != 'R') || (*(char *)(iVar5 + 0xc1) != 'E')) ||
             (*(char *)(iVar5 + 0xc2) != 'B')) ||
            ((iVar5 = FUN_0068bae0(), iVar5 == 0 || (cVar4 = FUN_0048fee0(), cVar4 != '\0'))));
    FUN_004e5210(*(undefined4 *)(param_1 + 0x58));
    goto LAB_004b593a;
  }
  if ((*(int *)(param_2 + 4) != 0) &&
     (((*param_2 != 'R' || (param_2[1] != 'E')) || (param_2[2] != 'B')))) {
    FUN_004b52e0(param_2,param_3,0,0);
  }
LAB_004b596a:
  FUN_004b7c50();
  if ((*(int *)(param_1 + 0x110) == 0) ||
     (iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x10),
     (int)(*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x34) & 0xfffffff8U) < 1)) {
    puVar6 = (undefined4 *)(param_1 + 0x130);
  }
  else {
    puVar6 = *(undefined4 **)(iVar5 + 0x34);
  }
  FUN_0048ea60(param_1,*puVar6,puVar6[1],local_20,local_1c);
  if ((local_24 != *(int *)(param_1 + 0x134)) && (*(int *)(param_1 + 0x54) != 0)) {
    if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
      uVar3 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
      uVar7 = FUN_00468c50(*(undefined4 *)(DAT_012586f4 + 8),&local_28);
      FUN_00457b00(uVar3,uVar7);
    }
    FUN_00648040(*(undefined4 *)(param_1 + 0x58));
    iVar5 = DAT_012588e8;
    puVar1 = (uint *)(*(int *)(param_1 + 0x54) + 0x74);
    *puVar1 = *puVar1 | 0x100;
    if ((*(int *)(iVar5 + 0xbc0) - *(int *)(iVar5 + 0xbbc) & 0xfffffffcU) == 0) {
      FUN_004e9b90();
    }
    else {
      **(undefined4 **)(iVar5 + 0xbbc) = 0xffffffff;
    }
  }
  FUN_0085a000(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_24 * 4));
  ExceptionList = local_14;
  return;
}

