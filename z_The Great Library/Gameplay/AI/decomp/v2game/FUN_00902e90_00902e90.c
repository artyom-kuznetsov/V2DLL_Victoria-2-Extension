// FUN_00902e90 @ 00902e90 body=[[00902e90, 00902f04] [00902f08, 0090307c]]


/* WARNING: Removing unreachable block (ram,0x00902efb) */

uint FUN_00902e90(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  undefined8 uVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b93b03;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00ded94d,0);
  local_c = 0;
  uVar3 = FUN_00416db0();
  local_c = 0xffffffff;
  if ((char)uVar3 == '\0') {
    if (DAT_0125ce80 == 0) {
      iVar4 = FUN_00aae9af(0x3c);
      local_c = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004dada0();
      }
      local_c = 0xffffffff;
      FUN_004dc340(uVar5);
    }
    uVar6 = FUN_004dc420(in_ECX + 0x1c);
    if (uVar6 == 0) {
      uVar6 = FUN_004dacc0();
    }
    uVar3 = uVar6;
    if ((((uVar6 != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
        ((*(char *)(param_1 + 8) != 'R' ||
         ((*(char *)(param_1 + 9) != 'E' || (*(char *)(param_1 + 10) != 'B')))))) &&
       (uVar7 = FUN_004dd3a0(), iVar4 = (int)((ulonglong)uVar7 >> 0x20), uVar3 = (uint)uVar7,
       (char)uVar7 != '\0')) {
      iVar1 = *(int *)(DAT_012587e4 + 4);
      if (*(char *)(*(int *)(iVar1 + *(int *)(iVar4 + 0xc) * 4) + 0x12d0) != '\0') {
        uVar3 = *(uint *)(*(int *)(iVar1 + *(int *)(iVar4 + 0xc) * 4) + 0xbcc);
        if (((*(char *)(*(int *)(uVar6 + 0x58) + *(int *)(uVar3 + 0x2fc)) == '\0') &&
            (*(char *)(uVar6 + 0x130) == '\0')) ||
           ((*(char *)(uVar6 + 0x130) == '\0' &&
            (bVar2 = 0 < *(int *)(*(int *)(uVar3 + 8) + *(int *)(uVar6 + 0x58) * 4),
            uVar3 = CONCAT31((int3)((uint)*(int *)(uVar3 + 8) >> 8),bVar2), !bVar2))))
        goto LAB_00903067;
      }
      iVar4 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                               *(int *)(*(int *)(iVar1 + *(int *)(iVar4 + 0xc) * 4) + 0xbe4) * 4) +
                      0x188);
      if ((*(int *)(iVar4 + 0x84) < 1) && (*(int *)(iVar4 + 0x68) < 8)) {
        ExceptionList = local_14;
        return 1;
      }
      ExceptionList = local_14;
      return 0;
    }
  }
LAB_00903067:
  ExceptionList = local_14;
  return uVar3 & 0xffffff00;
}

