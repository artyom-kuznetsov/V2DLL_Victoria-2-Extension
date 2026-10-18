// FUN_004cfd20 @ 004cfd20 body=[[004cfd20, 004cfd8c] [004cfd90, 004cfe11]]


void FUN_004cfd20(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int local_8;
  
  iVar4 = DAT_012588e8;
  local_8 = 0;
  do {
    iVar1 = *(int *)(unaff_EDI + 0x60);
    while (iVar3 = iVar1, iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x224);
      *(int *)(iVar3 + 0x1c) = unaff_EDI;
      *(int *)(iVar3 + 0xe8) = unaff_EDI;
      if (local_8 == 1) {
        uVar2 = *(uint *)(iVar3 + 0x20);
        FUN_004ee990(iVar3 + 0xe0,*(undefined4 *)(*(int *)(iVar3 + 0x18) + 300),uVar2 << 0xf,
                     ((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11);
      }
    }
    piVar5 = *(int **)(unaff_EDI + 0x48);
    while ((*(int **)(unaff_EDI + 0x48) <= piVar5 && (piVar5 < *(int **)(unaff_EDI + 0x4c)))) {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      *(int *)(*(int *)(*(int *)(iVar4 + 0xacc) + iVar1 * 4) + 0x188) = unaff_EDI;
      if (local_8 == 1) {
        if (DAT_01258728 == (undefined4 *)0x0) {
          DAT_01258728 = (undefined4 *)FUN_00aae9af(0x14);
          if (DAT_01258728 == (undefined4 *)0x0) {
            DAT_01258728 = (undefined4 *)0x0;
          }
          else {
            *DAT_01258728 = 0;
            DAT_01258728[1] = 0;
            DAT_01258728[2] = 0;
            *(undefined1 *)(DAT_01258728 + 4) = 0;
          }
        }
        FUN_004c2520();
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  return;
}

