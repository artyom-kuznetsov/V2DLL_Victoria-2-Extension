// FUN_00457980 @ 00457980 body=[[00457980, 004579b4] [004579b8, 004579d5] [004579d9, 00457a16]]


void FUN_00457980(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EDI;
  int local_24 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47000;
  local_10 = ExceptionList;
  piVar1 = (int *)(unaff_EDI + 8);
  ExceptionList = &local_10;
  if (piVar1 != local_24) {
    if (*piVar1 != 0) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    ExceptionList = &local_10;
    *piVar1 = 0;
    *(undefined4 *)(unaff_EDI + 0xc) = 0;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
  }
  piVar1 = (int *)(unaff_EDI + 0x18);
  if (piVar1 != local_24) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    *(undefined4 *)(unaff_EDI + 0x1c) = 0;
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
  }
  local_8 = 0xffffffff;
  FUN_004138b0((undefined4 *)(unaff_EDI + 0x28),local_14,*(undefined4 *)(unaff_EDI + 0x28),
               *(undefined4 *)(unaff_EDI + 0x2c));
  uVar2 = DAT_0125ac7c;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x38) = uVar2;
  ExceptionList = local_10;
  return;
}

