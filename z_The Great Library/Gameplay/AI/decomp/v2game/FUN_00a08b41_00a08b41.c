// FUN_00a08b41 @ 00a08b41 body=[[00a08b41, 00a08cbb] [00a08cbf, 00a08ce4] [00a08ce8, 00a08d0d] [00a08d11, 00a08d36] [00a08d3a, 00a08d59] [00a08d5d, 00a08d79] [00a08d7d, 00a08d9c] [00a08da0, 00a08dbc] [00a08dc0, 00a08ddf] [00a08de3, 00a08e24]]


void FUN_00a08b41(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 local_1c [12];
  undefined4 uStack_10;
  
  *(int *)(unaff_EBP + -400) = unaff_EBX;
  *(int *)(unaff_EBP + -0x18c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x188) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  FUN_004134a0();
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  uVar4 = (undefined1)unaff_EBX;
  if ((*(int *)(unaff_EBP + -0x18c) - *(int *)(unaff_EBP + -400)) / 0x1c < 1) {
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_0040b3c0();
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -0x54) = uVar4;
    uStack_10 = 0xa096cd;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0xaa;
    iVar1 = FUN_009c1bd0();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(int *)(unaff_EBP + -0x44) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -0x54) = uVar4;
    iVar3 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xab;
    if (iVar3 != unaff_EBX) {
      uStack_10 = 0xa09722;
      FUN_00a09980();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
    if (0xf < *(uint *)(unaff_EBP + -0x1dc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iVar1 = FUN_00a727a0();
  *(undefined4 *)(unaff_EBP + -300) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(unaff_EBP + -100) = 0xf;
  *(int *)(unaff_EBP + -0x68) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x78) = uVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7a;
  uVar2 = FUN_009888f0();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x7b;
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x34) = uVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7c;
  FUN_009888f0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7d;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(int *)(unaff_EBP + -0x44) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x54) = uVar4;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  FUN_00988f20();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  uStack_10 = 0xa08ca3;
  FUN_00408ed0();
  if (0xf < *(uint *)(unaff_EBP + -0x84)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0xf;
  *(int *)(unaff_EBP + -0x88) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x98) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0xdc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0xdc) = 0xf;
  *(int *)(unaff_EBP + -0xe0) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0xf0) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x134)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x134) = 0xf;
  *(int *)(unaff_EBP + -0x138) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x148) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x1c0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x1c0) = 0xf;
  *(int *)(unaff_EBP + -0x1c4) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x1d4) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
  *(int *)(unaff_EBP + -0x44) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x54) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x1f8) = 0xf;
  *(int *)(unaff_EBP + -0x1fc) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x20c) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0xf;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x34) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -0xf8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0xf8) = 0xf;
  *(int *)(unaff_EBP + -0xfc) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x10c) = uVar4;
  if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  *(undefined1 **)(unaff_EBP + -0x14) = local_1c;
  local_1c[0] = uVar4;
  FUN_00408ed0(unaff_EBP + -0x1f0,unaff_EBX,0xffffffff);
  (**(code **)(**(int **)(unaff_EBP + -0x58) + 0x10))(unaff_EBP + -0x30);
  FUN_009fc110();
  *(undefined4 *)(unaff_EBP + -4) = 0x79;
  FUN_00a08e93();
  return;
}

