// FUN_007a7fa0 @ 007a7fa0 body=[[007a7fa0, 007a806c]]


void FUN_007a7fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if ((*(char *)(in_ECX + 0x3bc) == '\0') && (*(int *)(in_ECX + 0x3a0) != 0)) {
    ExceptionList = &local_10;
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c8) + 0x14))();
    if (((float10)10.0 < fVar3 - (float10)*(double *)(in_ECX + 0x3c0)) &&
       (*(int *)(in_ECX + 0x398) != 0)) {
      iVar1 = FUN_00aae9af(0x74);
      local_8 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00a09ba0(*(int *)(in_ECX + 0x3a0) + 0x58,*(int *)(in_ECX + 0x3a0) + 0x74);
      }
      local_8 = 0xffffffff;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x398) + 0x38) + 0x18))(uVar2);
      fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c8) + 0x14))();
      *(double *)(in_ECX + 0x3c0) = (double)fVar3;
    }
  }
  ExceptionList = local_10;
  return;
}

