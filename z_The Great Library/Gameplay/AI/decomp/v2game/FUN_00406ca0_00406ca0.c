// FUN_00406ca0 @ 00406ca0 body=[[00406ca0, 00406d02] [00406d06, 00406d30]]


undefined4 FUN_00406ca0(void)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int unaff_EDI;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_c;
  
  bVar3 = false;
  local_c = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x44) - *(int *)(unaff_EDI + 0x40) & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 0x40) + local_c * 4);
      if (*(char *)(iVar2 + 0x1c4) == '\0') {
LAB_00406ce8:
        bVar1 = false;
      }
      else {
        iVar2 = FUN_00401580(iVar2);
        bVar3 = true;
        bVar1 = true;
        if (*(int *)(iVar2 + 0x10) == 0) goto LAB_00406ce8;
      }
      if ((bVar3) && (bVar3 = false, 0xf < local_14)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_28);
      }
      if (bVar1) {
        return *(undefined4 *)(*(int *)(unaff_EDI + 0x40) + local_c * 4);
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(unaff_EDI + 0x44) - *(int *)(unaff_EDI + 0x40) >> 2);
  }
  return 0;
}

