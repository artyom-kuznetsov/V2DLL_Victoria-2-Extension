// FUN_007da5c0 @ 007da5c0 body=[[007da5c0, 007da654] [007da658, 007da6a4] [007da6a8, 007da6bc] [007da6c0, 007da6eb] [007da6ef, 007da715] [007da719, 007da73f] [007da743, 007da769] [007da76d, 007da793] [007da797, 007da7bd] [007da7c1, 007da7e7] [007da7eb, 007da80b] [007da80f, 007da826] [007da82a, 007da843]]


void FUN_007da5c0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ede8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CCounterType::vftable;
  local_8 = 8;
  piVar1 = (int *)in_ECX[0x26];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x26] = 0;
  }
  piVar1 = (int *)in_ECX[0x24];
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
  piVar1 = (int *)in_ECX[0x25];
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
  if (0xf < (uint)in_ECX[99]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5e]);
  }
  in_ECX[99] = 0xf;
  in_ECX[0x62] = 0;
  *(undefined1 *)(in_ECX + 0x5e) = 0;
  if (0xf < (uint)in_ECX[0x5c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x57]);
  }
  in_ECX[0x5c] = 0xf;
  in_ECX[0x5b] = 0;
  *(undefined1 *)(in_ECX + 0x57) = 0;
  if (0xf < (uint)in_ECX[0x55]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x50]);
  }
  in_ECX[0x55] = 0xf;
  in_ECX[0x54] = 0;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  if (0xf < (uint)in_ECX[0x4e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x49]);
  }
  in_ECX[0x4e] = 0xf;
  in_ECX[0x4d] = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  if (0xf < (uint)in_ECX[0x47]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x42]);
  }
  in_ECX[0x47] = 0xf;
  in_ECX[0x46] = 0;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  if (0xf < (uint)in_ECX[0x40]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3b]);
  }
  in_ECX[0x40] = 0xf;
  in_ECX[0x3f] = 0;
  *(undefined1 *)(in_ECX + 0x3b) = 0;
  if (0xf < (uint)in_ECX[0x39]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x34]);
  }
  in_ECX[0x39] = 0xf;
  in_ECX[0x38] = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  if (0xf < (uint)in_ECX[0x32]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2d]);
  }
  in_ECX[0x32] = 0xf;
  in_ECX[0x31] = 0;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
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

