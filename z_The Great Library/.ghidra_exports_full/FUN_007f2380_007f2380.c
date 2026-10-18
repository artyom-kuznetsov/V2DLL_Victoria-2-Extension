// FUN_007f2380 @ 007f2380 body=[[007f2380, 007f2398] [007f23a0, 007f2478]]


void FUN_007f2380(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_8;
  
  iVar3 = param_1;
  puVar4 = (undefined2 *)(param_1 + 700);
  iVar7 = 300;
  do {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 400) * *(int *)(param_1 + 0x18c)) {
    param_1 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x130 + *(int *)(iVar3 + 0x19c));
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 100);
          uVar6 = uVar8;
          FUN_0099e240(uVar8);
          piVar5 = (int *)FUN_00868600(uVar6);
          iVar7 = 0;
          if ((int *)*piVar5 != (int *)0x0) {
            iVar7 = *(int *)*piVar5;
          }
          uVar6 = piVar5[2];
          if (*(uint *)(iVar7 + 8) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(iVar7 + 8);
          }
          FUN_009f9630(*(undefined4 *)(*(int *)(iVar7 + 4) + uVar6 * 4),uVar2,300,0x14,0x102,1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      param_1 = param_1 + 0x3c0;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar3 + 400) * *(int *)(iVar3 + 0x18c));
  }
  return;
}

