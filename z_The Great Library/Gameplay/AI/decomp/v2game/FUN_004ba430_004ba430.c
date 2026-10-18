// FUN_004ba430 @ 004ba430 body=[[004ba430, 004ba57c] [004ba580, 004ba77b]]


void FUN_004ba430(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  int local_298;
  undefined1 auStack_290 [636];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fd7b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (((((*(char *)(*(int *)(param_1 + 0x68) + 0x3d9) == '\0') &&
        (iVar9 = *(int *)(param_1 + 100), ExceptionList = &pvStack_14,
        *(char *)(iVar9 + 0x2a0) != '\0')) &&
       (ExceptionList = &pvStack_14, *(char *)(*(int *)(in_ECX + 0x188) + 0x80) != '\0')) &&
      ((ExceptionList = &pvStack_14, *(int *)(iVar9 + 0x1a8) != 0 &&
       (uVar4 = *(uint *)(iVar9 + 0x1b0), ExceptionList = &pvStack_14, 0 < (int)uVar4)))) &&
     (uVar1 = *(uint *)(iVar9 + 0x1ac), ExceptionList = &pvStack_14, 0 < (int)uVar1)) {
    uVar2 = *(uint *)(param_1 + 0x58);
    ExceptionList = &pvStack_14;
    uVar10 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,uVar1 << 0xf,
                      ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
    lVar11 = __allmul(uVar4 << 0xf,((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11,uVar10);
    uVar4 = (uint)(lVar11 >> 0xf) >> 0xf | (int)((ulonglong)(lVar11 >> 0xf) >> 0x20) << 0x11;
    if (0 < (int)uVar4) {
      if ((int)uVar4 < 0x19) {
        uVar4 = 0x19;
      }
      iVar9 = 0;
      if (DAT_0131bb34 == 0) {
        iVar5 = FUN_00aae9af(0x188);
        local_c = 0;
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0041a160();
        }
        local_c = 0xffffffff;
        FUN_00423700(uVar6);
      }
      iVar5 = DAT_0131bb34;
      if (DAT_01258724 == (int *)0x0) {
        iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        if (iVar8 < 1) goto LAB_004ba63e;
        do {
          if (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2 < iVar9) {
            iVar7 = FUN_0096bb70();
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + iVar9 * 4);
          }
          if (*(char *)(iVar7 + 0x3d9) != '\0') {
            if (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2 < iVar9) {
              DAT_01258724 = (int *)FUN_0096bb70();
            }
            else {
              DAT_01258724 = *(int **)(*(int *)(iVar5 + 0xc) + iVar9 * 4);
            }
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
        if (DAT_01258724 == (int *)0x0) goto LAB_004ba63e;
      }
      cVar3 = (**(code **)(*DAT_01258724 + 0x18))();
      if (cVar3 != '\0') {
        iVar9 = *(int *)(DAT_01258724[10] * 0x10 + *(int *)(*(int *)(param_1 + 100) + 0x194));
        while ((iVar9 != 0 && (0 < (int)uVar4))) {
          iVar5 = *(int *)(iVar9 + 0x27c);
          if (*(int *)(iVar9 + 0x58) < (int)uVar4) {
            iVar8 = uVar4 - *(int *)(iVar9 + 0x58);
            FUN_004ba430(iVar9,iVar8);
            uVar4 = uVar4 - iVar8;
            iVar9 = iVar5;
          }
          else {
            FUN_004ba430(iVar9,uVar4);
            uVar4 = 0;
            iVar9 = iVar5;
          }
        }
      }
    }
  }
LAB_004ba63e:
  iVar9 = *(int *)(in_ECX + 0x30c);
  iVar5 = (*(int *)(in_ECX + 0x310) - iVar9) / 0x278;
  local_298 = 0;
  if (0 < iVar5) {
    do {
      if (*(int *)(iVar9 + 0x58) == 0) {
        *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(param_1 + 0x68);
        if (*(int *)(iVar9 + 0x1d4) != 0) {
          FUN_00955d40();
          *(undefined4 *)(iVar9 + 0x1d4) = 0;
        }
        uVar6 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 300) * 4);
        goto LAB_004ba70f;
      }
      local_298 = local_298 + 1;
      iVar9 = iVar9 + 0x278;
    } while (local_298 < iVar5);
  }
  FUN_00954f40(auStack_290);
  local_c = 1;
  FUN_004beb50();
  local_c = 0xffffffff;
  FUN_00955ae0(auStack_290);
  iVar9 = ((*(int *)(in_ECX + 0x310) - *(int *)(in_ECX + 0x30c)) / 0x278) * 0x278 + -0x278 +
          *(int *)(in_ECX + 0x30c);
  uVar6 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 300) * 4);
LAB_004ba70f:
  FUN_005345a0(uVar6,iVar9,param_2,0);
  ExceptionList = pvStack_14;
  return;
}

