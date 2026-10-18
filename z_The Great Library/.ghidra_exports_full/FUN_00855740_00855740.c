// FUN_00855740 @ 00855740 body=[[00855740, 00855777]]


void FUN_00855740(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  if (*(int **)(param_1 + 0x144) == in_ECX) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x58);
    iVar2 = (**(code **)(*in_ECX + 0xe8))();
    FUN_00823890(*(undefined4 *)(iVar2 + 0x210),uVar1,0,0x78);
  }
  return;
}

