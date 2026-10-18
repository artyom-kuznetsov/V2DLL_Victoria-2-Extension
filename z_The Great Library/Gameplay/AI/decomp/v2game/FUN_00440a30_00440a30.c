// FUN_00440a30 @ 00440a30 body=[[00440a30, 00440ab9]]


void FUN_00440a30(undefined4 param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  if (*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar3 != 0) {
      iVar4 = FUN_00475500();
      fVar1 = *(float *)(iVar3 + 0x348);
      if (*(float *)(iVar4 + 0xf8) <= fVar1) {
        uVar2 = 0xffea;
      }
      else {
        uVar2 = (undefined2)(int)((fVar1 / *(float *)(iVar4 + 0xf8)) * -22.0);
      }
      goto LAB_00440a99;
    }
  }
  uVar2 = 0;
LAB_00440a99:
  *(undefined2 *)(in_ECX + 0x1e) = uVar2;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  FUN_0043f240(param_1);
  FUN_00440250(in_ECX);
  return;
}

