// FUN_00442d40 @ 00442d40 body=[[00442d40, 00442dee]]


void FUN_00442d40(undefined4 param_1)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  short sVar6;
  undefined1 local_8 [4];
  
  piVar3 = *(int **)(in_ECX + 0x10);
  if (*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 != 0) {
      iVar5 = FUN_00475500();
      fVar1 = *(float *)(iVar4 + 0x348);
      if (*(float *)(iVar5 + 0xf8) <= fVar1) {
        sVar6 = -0x16;
      }
      else {
        sVar6 = (short)(int)((fVar1 / *(float *)(iVar5 + 0xf8)) * -22.0);
      }
      goto LAB_00442dae;
    }
  }
  sVar6 = 0;
LAB_00442dae:
  iVar4 = (**(code **)(*piVar3 + 0x60))(local_8);
  sVar2 = *(short *)(iVar4 + 2);
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(short *)(in_ECX + 0x1e) = sVar2 * *(short *)(in_ECX + 0x68) + sVar6;
  FUN_0043f240(param_1);
  FUN_00442ab0();
  return;
}

