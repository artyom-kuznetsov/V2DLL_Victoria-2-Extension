// FUN_0055f740 @ 0055f740 body=[[0055f740, 0055f7b5]]


void FUN_0055f740(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EDI;
  undefined1 local_10 [12];
  
  if (0 < (int)(*(int *)(unaff_EDI + 0x20) - *(int *)(unaff_EDI + 0x1c) & 0xfffffffcU)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(unaff_EDI + 0x1c);
      iVar2 = *(int *)(iVar1 + iVar5 * 4);
      if (*(int *)(iVar2 + 0xa8) == 3) {
        piVar3 = (int *)(iVar2 + 0x98);
        if (0xf < *(uint *)(iVar2 + 0xac)) {
          piVar3 = (int *)*piVar3;
        }
        puVar4 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,piVar3);
        iVar1 = *(int *)(iVar1 + iVar5 * 4);
        *(undefined4 *)(iVar1 + 0x1c) = *puVar4;
        *(undefined4 *)(iVar1 + 0x20) = puVar4[1];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_EDI + 0x20) - *(int *)(unaff_EDI + 0x1c) >> 2);
  }
  return;
}

