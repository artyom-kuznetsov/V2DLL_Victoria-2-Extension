// FUN_009e4c80 @ 009e4c80 body=[[009e4c80, 009e4cd9]]


void FUN_009e4c80(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009e6b30(in_ECX + 0x27c,in_ECX + 0x26c);
  if (iVar1 == 0) {
    iVar1 = FUN_009e6b30(in_ECX + 0x29c,in_ECX + 0x28c);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(in_ECX + 0x370) + 4))(param_1);
    }
  }
  return;
}

