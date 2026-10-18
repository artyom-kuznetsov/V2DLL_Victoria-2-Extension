// FUN_0085ee00 @ 0085ee00 body=[[0085ee00, 0085eedd] [0085eee0, 0085f397]]


/* WARNING: Removing unreachable block (ram,0x0085f0f4) */

int FUN_0085ee00(int param_1,char *param_2,uint param_3,uint param_4,char param_5,int param_6,
                int param_7)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_4c [28];
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_a;
  char local_9;
  
  pcVar1 = param_2;
  iVar6 = *(int *)(DAT_012587e4 + 4);
  local_1c = DAT_012588e8;
  local_10 = *(int *)(iVar6 + *(int *)(param_1 + 0xc) * 4);
  if (*(int *)(param_2 + 4) == 0) {
    return 0;
  }
  if (((*param_2 == 'R') && (param_2[1] == 'E')) && (param_2[2] == 'B')) {
    return 0;
  }
  if (*(int *)(param_2 + 4) == *(int *)(param_1 + 0xc)) {
    return 0;
  }
  local_30 = *(int **)param_2;
  local_18 = *(int *)(iVar6 + *(int *)(param_2 + 4) * 4);
  if ((int)(*(int *)(local_18 + 0x9dc) - *(int *)(local_18 + 0x9d8) & 0xfffffffcU) < 1) {
    return 0;
  }
  if (*(char *)(local_18 + 0x31) != '\0') {
    return 0;
  }
  if (*(char *)(local_10 + 0x31) == '\0') {
    return 0;
  }
  if (((*(char *)(local_18 + 0xcf5) != '\0') || (*(char *)(local_18 + 0xcf4) != '\0')) &&
     ((local_30 = *(int **)(local_18 + 0xcf8), *(int *)(local_18 + 0xcfc) != *(int *)(param_1 + 0xc)
      && (*(char *)(*(int *)(iVar6 + *(int *)(local_18 + 0xcfc) * 4) + 0x31) != '\0')))) {
    return 0;
  }
  local_9 = '\0';
  local_a = '\0';
  piVar3 = *(int **)(local_18 + 0x9d8);
  do {
    do {
      if ((piVar3 < *(int **)(local_18 + 0x9d8)) || (*(int **)(local_18 + 0x9dc) <= piVar3))
      goto LAB_0085f020;
      iVar6 = *(int *)(*(int *)(local_1c + 0xacc) + *piVar3 * 4);
      piVar3 = piVar3 + 1;
      local_30 = piVar3;
      if ((local_9 == '\0') && (((char)param_3 != '\0' && (cVar2 = FUN_0042bb00(), cVar2 != '\0'))))
      {
        local_9 = '\x01';
      }
    } while (((int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) < 0x744)
            || (*(char *)(*(int *)(iVar6 + 0x5c) + 0x1d) == '\0'));
    piVar3 = (int *)FUN_004fb6f0();
    iVar4 = *piVar3;
    local_14 = 0x4b;
    (**(code **)(**(int **)(iVar6 + 0x16c) + 0x2c))(local_4c);
    cVar2 = FUN_0040b360();
    FUN_00408ad0();
    if (cVar2 != '\0') {
      local_14 = 0;
    }
    (**(code **)(**(int **)(iVar6 + 0x16c) + 0x2c))(local_4c);
    cVar2 = FUN_0040b360();
    FUN_00408ad0();
    if (cVar2 != '\0') {
      local_14 = 0x32;
    }
    piVar3 = local_30;
  } while (local_14 < iVar4 / 1000);
  local_a = '\x01';
