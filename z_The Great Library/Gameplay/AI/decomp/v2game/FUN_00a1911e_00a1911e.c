// FUN_00a1911e @ 00a1911e body=[[00a1911e, 00a191a0] [00a191a4, 00a191c2] [00a191c6, 00a191df] [00a191e3, 00a191f9] [00a191fd, 00a1924a] [00a1924e, 00a19256]]


void FUN_00a1911e(void)

{
  undefined1 uVar1;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 local_1c [12];
  undefined4 uStack_10;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  uVar1 = (undefined1)unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x30) = uVar1;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(int *)(unaff_EBP + -0x3c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x4c) = uVar1;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_10 = 0xa19192;
  FUN_00408ed0();
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(int *)(unaff_EBP + -0x60) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x70) = uVar1;
  if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
  *(int *)(unaff_EBP + -0x80) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x90) = uVar1;
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(int *)(unaff_EBP + -0x3c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x4c) = uVar1;
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined1 **)(unaff_EBP + -0x74) = local_1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  local_1c[0] = uVar1;
  FUN_00408ed0(unaff_EBP + -0xe0,unaff_EBX,0xffffffff);
  (**(code **)(**(int **)(unaff_EBP + -0x50) + 0x10))(unaff_EBP + -0x2c);
  if (*(int *)(unaff_EBP + -0x24) != unaff_EBX) {
    FUN_00463b30(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00a192cb();
  return;
}

