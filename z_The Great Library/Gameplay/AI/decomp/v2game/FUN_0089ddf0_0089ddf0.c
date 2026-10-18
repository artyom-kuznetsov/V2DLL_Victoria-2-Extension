// FUN_0089ddf0 @ 0089ddf0 body=[[0089ddf0, 0089de93]]


void FUN_0089ddf0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int in_ECX;
  uint *puVar5;
  int *piVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  
  FUN_008a88d0();
  iVar3 = DAT_012588e8;
  piVar6 = *(int **)(DAT_012588e8 + 0xbe0);
  puVar5 = (uint *)(DAT_012588e8 + 0xbe0);
  while (((int *)*puVar5 <= piVar6 && (piVar6 < *(int **)(iVar3 + 0xbe4)))) {
    local_48 = *(undefined4 *)(*piVar6 + 0x1c);
    local_44 = *(int *)(*piVar6 + 0x20);
    piVar6 = piVar6 + 1;
    cVar4 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50);
    if ((cVar4 == '\x01') && (local_44 != *(int *)(param_1 + 0xc))) {
      puVar1 = *(undefined4 **)(in_ECX + 8);
      while (puVar1 != (undefined4 *)0x0) {
        piVar2 = (int *)*puVar1;
        puVar1 = (undefined4 *)puVar1[2];
        (**(code **)(*piVar2 + 0x2c))(local_50,param_2);
      }
    }
  }
  return;
}

