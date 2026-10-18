// FUN_00a4cb80 @ 00a4cb80 body=[[00a4cb80, 00a4cbcd]]


void FUN_00a4cb80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_ECX;
  
  do {
    for (iVar1 = *(int *)(param_2 + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
      FUN_00a4cbd0(in_ECX,param_1,iVar1);
    }
    if (*(int *)(param_2 + 0x48) != 0) {
      FUN_00a4cb80(param_1,*(int *)(param_2 + 0x48));
    }
    param_2 = *(int *)(param_2 + 0x4c);
  } while (param_2 != 0);
  return;
}

