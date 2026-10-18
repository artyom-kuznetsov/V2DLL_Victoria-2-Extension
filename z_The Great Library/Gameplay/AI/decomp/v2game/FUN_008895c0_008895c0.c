// FUN_008895c0 @ 008895c0 body=[[008895c0, 00889663]]


void FUN_008895c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined1 auStack_54 [4];
  undefined1 local_50 [8];
  undefined4 uStack_48;
  int iStack_44;
  
  FUN_008a88d0();
  iVar5 = 0;
  iVar4 = (**(code **)(*DAT_012588e8 + 0x1c))();
  if (0 < iVar4) {
    do {
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4);
      uStack_48 = *(undefined4 *)(iVar4 + 0x1c);
      iVar4 = *(int *)(iVar4 + 0x20);
      iStack_44 = iVar4;
      cVar3 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50);
      if ((cVar3 == '\x01') && (iVar4 != *(int *)(param_1 + 0xc))) {
        puVar1 = *(undefined4 **)(in_ECX + 8);
        while (puVar1 != (undefined4 *)0x0) {
          piVar2 = (int *)*puVar1;
          puVar1 = (undefined4 *)puVar1[2];
          (**(code **)(*piVar2 + 0x2c))(auStack_54,param_2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = (**(code **)(*DAT_012588e8 + 0x1c))();
    } while (iVar5 < iVar4);
  }
  return;
}

