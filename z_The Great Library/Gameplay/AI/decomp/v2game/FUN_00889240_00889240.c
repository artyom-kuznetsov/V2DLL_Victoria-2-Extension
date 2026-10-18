// FUN_00889240 @ 00889240 body=[[00889240, 008892e8]]


void FUN_00889240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  
  FUN_008a88d0();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  puVar6 = *(undefined4 **)(iVar1 + 0xd88);
  while ((*(undefined4 **)(iVar1 + 0xd88) <= puVar6 && (puVar6 < *(undefined4 **)(iVar1 + 0xd8c))))
  {
    local_48 = *puVar6;
    iVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    local_44 = iVar2;
    cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50);
    if ((cVar5 == '\x01') && (iVar2 != *(int *)(param_1 + 0xc))) {
      puVar3 = *(undefined4 **)(in_ECX + 8);
      while (puVar3 != (undefined4 *)0x0) {
        piVar4 = (int *)*puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        (**(code **)(*piVar4 + 0x2c))(local_50,param_2);
      }
    }
  }
  return;
}

