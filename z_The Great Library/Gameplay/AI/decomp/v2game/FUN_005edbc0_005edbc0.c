// FUN_005edbc0 @ 005edbc0 body=[[005edbc0, 005edbc9] [005edbd0, 005edbd8] [005edbe3, 005edc00]]


void FUN_005edbc0(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0xc));
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 8) = DAT_01259abc;
  return;
}

