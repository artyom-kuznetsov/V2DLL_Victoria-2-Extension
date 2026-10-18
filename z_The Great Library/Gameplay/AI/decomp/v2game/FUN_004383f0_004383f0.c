// FUN_004383f0 @ 004383f0 body=[[004383f0, 0043843c] [00438440, 004384b6] [004384ba, 00438645]]


void FUN_004383f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 *unaff_EDI;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47bc3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004370a0(param_1);
  iVar6 = DAT_012588e8;
  iVar2 = unaff_EDI[8];
  puVar12 = (uint *)(iVar2 + 0x9d8);
  *unaff_EDI = CEducationSetting::vftable;
  piVar11 = (int *)*puVar12;
  iVar7 = DAT_0131bb34;
  do {
    if ((piVar11 < (int *)*puVar12) || (*(int **)(iVar2 + 0x9dc) <= piVar11)) {
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(*(int *)(iVar6 + 0xacc) + *piVar11 * 4);
    piVar11 = piVar11 + 1;
    if (iVar7 == 0) {
      iVar7 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0041a160();
      }
      iVar8 = DAT_0131bb34;
      local_8 = 1;
      if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar8);
      }
      local_8 = 0xffffffff;
      DAT_0131bb34 = iVar7;
    }
    local_1c = *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0xc) >> 2;
    if (0 < local_1c) {
      param_1 = 0;
      do {
        iVar7 = *(int *)(param_1 + *(int *)(iVar3 + 0x194));
        if (iVar7 != 0) {
          FUN_00401000(0x447a1fff);
          iVar8 = FUN_00b31c00();
          do {
            iVar4 = *(int *)(iVar7 + 0x27c);
            iVar5 = *(int *)(iVar7 + 0x68);
            lVar14 = 0;
            if (*(int *)(iVar5 + 0x368) == 0) {
              uVar9 = *(uint *)(iVar7 + 0x58);
              uVar13 = __alldiv(uVar9 << 0x1e,((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2,0xc3500000,0
                               );
              lVar14 = __allmul(uVar13,*(undefined4 *)(iVar5 + 0x370),*(undefined4 *)(iVar5 + 0x374)
                               );
              lVar14 = lVar14 >> 0xf;
            }
            if (*(int *)(iVar5 + 0x348) == 0) {
              uVar9 = *(uint *)(iVar7 + 0x58);
              uVar13 = __alldiv(uVar9 << 0x1e,((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2,0xc3500000,0
                               );
              lVar15 = __allmul(uVar13,*(undefined4 *)(iVar5 + 0x350),*(undefined4 *)(iVar5 + 0x354)
                               );
              lVar14 = (lVar15 >> 0xf) + lVar14;
            }
            uVar9 = *(int *)(*(int *)(unaff_EDI[8] + 0xa60) + *(int *)(iVar5 + 0x3bc) * 8) + iVar8;
            uVar13 = __alldiv(uVar9 * 0x40000000,((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2,0x1f40000
                              ,0);
            lVar14 = __allmul(uVar13,lVar14);
            uVar10 = (uint)(lVar14 >> 0xf);
            puVar1 = unaff_EDI + 0xc;
            uVar9 = *puVar1;
            *puVar1 = *puVar1 + uVar10;
            unaff_EDI[0xd] =
                 unaff_EDI[0xd] + (int)((ulonglong)(lVar14 >> 0xf) >> 0x20) +
                 (uint)CARRY4(uVar9,uVar10);
            iVar7 = iVar4;
          } while (iVar4 != 0);
        }
        param_1 = param_1 + 0x10;
        local_1c = local_1c + -1;
        iVar7 = DAT_0131bb34;
      } while (local_1c != 0);
    }
  } while( true );
}

