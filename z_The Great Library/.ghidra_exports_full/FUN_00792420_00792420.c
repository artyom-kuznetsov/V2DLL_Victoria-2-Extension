// FUN_00792420 @ 00792420 body=[[00792420, 00792488]]


undefined4 FUN_00792420(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(in_EAX + 0x10) + iVar3 * 4) + 0x18) + 0x94))
                        (param_1);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) >> 2);
  }
  uVar2 = (**(code **)(*(int *)(*(int *)(in_EAX + 4) + 0x18) + 0x94))(param_1);
  return uVar2;
}

