// FUN_00b20410 @ 00b20410 body=[[00b20410, 00b204a9]]


undefined4 FUN_00b20410(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00b1fb50(param_2);
  if (iVar2 != 0) {
    FUN_00b2a660(DAT_00f20aa0);
    puVar1 = DAT_00f20a84;
    if (DAT_00f20a84 != (undefined4 *)0x0) {
      iVar2 = FUN_00b201e0(DAT_00f20a84,&param_2,0);
      if (iVar2 == 0) {
        FUN_00b2a680(DAT_00f20aa0);
        return 0;
      }
      uVar3 = (**(code **)(puVar1[3] + 0x2c))(*puVar1,param_2);
      FUN_00b2a680(DAT_00f20aa0);
      return uVar3;
    }
    FUN_00b1f840("Write directory is not set");
    FUN_00b2a680(DAT_00f20aa0);
  }
  return 0;
}

