// FUN_007d1e30 @ 007d1e30 body=[[007d1e30, 007d1e4c] [007d1e50, 007d1eb2]]


void FUN_007d1e30(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_3 < param_2) {
    while( true ) {
      iVar3 = (param_2 + -1) / 2;
      puVar1 = (uint *)FUN_007c7d90();
      puVar2 = (uint *)FUN_007c7d90();
      if ((int)puVar1[1] < (int)puVar2[1]) break;
      if ((((int)puVar1[1] <= (int)puVar2[1]) && (*puVar1 <= *puVar2)) ||
         (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4),
         param_2 = iVar3, iVar3 <= param_3)) break;
    }
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}

