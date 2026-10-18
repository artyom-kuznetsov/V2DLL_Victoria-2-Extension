// FUN_00454dc0 @ 00454dc0 body=[[00454dc0, 00454e83]]


int * FUN_00454dc0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  *param_2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2;
  if ((iVar3 == 0) || (local_8 = 0, iVar3 < 1)) {
    return param_2;
  }
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + local_8 * 4);
    iVar4 = 0;
    iVar5 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2;
    if (0 < iVar5) {
      do {
        cVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + iVar4 * 4) + 0x18))(param_3);
        if (cVar1 == '\0') goto LAB_00454e59;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    iVar2 = __alldiv((longlong)*param_2 *
                     (longlong)*(int *)(*(int *)(*(int *)(param_1 + 0x30) + local_8 * 4) + 0x20),
                     1000,0);
    *param_2 = iVar2;
    if (iVar2 < 1) {
      return param_2;
    }
LAB_00454e59:
    local_8 = local_8 + 1;
    if (iVar3 <= local_8) {
      return param_2;
    }
  } while( true );
}

