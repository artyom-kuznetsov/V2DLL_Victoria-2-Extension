// FUN_0060b2c0 @ 0060b2c0 body=[[0060b2c0, 0060b4ff] [0060b503, 0060b51f] [0060b523, 0060b53d] [0060b541, 0060b55f] [0060b563, 0060b635] [0060b639, 0060b656] [0060b65a, 0060b674] [0060b678, 0060b698] [0060b69c, 0060b6c3] [0060b6c7, 0060b786] [0060b78a, 0060b7b0] [0060b7b4, 0060b7d1] [0060b7d5, 0060b7ef] [0060b7f3, 0060b811] [0060b815, 0060b8ed] [0060b8f1, 0060b917] [0060b91b, 0060b938] [0060b93c, 0060b956] [0060b95a, 0060b97a] [0060b97e, 0060b9a5] [0060b9a9, 0060ba01] [0060ba05, 0060ba14] [0060ba18, 0060ba24] [0060ba28, 0060ba48]]


/* WARNING: Removing unreachable block (ram,0x0060b472) */
/* WARNING: Removing unreachable block (ram,0x0060b47e) */
/* WARNING: Removing unreachable block (ram,0x0060b4f7) */
/* WARNING: Removing unreachable block (ram,0x0060b503) */
/* WARNING: Removing unreachable block (ram,0x0060b517) */
/* WARNING: Removing unreachable block (ram,0x0060b523) */
/* WARNING: Removing unreachable block (ram,0x0060b532) */
/* WARNING: Removing unreachable block (ram,0x0060b541) */
/* WARNING: Removing unreachable block (ram,0x0060b557) */
/* WARNING: Removing unreachable block (ram,0x0060b563) */
/* WARNING: Removing unreachable block (ram,0x0060b576) */
/* WARNING: Removing unreachable block (ram,0x0060b578) */
/* WARNING: Removing unreachable block (ram,0x0060b583) */
/* WARNING: Removing unreachable block (ram,0x0060ba3d) */
/* WARNING: Removing unreachable block (ram,0x0060b58c) */
/* WARNING: Removing unreachable block (ram,0x0060b62a) */
/* WARNING: Removing unreachable block (ram,0x0060b639) */
/* WARNING: Removing unreachable block (ram,0x0060b64e) */
/* WARNING: Removing unreachable block (ram,0x0060b65a) */
/* WARNING: Removing unreachable block (ram,0x0060b66c) */
/* WARNING: Removing unreachable block (ram,0x0060b678) */
/* WARNING: Removing unreachable block (ram,0x0060b68d) */
/* WARNING: Removing unreachable block (ram,0x0060b69c) */
/* WARNING: Removing unreachable block (ram,0x0060b6bb) */
/* WARNING: Removing unreachable block (ram,0x0060b6c7) */
/* WARNING: Removing unreachable block (ram,0x0060b6cc) */
/* WARNING: Removing unreachable block (ram,0x0060b720) */
/* WARNING: Removing unreachable block (ram,0x0060b727) */
/* WARNING: Removing unreachable block (ram,0x0060b77b) */
/* WARNING: Removing unreachable block (ram,0x0060b78a) */
/* WARNING: Removing unreachable block (ram,0x0060b7a5) */
/* WARNING: Removing unreachable block (ram,0x0060b7b4) */
/* WARNING: Removing unreachable block (ram,0x0060b7c9) */
/* WARNING: Removing unreachable block (ram,0x0060b7d5) */
/* WARNING: Removing unreachable block (ram,0x0060b7e7) */
/* WARNING: Removing unreachable block (ram,0x0060b7f3) */
/* WARNING: Removing unreachable block (ram,0x0060b809) */
/* WARNING: Removing unreachable block (ram,0x0060b815) */
/* WARNING: Removing unreachable block (ram,0x0060b870) */
/* WARNING: Removing unreachable block (ram,0x0060b877) */
/* WARNING: Removing unreachable block (ram,0x0060b8e2) */
/* WARNING: Removing unreachable block (ram,0x0060b8f1) */
/* WARNING: Removing unreachable block (ram,0x0060b90c) */
/* WARNING: Removing unreachable block (ram,0x0060b91b) */
/* WARNING: Removing unreachable block (ram,0x0060b930) */
/* WARNING: Removing unreachable block (ram,0x0060b93c) */
/* WARNING: Removing unreachable block (ram,0x0060b94e) */
/* WARNING: Removing unreachable block (ram,0x0060b95a) */
/* WARNING: Removing unreachable block (ram,0x0060b96f) */
/* WARNING: Removing unreachable block (ram,0x0060b97e) */
/* WARNING: Removing unreachable block (ram,0x0060b99d) */
/* WARNING: Removing unreachable block (ram,0x0060b9a9) */
/* WARNING: Removing unreachable block (ram,0x0060b9c2) */
/* WARNING: Removing unreachable block (ram,0x0060ba0f) */

undefined1 * FUN_0060b2c0(undefined1 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int in_stack_00000054;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  uint local_b4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7f795;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350();
  iVar3 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar5 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  iVar6 = 0;
  local_8._0_1_ = 2;
  if (0 < iVar5) {
    do {
      piVar1 = (int *)(in_stack_00000054 + (uint)(byte)(&stack0x00000014)[iVar6] * 8);
      if ((-1 < piVar1[1]) && ((0 < piVar1[1] || (*piVar1 != 0)))) {
        uVar7 = __allmul(*piVar1,piVar1[1]);
        local_b4 = (uint)uVar7 >> 0xf | (int)((ulonglong)uVar7 >> 0x20) << 0x11;
        puVar2 = (undefined4 *)
                 (*(int *)(iVar3 + 0x2c8) + (uint)*(byte *)(iVar3 + 0x288 + iVar6) * 8);
        __allmul(*puVar2,puVar2[1]);
        FUN_0060d560();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  FUN_0060e310(0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar4 = FUN_00475d50();
    local_8._0_1_ = 0x17;
    FUN_00408ed0(uVar4);
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (in_stack_00000054 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

