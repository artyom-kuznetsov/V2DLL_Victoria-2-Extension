// FUN_008019b0 @ 008019b0 body=[[008019b0, 00801a08] [00801a10, 00801c48]]


void FUN_008019b0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_8 = 1;
  if (1 < iVar3) {
    fVar5 = 0.3;
    fVar6 = DAT_00f1f760;
    fVar7 = DAT_00f17898;
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4) + 0xc);
      if (*(int *)(iVar2 + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
        uVar4 = FUN_009b6df0();
        fVar1 = (float)((float10)*(longlong *)(*(int *)(iVar2 + 0x188) + 0xc0) *
                       (float10)3.0517578125e-05);
        if (((((fVar1 < 0.2) || (fVar1 < fVar5)) || (fVar1 < 0.4)) ||
            ((fVar1 < fVar7 || (fVar1 < fVar6)))) ||
           ((fVar1 < 0.7 || ((fVar1 < 0.8 || (fVar1 < 0.9)))))) {
          uVar4 = FUN_009b6df0();
        }
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_8 * 4) = uVar4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4) + 4) = uVar4;
      }
      else {
        uVar4 = FUN_009b6df0();
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_8 * 4) = uVar4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4) + 4) = uVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  return;
}

