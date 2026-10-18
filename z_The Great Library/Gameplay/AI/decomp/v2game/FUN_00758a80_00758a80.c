// FUN_00758a80 @ 00758a80 body=[[00758a80, 00758b09]]


void FUN_00758a80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x74);
  iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 0x78);
  iVar3 = (**(code **)(*in_ECX + 0x6c))();
  *(float *)(iVar3 + 0x334) = (float)iVar1;
  *(float *)(iVar3 + 0x338) = ((float)(iVar2 + -0x14) - *(float *)(iVar3 + 0x2fc)) + 10.0;
  *(undefined4 *)(iVar3 + 0x33c) = *(undefined4 *)(iVar3 + 0x334);
  *(undefined4 *)(iVar3 + 0x340) = *(undefined4 *)(iVar3 + 0x338);
  return;
}

