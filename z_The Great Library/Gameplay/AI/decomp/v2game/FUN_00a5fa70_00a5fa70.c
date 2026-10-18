// FUN_00a5fa70 @ 00a5fa70 body=[[00a5fa70, 00a5faac] [00a5fab0, 00a5fb3f]]


undefined4 * FUN_00a5fa70(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40de9;
  local_10 = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  piVar3 = param_1;
  while (iVar1 = param_1[1] - *param_1 >> 0x1f,
        iVar2 < (int)(-(uint)((param_1[1] - *param_1) / 0x1c + iVar1 != iVar1) & 2)) {
    if ((iVar2 < 2) && (param_3 < (piVar3[1] - *piVar3) / 0x1c)) {
      FUN_00a840b0();
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
    }
    else {
      FUN_00a840b0();
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
    }
  }
  ExceptionList = local_10;
  return param_2;
}

