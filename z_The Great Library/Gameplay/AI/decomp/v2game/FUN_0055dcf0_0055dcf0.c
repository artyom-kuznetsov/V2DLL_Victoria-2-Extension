// FUN_0055dcf0 @ 0055dcf0 body=[[0055dcf0, 0055dd3c]]


void FUN_0055dcf0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_EDI;
  
  for (uVar1 = *param_1; (*param_1 <= uVar1 && (uVar1 < param_1[1])); uVar1 = uVar1 + 8) {
    FUN_005dcbd0(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar1 + 4) * 4) + 0x7b4,param_2,
                 unaff_EDI);
  }
  return;
}

