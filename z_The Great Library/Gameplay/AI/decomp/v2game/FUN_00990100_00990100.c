// FUN_00990100 @ 00990100 body=[[00990100, 009901a3]]


void FUN_00990100(void)

{
  int *piVar1;
  int unaff_EDI;
  
  if (DAT_01258a64 == '\0') {
    DAT_01258a60 = 0;
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af();
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    piVar1 = DAT_00f20c18;
    FUN_00409350("CLAUSEWITZ_LEXER_MUTEX",0x16);
    piVar1 = (int *)(**(code **)(*piVar1 + 0x3c))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    FUN_009901b0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))();
      (**(code **)*piVar1)(1);
    }
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined1 *)(unaff_EDI + 0x10) = 0;
  return;
}

