// FUN_004cb090 @ 004cb090 body=[[004cb090, 004cb108]]


undefined1 * FUN_004cb090(undefined1 *param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00416db0();
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x10) != 0)) {
    (**(code **)(**(int **)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(in_ECX + 8) * 4) + 0x1c))
              (param_1);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX + 0x34,0,0xffffffff);
  return param_1;
}