LAB_0085f020:
  iVar6 = local_18;
  if (local_9 != '\0') {
    if (*(int *)(local_10 + 0xe64) ==
        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 4) * 4) + 0xe64)) {
      return 400;
    }
    local_30 = (int *)*(undefined4 *)param_2;
    cVar2 = FUN_0042bb00();
    return (cVar2 != '\0') + 0x18e;
  }
  iVar4 = FUN_0085b8c0(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  iVar5 = FUN_0085b960(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (0x31 < iVar4 - iVar5) {
    return 0;
  }
  FUN_0047dec0();
  param_4 = 0;
  if ((-1 < param_7) && ((0 < param_7 || (param_6 != 0)))) {
    lVar8 = __alldiv(local_28 << 0xf,local_24 << 0xf | local_28 >> 0x11,param_6,param_7);
    if (0x8000 < lVar8) {
      lVar8 = 0x8000;
    }
    uVar9 = __allmul(lVar8,0x1f40000,0);
    param_4 = (uint)uVar9 >> 0x1e | (int)((ulonglong)uVar9 >> 0x20) << 2;
  }
  uVar7 = param_4;
  local_2c = (int)param_4 >> 0x1f;
  uVar9 = __allmul(param_4,local_2c,100000,0);
  iVar4 = __alldiv(uVar9,1000,0);
  local_14 = *(int *)(*(int *)(iVar6 + 0xa60) + 0x378);
  cVar2 = FUN_0042bb00();
  if (cVar2 == '\0') {
LAB_0085f17f:
    param_3 = param_3 & 0xffffff;
  }
  else {
    param_3 = CONCAT13(1,(undefined3)param_3);
    if (*(char *)(*(int *)(param_2 + 4) + *(int *)(local_10 + 0xd28)) == '\0') goto LAB_0085f17f;
  }
  local_28 = *(uint *)param_2;
  local_18 = *(int *)(DAT_012587e4 + 4);
  if (*(char *)(*(int *)(local_18 + *(int *)(param_2 + 4) * 4) + 0x12d0) == '\0') {
    FUN_00401000(0x43fa4001);
    iVar5 = FUN_00b31c00();
    if ((iVar5 < local_14) || (DAT_01318e80 < (int)param_4)) goto LAB_0085f1ce;
  }
  else {
LAB_0085f1ce:
    if ((param_3._3_1_ != '\0') ||
       (local_28 = *(uint *)param_2,
       *(int *)(*(int *)(*(int *)(local_18 + *(int *)(param_2 + 4) * 4) + 0xe64) + 0x50) ==
       *(int *)(*(int *)(local_10 + 0xe64) + 0x50))) {
      uVar9 = __allmul(uVar7,local_2c,200000,0);
      iVar5 = __alldiv(uVar9,1000,0);
      iVar4 = iVar4 + iVar5;
    }
  }
  param_2 = (char *)iVar4;
  if ((*(char *)(iVar6 + 0x12d0) == '\0') &&
     ((param_3._3_1_ != '\0' ||
      (local_30 = *(int **)pcVar1,
      *(int *)(*(int *)(*(int *)(local_18 + *(int *)(pcVar1 + 4) * 4) + 0xe64) + 0x50) ==
      *(int *)(*(int *)(local_10 + 0xe64) + 0x50))))) {
    uVar9 = __allmul(local_14,local_14 >> 0x1f,80000,0);
    iVar6 = __alldiv(uVar9,1000,0);
    param_2 = (char *)((int)param_2 + iVar6);
  }
  if (local_a != '\0') {
    param_2 = (char *)((int)param_2 + 200000);
  }
  piVar3 = *(int **)(local_1c + 0xbe0);
  iVar6 = *(int *)(local_1c + 0xbe4) - (int)piVar3 >> 2;
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      if ((*piVar3 != local_10) &&
         (*(int *)(*(int *)(*piVar3 + 0x13f0) + *(int *)(pcVar1 + 4) * 4) != 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (iVar4 != 0) {
      if (2 < iVar4) {
        param_2 = (char *)((int)param_2 + (iVar4 + -2) * -50000);
      }
      goto LAB_0085f2dd;
    }
  }
  param_2 = (char *)((int)param_2 + 50000);
LAB_0085f2dd:
  if (param_5 != '\0') {
    FUN_0092f630(*(undefined4 *)(*(int *)(local_10 + 0xbe8) + *(int *)(pcVar1 + 4) * 4),&param_3,
                 param_1 + 8,pcVar1);
    uVar7 = param_3;
    if ((int)param_3 < 1000) {
      uVar9 = __allmul(param_3,(int)param_3 >> 0x1f,param_3,(int)param_3 >> 0x1f);
      uVar7 = __alldiv(uVar9,1000,0);
    }
    __alldiv((longlong)(int)uVar7 * (longlong)(int)param_2,1000,0);
  }
  iVar6 = FUN_009311f0();
  if (1 < iVar6) {
    FUN_0085b960(*(undefined4 *)pcVar1,*(undefined4 *)(pcVar1 + 4));
  }
  iVar6 = FUN_009cd680();
  if (iVar6 < 1) {
    return 0;
  }
  if (0x18a < iVar6) {
    return 0x18a;
  }
  return iVar6;
}

