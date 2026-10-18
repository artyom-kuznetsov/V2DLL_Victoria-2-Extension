// FUN_00825ec0 @ 00825ec0 body=[[00825ec0, 00825f48] [00825f52, 00825f6a] [00825f74, 00825f96] [00825f9a, 00825fb7]]


void FUN_00825ec0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eafe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CAIAgent::vftable;
  local_8 = 2;
  FUN_008601b0(in_ECX + 0x11);
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0x7b4);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(undefined4 **)(iVar2 + 0x144) == in_ECX) {
      *(undefined4 *)(iVar2 + 0x144) = 0;
    }
  }
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if ((uint)in_ECX[10] < 0x10) {
    in_ECX[9] = 0;
    in_ECX[10] = 0xf;
    *(undefined1 *)(in_ECX + 5) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[5]);
}

