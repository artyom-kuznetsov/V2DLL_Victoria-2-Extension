// FUN_00888f50 @ 00888f50 body=[[00888f50, 00889075]]


void FUN_00888f50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  int local_5c;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  
  FUN_008a88d0();
  local_38 = 0;
  local_44 = 0;
  local_48 = 0x2d2d2d;
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  iVar2 = *(int *)(iVar1 + 0x5c);
  iVar6 = 0;
  if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
    local_5c = 0;
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(local_5c + 4 + *(int *)(iVar2 + 200)) * 4);
      if (*(int *)(iVar2 + 300) != 0) {
        local_40 = *(undefined4 *)(iVar2 + 0x58);
        cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50);
        if (cVar5 != '\0') {
          puVar3 = *(undefined4 **)(in_ECX + 8);
          while (puVar3 != (undefined4 *)0x0) {
            piVar4 = (int *)*puVar3;
            puVar3 = (undefined4 *)puVar3[2];
            (**(code **)(*piVar4 + 0x2c))(local_50,param_2);
          }
        }
      }
      iVar2 = *(int *)(iVar1 + 0x5c);
      local_5c = local_5c + 0x24;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
  }
  return;
}

