// FUN_00406e40 @ 00406e40 body=[[00406e40, 00406e66] [00406e70, 00406eaf] [00406eb3, 00406ed8]]


int FUN_00406e40(void)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int unaff_EDI;
  undefined4 local_2c;
  uint local_18;
  int local_10;
  int local_c;
  
  bVar3 = false;
  local_c = 0;
  local_10 = 0;
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x44) - *(int *)(unaff_EDI + 0x40) & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 0x40) + local_10 * 4);
      if (*(char *)(iVar2 + 0x1c4) == '\0') {
LAB_00406e95:
        bVar1 = false;
      }
      else {
        iVar2 = FUN_00401580(iVar2);
        bVar3 = true;
        bVar1 = true;
        if (*(int *)(iVar2 + 0x10) == 0) goto LAB_00406e95;
      }
      if ((bVar3) && (bVar3 = false, 0xf < local_18)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c);
      }
      if (bVar1) {
        local_c = local_c + 1;
      }
      local_10 = local_10 + 1;
      iVar2 = local_c;
    } while (local_10 < *(int *)(unaff_EDI + 0x44) - *(int *)(unaff_EDI + 0x40) >> 2);
  }
  return iVar2;
}

