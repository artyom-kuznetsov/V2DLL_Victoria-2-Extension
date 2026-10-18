// FUN_00b20300 @ 00b20300 body=[[00b20300, 00b20402]]


int FUN_00b20300(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_8;
  
  local_8 = 1;
  iVar2 = FUN_00b1fb50(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00b2a660(DAT_00f20aa0);
  puVar1 = DAT_00f20a84;
  if (DAT_00f20a84 != (undefined4 *)0x0) {
    iVar2 = FUN_00b201e0(DAT_00f20a84,&param_2,1);
    puVar3 = param_2;
    if (iVar2 != 0) {
      while( true ) {
        puVar3 = (undefined1 *)FUN_00ab4790(puVar3,0x2f);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0;
        }
        if ((local_8 == 0) ||
           (iVar2 = (**(code **)(puVar1[3] + 0x14))(*puVar1,param_2,&local_8), local_8 == 0)) {
          iVar2 = (**(code **)(puVar1[3] + 0x30))(*puVar1,param_2);
        }
        if ((iVar2 == 0) || (puVar3 == (undefined1 *)0x0)) break;
        *puVar3 = 0x2f;
        puVar3 = puVar3 + 1;
      }
      FUN_00b2a680(DAT_00f20aa0);
      return iVar2;
    }
    FUN_00b2a680(DAT_00f20aa0);
    return 0;
  }
  FUN_00b1f840("Write directory is not set");
  FUN_00b2a680(DAT_00f20aa0);
  return 0;
}

