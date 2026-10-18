// FUN_00a83570 @ 00a83570 body=[[00a83570, 00a8372e]]


void FUN_00a83570(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  char local_180 [308];
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b5c750;
  pvStack_4c = ExceptionList;
  if (*(int *)(param_1 + 4) == -1) {
    ExceptionList = &pvStack_4c;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    ExceptionList = &pvStack_4c;
    FUN_004013e0();
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    FUN_004013e0();
    FUN_004013e0();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  fVar1 = *(float *)(in_ECX + 0xc);
  FUN_009a0940();
  _sprintf(local_180,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_009a0940();
  _sprintf(local_180,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  iVar3 = *(int *)(in_ECX + 0x6c);
  iVar4 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - iVar3 & 0xfffffffcU)) {
    do {
      piVar2 = *(int **)(iVar3 + iVar4 * 4);
      FUN_009a0940();
      (**(code **)(*piVar2 + 4))();
      iVar3 = *(int *)(in_ECX + 0x6c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x70) - iVar3 >> 2);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0();
    FUN_004013e0();
  }
  ExceptionList = pvStack_4c;
  return;
}

