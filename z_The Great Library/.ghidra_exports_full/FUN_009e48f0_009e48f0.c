// FUN_009e48f0 @ 009e48f0 body=[[009e48f0, 009e4a14]]


int FUN_009e48f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  iVar2 = FUN_009e6b30(in_ECX + 0x27c,in_ECX + 0x26c);
  if (iVar2 == 0) {
    iVar2 = FUN_009e6b30(in_ECX + 0x29c,in_ECX + 0x28c);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(in_ECX + 0x370) + 4))(param_1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(in_ECX + 0x370) + 4))();
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)(in_ECX + 0x34c) + 4))(param_1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(in_ECX + 0x34c) + 4))();
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)(in_ECX + 0x394) + 4))(param_1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(in_ECX + 0x394) + 4))();
        return iVar2;
      }
      cVar1 = FUN_009e68a0(in_ECX + 0x424,param_1);
      if (cVar1 != '\0') {
        piVar3 = (int *)FUN_009e6960(in_ECX + 0x424,param_1);
        if (*piVar3 != 0) {
          return *piVar3 + 0x18;
        }
        return 0;
      }
      iVar2 = FUN_009e6b30(in_ECX + 0x31c,in_ECX + 0x30c);
    }
  }
  return iVar2;
}

