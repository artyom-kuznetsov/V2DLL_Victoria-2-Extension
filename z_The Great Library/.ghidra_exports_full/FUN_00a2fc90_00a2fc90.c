// FUN_00a2fc90 @ 00a2fc90 body=[[00a2fc90, 00a2fd24] [00a2fd28, 00a2fd3c] [00a2fd40, 00a2fd6b] [00a2fd6f, 00a2fd95] [00a2fd99, 00a2fdbf] [00a2fdc3, 00a2fde3] [00a2fde7, 00a2fdfe] [00a2fe02, 00a2fe1b]]


void FUN_00a2fc90(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3db50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e40140;
  local_8 = 4;
  piVar1 = (int *)in_ECX[0x24];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x24] = 0;
  }
  piVar1 = (int *)in_ECX[0x3f];
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  if (0xf < (uint)in_ECX[0x4a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x45]);
  }
  in_ECX[0x4a] = 0xf;
  in_ECX[0x49] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  if (0xf < (uint)in_ECX[0x3a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x35]);
  }
  in_ECX[0x3a] = 0xf;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x35) = 0;
  if (0xf < (uint)in_ECX[0x33]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2e]);
  }
  in_ECX[0x33] = 0xf;
  in_ECX[0x32] = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
  if (0xf < (uint)in_ECX[0x2c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x27]);
  }
  in_ECX[0x2c] = 0xf;
  in_ECX[0x2b] = 0;
  *(undefined1 *)(in_ECX + 0x27) = 0;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

