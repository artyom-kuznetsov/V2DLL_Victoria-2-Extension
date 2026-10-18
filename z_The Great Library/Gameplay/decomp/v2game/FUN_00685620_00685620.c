// FUN_00685620 @ 00685620  (requested 00685620, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_00685620(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  undefined4 uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b6f45e;
  local_14 = ExceptionList;
  if (*(char *)(unaff_EDI + 0xb20) != '\0') {
    ExceptionList = &local_14;
    if ((DAT_013f2aec & 1) == 0) {
      DAT_013f2aec = DAT_013f2aec | 1;
      local_c = 0;
      ExceptionList = &local_14;
      iVar3 = FUN_00475500();
      DAT_013f2ae8 = *(float *)(iVar3 + 0x178);
    }
    local_c = 0xffffffff;
    fVar1 = *(float *)(&DAT_00f0956c + *(int *)(unaff_EDI + 0xb28) * 4) * DAT_013f2ae8;
    fVar2 = DAT_012588f0 + 1.0;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar4 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    if ((float10)(fVar1 * fVar2) < fVar4 - (float10)*(double *)(unaff_EDI + 0xb18)) {
      uVar5 = 0;
      (**(code **)(**(int **)(unaff_EDI + 0xb24) + 0x100))(0);
      FUN_009df2b0(uVar5);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      fVar4 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
      *(double *)(unaff_EDI + 0xb18) = (double)fVar4;
    }
  }
  ExceptionList = local_14;
  return;
}

