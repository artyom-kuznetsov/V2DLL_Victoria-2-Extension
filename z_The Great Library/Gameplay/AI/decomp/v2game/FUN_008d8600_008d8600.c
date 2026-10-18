// FUN_008d8600 @ 008d8600 body=[[008d8600, 008d865d]]


uint FUN_008d8600(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x188
                    );
  piVar3 = (int *)(**(code **)(*piVar1 + 0x24))();
  if ((char)piVar3 != '\0') {
    piVar3 = (int *)piVar1[0x12];
    while (((int *)piVar1[0x12] <= piVar3 && (piVar3 < (int *)piVar1[0x13]))) {
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
      if (iVar2 == *(int *)(in_ECX + 0x1c)) {
        return CONCAT31((int3)((uint)piVar3 >> 8),1);
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

