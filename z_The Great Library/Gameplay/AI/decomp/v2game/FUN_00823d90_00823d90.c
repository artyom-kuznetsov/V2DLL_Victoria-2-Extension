// FUN_00823d90 @ 00823d90 body=[[00823d90, 00823da9] [00823db0, 00823db8] [00823dc2, 00823e63]]


void FUN_00823d90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  
  iVar4 = DAT_012587e4;
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar5 = DAT_012588e8;
  iVar3 = DAT_0125870c;
  if (*(char *)(*(int *)(*(int *)(iVar4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x67c) != '\0') {
    puVar7 = (uint *)(DAT_0125870c + 0x50);
    for (piVar6 = *(int **)(DAT_0125870c + 0x50);
        ((int *)*puVar7 <= piVar6 && (piVar6 < *(int **)(iVar3 + 0x54))); piVar6 = piVar6 + 3) {
      uVar1 = *(undefined4 *)(*(int *)(iVar5 + 0xacc) + *piVar6 * 4);
      uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0xacc) + piVar6[1] * 4);
      FUN_00823e70(param_1,uVar1,uVar2,piVar6[2]);
      FUN_00823e70(param_1,uVar2,uVar1,piVar6[2]);
    }
  }
  return;
}

