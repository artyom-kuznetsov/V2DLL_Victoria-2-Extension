// FUN_00583520 @ 00583520 body=[[00583520, 005835f3]]


void FUN_00583520(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x60) == '\0') {
    iVar2 = FUN_00aae9af(0x2c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005e9d40(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4)
                          );
    }
    FUN_005e9c80(in_ECX + 0x44);
  }
  else {
    iVar2 = FUN_00aae9af(0x2c);
    if (iVar2 == 0) {
      iVar2 = 0;
      FUN_005e9c80(in_ECX + 0x44);
    }
    else {
      iVar2 = FUN_005e9c50(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4)
                          );
      FUN_005e9c80(in_ECX + 0x44);
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  (**(code **)(*(int *)(iVar1 + 0x9b4) + 0x18))(iVar2);
  return;
}

