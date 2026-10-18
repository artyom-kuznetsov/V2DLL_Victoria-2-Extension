// FUN_008ebff0 @ 008ebff0 body=[[008ebff0, 008ec05c] [008ec060, 008ec0af]]


undefined4 FUN_008ebff0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if ((*(int *)(in_ECX + 0x1c) != 0) && (*(int *)(in_ECX + 0x1c) != DAT_012587f0 + 0x48)) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 < 1) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    if (0 < iVar2) {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x188);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x48);
        iVar4 = 0;
        if (0 < (int)(*(int *)(iVar2 + 0x4c) - iVar3 & 0xfffffffcU)) {
          do {
            iVar1 = *(int *)(in_ECX + 0x1c);
            iVar3 = FUN_004b9520(*(undefined4 *)
                                  (*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + iVar4 * 4) * 4)
                                );
            if (iVar3 == iVar1) {
              return 1;
            }
            iVar3 = *(int *)(iVar2 + 0x48);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar2 + 0x4c) - iVar3 >> 2);
          return 0;
        }
      }
    }
    return 0;
  }
  return 0;
}

