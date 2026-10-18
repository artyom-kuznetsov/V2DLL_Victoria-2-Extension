// FUN_006874c0 @ 006874c0  (requested 006874C0, first bytes: 55 8B EC 83 EC 18 53 33)


void FUN_006874c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
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
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[2];
  while( true ) {
    if (iVar2 < 1) {
      return;
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if ((char)piVar1[3] == '\0') {
        iVar3 = *(int *)(iVar2 + 0xc);
        *piVar1 = iVar3;
        if (iVar3 == 0) {
          piVar1[1] = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *(undefined1 *)(iVar2 + 0x10) = 1;
    }
    if (((*(int *)(iVar2 + 4) != 0) &&
        (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4),
        0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) &&
       (*(int *)(iVar2 + 0x208) != 0)) {
      FUN_0081e9e0();
    }
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar5 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    if ((float10)0.019999999552965164 < fVar5 - (float10)(double)fVar4) break;
    piVar1 = (int *)*param_1;
    iVar2 = piVar1[2];
  }
  return;
}

