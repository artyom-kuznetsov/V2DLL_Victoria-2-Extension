// FUN_00911130 @ 00911130 body=[[00911130, 00911191]]


void FUN_00911130(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x20))();
  if (iVar1 == 0) {
    uVar2 = FUN_0090e850(param_2);
    *(undefined4 *)(in_ECX + 0x3c) = uVar2;
  }
  if (((param_2 != 0xc3) && (param_2 != 200)) && (param_2 != 0xf3)) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0xc))(param_1);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

