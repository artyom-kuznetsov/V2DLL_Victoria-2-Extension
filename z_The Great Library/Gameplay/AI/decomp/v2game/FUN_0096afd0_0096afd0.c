// FUN_0096afd0 @ 0096afd0 body=[[0096afd0, 0096b19e]]


/* WARNING: Removing unreachable block (ram,0x0096b0f7) */

void FUN_0096afd0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *unaff_EDI;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  uVar8 = *param_1;
  iVar10 = 0;
  ExceptionList = &local_10;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  lVar11 = __alldiv(uVar8 << 0x1e,uVar8 >> 2,0xc3500000,0);
  if (lVar11 != 0) {
    if (DAT_0131bb34 == 0) {
      iVar3 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0041a160();
      }
      local_8 = 0xffffffff;
      FUN_00423700(uVar4);
    }
    iVar3 = DAT_0131bb34;
    piVar9 = (int *)(DAT_0131bb34 + 0xc);
    iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < iVar5) {
      do {
        if (*(int *)(iVar3 + 0x10) - *piVar9 >> 2 < iVar10) {
          iVar6 = FUN_0096bb70();
        }
        else {
          iVar6 = *(int *)(*piVar9 + iVar10 * 4);
        }
        iVar1 = *(int *)(iVar6 + 0x48);
        iVar2 = *(int *)(iVar6 + 0x4c);
        if (iVar1 != 0 || iVar2 != 0) {
          uVar8 = *(uint *)(param_1[0x14] + iVar10 * 4);
          lVar12 = __alldiv(uVar8 << 0x1e,uVar8 >> 2,0xc3500000,0);
          lVar12 = __alldiv(lVar12 << 0xf,lVar11);
          lVar12 = __alldiv(lVar12 << 0xf,*(undefined4 *)(iVar6 + 0x68),
                            *(undefined4 *)(iVar6 + 0x6c));
          if (0x8000 < lVar12) {
            lVar12 = 0x8000;
          }
          lVar12 = __allmul(iVar1,iVar2,lVar12);
          uVar7 = (uint)(lVar12 >> 0xf);
          uVar8 = *unaff_EDI;
          *unaff_EDI = *unaff_EDI + uVar7;
          unaff_EDI[1] = unaff_EDI[1] + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) +
                         (uint)CARRY4(uVar8,uVar7);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
  }
  iVar10 = *(int *)(param_2 + 0x18);
  uVar8 = *(uint *)(iVar10 + 0x38);
  uVar13 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  uVar8 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + (uint)uVar13;
  iVar10 = *(int *)(iVar10 + 0x40);
  unaff_EDI[1] = unaff_EDI[1] + (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(uVar8,(uint)uVar13);
  uVar8 = iVar10 + 1000;
  uVar13 = __alldiv(iVar10 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  lVar11 = __allmul(*unaff_EDI,unaff_EDI[1],uVar13);
  *(longlong *)unaff_EDI = lVar11 >> 0xf;
  ExceptionList = local_10;
  return;
}

