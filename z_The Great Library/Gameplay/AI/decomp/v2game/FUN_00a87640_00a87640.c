// FUN_00a87640 @ 00a87640 body=[[00a87640, 00a876b3]]


void FUN_00a87640(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uStack_14;
  undefined1 local_8 [4];
  
  iVar1 = *(int *)(in_ECX + 0x14);
  uVar2 = (**(code **)(*param_1 + 0x24))(param_2);
  (**(code **)(iVar1 + 8))(local_8,uVar2);
  if (*(int *)(in_ECX + -0x44) != 0) {
    FUN_00a87850(*(int *)(in_ECX + -0x44),CONCAT44(uStack_14,in_ECX + -0xa0),0xa87510);
  }
  return;
}

