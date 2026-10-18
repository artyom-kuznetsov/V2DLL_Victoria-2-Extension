// FUN_00658f20 @ 00658f20 body=[[00658f20, 00658f73]]


undefined4 FUN_00658f20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (((char)param_1[1] == '\0') && (cVar1 = (**(code **)(*param_1 + 8))(), cVar1 != '\0')) {
    if (*(int *)(in_ECX + 0x1608) != 0) {
      iVar2 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1600) + 4))();
      iVar3 = (**(code **)(*param_1 + 4))();
      if (iVar3 != iVar2) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

