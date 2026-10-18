// FUN_00952fc0 @ 00952fc0 body=[[00952fc0, 0095317c] [00953180, 009531bc] [009531c0, 009532f9] [00953300, 00953465] [00953469, 0095347d]]


/* WARNING: Removing unreachable block (ram,0x009532f8) */
/* WARNING: Removing unreachable block (ram,0x00953300) */
/* WARNING: Removing unreachable block (ram,0x0095331f) */
/* WARNING: Removing unreachable block (ram,0x00953337) */
/* WARNING: Removing unreachable block (ram,0x0095334c) */
/* WARNING: Removing unreachable block (ram,0x00953352) */
/* WARNING: Removing unreachable block (ram,0x00953357) */
/* WARNING: Removing unreachable block (ram,0x0095335e) */
/* WARNING: Removing unreachable block (ram,0x00953362) */
/* WARNING: Removing unreachable block (ram,0x0095336b) */
/* WARNING: Removing unreachable block (ram,0x00953371) */
/* WARNING: Removing unreachable block (ram,0x00953376) */
/* WARNING: Removing unreachable block (ram,0x0095337d) */
/* WARNING: Removing unreachable block (ram,0x00953381) */
/* WARNING: Removing unreachable block (ram,0x0095338d) */
/* WARNING: Removing unreachable block (ram,0x00953393) */
/* WARNING: Removing unreachable block (ram,0x00953398) */
/* WARNING: Removing unreachable block (ram,0x0095339f) */
/* WARNING: Removing unreachable block (ram,0x009533a6) */
/* WARNING: Removing unreachable block (ram,0x009533ac) */
/* WARNING: Removing unreachable block (ram,0x009533b2) */
/* WARNING: Removing unreachable block (ram,0x009533b7) */
/* WARNING: Removing unreachable block (ram,0x009533be) */
/* WARNING: Removing unreachable block (ram,0x009533c2) */
/* WARNING: Removing unreachable block (ram,0x009533c5) */
/* WARNING: Removing unreachable block (ram,0x009533d2) */
/* WARNING: Removing unreachable block (ram,0x009533e8) */
/* WARNING: Removing unreachable block (ram,0x009533ef) */
/* WARNING: Removing unreachable block (ram,0x0095340c) */
/* WARNING: Removing unreachable block (ram,0x0095342a) */
/* WARNING: Removing unreachable block (ram,0x0095341a) */
/* WARNING: Removing unreachable block (ram,0x00953402) */
/* WARNING: Removing unreachable block (ram,0x00953460) */

int * FUN_00952fc0(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar8 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab358;
  local_10 = ExceptionList;
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0x1c) * 4) + 0xbe8) +
                           *(int *)(param_1 + 0x24) * 4) + 0x34);
  ExceptionList = &local_10;
  if (param_3 != (undefined1 *)0x0) {
    ExceptionList = &local_10;
    *param_3 = 1;
  }
  iVar3 = DAT_012586dc;
  iVar1 = *(int *)(param_1 + 0xc);
  for (piVar2 = *(int **)(iVar1 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x8a3) goto LAB_009532c1;
  }
  for (piVar2 = *(int **)(iVar1 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x8a7) {
LAB_009532c1:
      local_8 = 0;
      FUN_0094e4d0(param_1);
      *param_2 = 0;
      ExceptionList = local_10;
      return param_2;
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x8a1) {
      iVar8 = *(int *)(*(int *)(iVar8 + 4) + *(int *)(param_1 + 0x24) * 4);
      iVar8 = *(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) >> 2;
      if (iVar8 < 1) goto LAB_009532a5;
      iVar1 = *(int *)(iVar5 + 0x30);
      iVar3 = *(int *)(iVar5 + 0x2c);
      param_3 = (undefined1 *)0x0;
      local_24 = iVar8;
      goto LAB_00953160;
    }
  }
  iVar5 = *(int *)(iVar1 + 0x1d8);
  if (((iVar5 < 1) ||
      (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 4) + *(int *)(param_1 + 0x1c) * 4) +
                                 0xbe8) + *(int *)(param_1 + 0x24) * 4) + 0x34) == 0)) ||
     (FUN_00936a80(&param_1,param_1 + 0x18,param_1 + 0x20,
                   *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x55c) / 1000), param_1 < iVar5)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
LAB_009532a5:
    *param_2 = 0;
    ExceptionList = local_10;
    return param_2;
  }
  iVar5 = param_1 - iVar5;
  iVar8 = *(int *)(*(int *)(iVar3 + 0x30) + 0x560);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (iVar8 < iVar5) {
    iVar5 = iVar8;
  }
  if (iVar8 == 0) {
    iVar5 = -1;
    goto LAB_00953272;
  }
  goto LAB_00953222;
LAB_00953160:
  do {
    if (iVar3 == iVar1) {
LAB_009531a5:
      iVar6 = *(int *)(iVar5 + 0x40);
      iVar7 = *(int *)(iVar5 + 0x3c);
      if (iVar7 != iVar6) {
        do {
          if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x1c)) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar6);
        if ((iVar7 != iVar6) && (cVar4 = FUN_0042bb00(), cVar4 != '\0')) goto LAB_009531e2;
      }
    }
    else {
      iVar6 = iVar3;
      do {
        if (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0x1c)) break;
        iVar6 = iVar6 + 8;
      } while (iVar6 != iVar1);
      if ((iVar6 == iVar1) || (cVar4 = FUN_0042bb00(), cVar4 == '\0')) goto LAB_009531a5;
LAB_009531e2:
      param_3 = param_3 + 1;
    }
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  iVar8 = iVar8 * 1000;
  iVar5 = (int)param_3 * 1000;
  if (iVar8 == 0) {
    *param_2 = -1;
    ExceptionList = local_10;
    return param_2;
  }
LAB_00953222:
  if (iVar5 + 0x189373U < 0x39580e) {
    *param_2 = (iVar5 * 1000) / iVar8;
    ExceptionList = local_10;
    return param_2;
  }
  uVar9 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
  iVar5 = __alldiv(uVar9,iVar8,iVar8 >> 0x1f);
LAB_00953272:
  *param_2 = iVar5;
  ExceptionList = local_10;
  return param_2;
}

