// FUN_009f7c00 @ 009f7c00 body=[[009f7c00, 009f7ca6]]


int FUN_009f7c00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  piVar4 = (int *)(**(code **)(*in_ECX + 0xd0))();
  iVar2 = *piVar4;
  iVar6 = 0;
  if (param_1 <= piVar4[1] - iVar2 >> 5) {
    iVar7 = 0;
    local_8 = 0;
    if (1 < param_1) {
      iVar5 = (param_1 - 2U >> 1) + 1;
      piVar4 = (int *)(iVar2 + 0x30);
      iVar6 = iVar5 * 2;
      iVar7 = 0;
      do {
        iVar7 = iVar7 + (piVar4[-8] - (uint)((char)piVar4[-5] != '\0'));
        piVar1 = piVar4 + 3;
        iVar3 = *piVar4;
        piVar4 = piVar4 + 0x10;
        local_8 = local_8 + (iVar3 - (uint)((char)*piVar1 != '\0'));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (iVar6 < param_1) {
      iVar5 = *(int *)(iVar6 * 0x20 + 0x10 + iVar2) -
              (uint)(*(char *)(iVar6 * 0x20 + 0x1c + iVar2) != '\0');
    }
    return iVar7 + local_8 + iVar5 + param_2;
  }
  return 0;
}

