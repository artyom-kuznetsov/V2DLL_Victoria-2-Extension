// FUN_009b5110 @ 009b5110 body=[[009b5110, 009b51aa]]


int FUN_009b5110(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_8;
  
  iVar2 = FUN_009b2d60(param_1);
  *(int *)(in_ECX + 0x14c) = *(int *)(in_ECX + 0x14c) - iVar2;
  if ((*(int *)(in_ECX + 0x104) != 0) && (*(char *)(in_ECX + 0x146) == '\0')) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x104) + 0x54);
    local_8 = 1000;
    FUN_0043d130(&local_8);
    (**(code **)(iVar1 + 0x14))();
  }
  return iVar2;
}

