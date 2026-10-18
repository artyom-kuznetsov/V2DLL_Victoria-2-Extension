// FUN_00860e80 @ 00860e80 body=[[00860e80, 00860ecd]]


void FUN_00860e80(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  cVar2 = (**(code **)(*param_1 + 0x38))();
  iVar1 = *in_ECX;
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x2c))();
    (**(code **)(iVar1 + 0xdc))(uVar3);
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(iVar1 + 0xe0))(uVar3);
  return;
}

