// FUN_005ec040 @ 005ec040 body=[[005ec040, 005ec2b3]]


void FUN_005ec040(char param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_1c;
  int local_14;
  
  iVar3 = (**(code **)(*DAT_012588e8 + 0x1c))();
  if (param_1 == '\0') {
    for (local_1c = 0; local_1c < iVar3; local_1c = local_1c + 1) {
      FUN_00416e60();
      uVar4 = FUN_00423910();
      FUN_00401490();
      FUN_00416e30();
      FUN_004236a0(uVar4);
      FUN_00401490();
      FUN_00423910();
      FUN_004138a0();
    }
  }
  else {
    for (local_14 = 0; local_14 < iVar3; local_14 = local_14 + 1) {
      FUN_00416e60();
      iVar1 = *(int *)(in_ECX + 0xc);
      FUN_00401490();
      FUN_00416e30();
      FUN_00423910();
      FUN_004f6520(iVar1 + 0x1c);
      FUN_004138a0();
      FUN_00423910();
      cVar2 = FUN_0048b620();
      if (cVar2 != '\0') {
        uVar4 = FUN_00423910();
        FUN_00401490();
        FUN_00416e30();
        FUN_004236a0(uVar4);
        FUN_00401490();
        FUN_00423910();
        FUN_004138a0();
      }
    }
  }
  return;
}

