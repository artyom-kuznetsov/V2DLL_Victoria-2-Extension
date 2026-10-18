// FUN_004424a0 @ 004424a0 body=[[004424a0, 0044255e]]


void FUN_004424a0(int *param_1)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  short sVar6;
  int **ppiVar7;
  int *piStack_1c;
  undefined1 *puStack_18;
  undefined1 local_8 [4];
  
  piVar3 = *(int **)(in_ECX + 0x10);
  if (*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0) {
    puStack_18 = (undefined1 *)0x4424c2;
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 != 0) {
      puStack_18 = (undefined1 *)0x4424ce;
      iVar5 = FUN_00475500();
      fVar1 = *(float *)(iVar4 + 0x348);
      if (*(float *)(iVar5 + 0xf8) <= fVar1) {
        sVar6 = -0x16;
      }
      else {
        sVar6 = (short)(int)((fVar1 / *(float *)(iVar5 + 0xf8)) * -22.0);
      }
      goto LAB_0044250e;
    }
  }
  sVar6 = 0;
LAB_0044250e:
  puStack_18 = local_8;
  piStack_1c = (int *)0x44251b;
  iVar4 = (**(code **)(*piVar3 + 0x60))();
  sVar2 = *(short *)(iVar4 + 2);
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  piStack_1c = param_1;
  *(short *)(in_ECX + 0x1e) = sVar2 * *(short *)(in_ECX + 0x30) + sVar6;
  FUN_0043f240();
  piStack_1c = *(int **)(in_ECX + 0x24);
  if (piStack_1c != (int *)0x0) {
    ppiVar7 = &piStack_1c;
    (**(code **)(*piStack_1c + 0x1c))(&piStack_1c);
    FUN_004423e0(ppiVar7);
  }
  return;
}

